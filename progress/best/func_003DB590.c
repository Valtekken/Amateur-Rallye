extern void *func_003DB190(void *, s32);

typedef struct {
    u8 pad0[4];
    s32 cap_log;
    s32 cap;
    s16 fC;
    s16 fE;
    s32 count;
    u32 data[1];
} S_arr;

void *func_003DB590(void *ret, S_arr *a, S_arr *b) {
    void *out;
    u32 *a_data, *b_data;
    s32 c1, c2, total, bytes;

    c1 = a->count;
    c2 = b->count;
    if (c1 < c2) {
        S_arr *tmp = a;
        a = b;
        b = tmp;
        c1 = a->count;
        c2 = b->count;
    }
    total = c1 + c2;
    out = func_003DB190(ret, a->cap_log + (a->cap < total));
    bytes = total * 4;
    u32 *p = ((S_arr *)out)->data;
    while (p < (u32 *)((u8 *)((S_arr *)out)->data + bytes)) {
        *p++ = 0;
    }
    a_data = a->data;
    c1 *= 4;
    b_data = b->data;
    c2 *= 4;
    u32 *bp = b_data;
    u32 *dst = ((S_arr *)out)->data;
    if ((u32)bp < (u32)((u8 *)bp + c2)) {
        do {
            u32 elem = *bp;
            u16 lo = elem & 0xFFFF;
            if (lo != 0) {
                u32 *dp2 = dst;
                u32 *ap2 = a_data;
                u32 carry = 0;
                do {
                    u32 v = *ap2;
                    u32 d = *dp2;
                    ap2++;
                    u32 t = (u16)v * lo + (u16)d + carry;
                    u32 th = (u16)(v >> 16) * lo + (d >> 16) + (t >> 16);
                    carry = th >> 16;
                    *(u16 *)dp2 = (u16)t;
                    *(u16 *)((u8 *)dp2 + 2) = (u16)th;
                    dp2++;
                } while (ap2 < (u32 *)((u8 *)a_data + c1));
                *dp2 = carry;
            }
            u16 hi = *bp >> 16;
            if (hi != 0) {
                u32 *dp2 = dst;
                u32 *ap2 = a_data;
                u32 carry = 0;
                u32 d = *dp2;
                u32 th = d;
                do {
                    u32 v = *ap2;
                    ap2++;
                    u32 t = (u16)v * hi + (d >> 16) + carry;
                    carry = t >> 16;
                    *(u16 *)dp2 = (u16)th;
                    *(u16 *)((u8 *)dp2 + 2) = (u16)t;
                    dp2++;
                    d = *dp2;
                    th = (u16)(v >> 16) * hi + (u16)d + carry;
                    carry = th >> 16;
                } while (ap2 < (u32 *)((u8 *)a_data + c1));
                *dp2 = th;
            }
            bp++;
            dst++;
        } while ((u32)bp < (u32)((u8 *)b_data + c2));
    }
    u32 *trim = (u32 *)((u8 *)((S_arr *)out)->data + bytes);
    while (total > 0) {
        trim--;
        if (*trim != 0) break;
        total--;
    }
    ((S_arr *)out)->count = total;
    return out;
}
