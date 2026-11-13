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

void *func_003DB590(void *arg0, S_arr *arg1, S_arr *arg2) {
    S_arr *a, *b;
    void *ret;
    u32 *bp, *dst, *ap2, *dp2, *p, *a_data, *b_data, *a_end, *end;
    s32 c1, c2, total, n;
    u16 lo, hi;
    u32 elem, carry, v, d, t, th;

    a = arg1;
    b = arg2;
    c1 = a->count;
    c2 = b->count;
    if (c1 < c2) {
        a = arg2;
        b = arg1;
        c1 = a->count;
        c2 = b->count;
    }
    total = c1 + c2;
    ret = func_003DB190(arg0, a->cap_log + (a->cap < total));
    p = ((S_arr *)ret)->data;
    end = (u32 *)((u8 *)p + total * 4);
    if (p < end) {
        a_data = a->data;
        c1 *= 4;
        b_data = b->data;
        c2 *= 4;
        do { *p++ = 0; } while (p < end);
    } else {
        a_data = a->data;
        c1 *= 4;
        b_data = b->data;
        c2 *= 4;
    }
    bp = b_data;
    a_end = a_data + c1;
    end = bp + c2;
    dst = ((S_arr *)ret)->data;
    if ((u32)bp < (u32)end) {
        do {
            elem = *bp;
            lo = elem & 0xFFFF;
            if (lo != 0) {
                dp2 = dst;
                ap2 = a_data;
                carry = 0;
                do {
                    v = *ap2;
                    d = *dp2;
                    ap2++;
                    t = (u16)v * lo + (u16)d + carry;
                    th = (u16)(v >> 16) * lo + (d >> 16) + (t >> 16);
                    carry = th >> 16;
                    *(u16 *)dp2 = (u16)t;
                    *(u16 *)((u8 *)dp2 + 2) = (u16)th;
                    dp2++;
                } while (ap2 < a_end);
                *dp2 = carry;
            }
            {
                u32 *bp2 = bp + 4;
                u32 *dst2 = dst + 4;
                hi = elem >> 16;
                if (hi != 0) {
                    dp2 = dst;
                    ap2 = a_data;
                    carry = 0;
                    v = *dp2;
                    do {
                        d = v;
                        v = *ap2;
                        ap2++;
                        t = (u16)v * hi + (d >> 16) + carry;
                        carry = t >> 16;
                        *(u16 *)dp2 = (u16)d;
                        *(u16 *)((u8 *)dp2 + 2) = (u16)t;
                        dp2++;
                        d = *dp2;
                        v = (u16)(v >> 16) * hi + (u16)d + carry;
                        carry = v >> 16;
                    } while (ap2 < a_end);
                    *dp2 = v;
                }
                bp = bp2;
                dst = dst2;
            }
        } while ((u32)bp < (u32)end);
    }
    n = total;
    p = ((S_arr *)ret)->data + total;
    while (n > 0) {
        p--;
        if (*p != 0) break;
        n--;
    }
    ((S_arr *)ret)->count = n;
    return ret;
}
