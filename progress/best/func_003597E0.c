extern void *func_002DDA20(void);
extern void func_0031DA60(void *, s32, s32);
extern void func_003F931C(void *, void *, s32);
extern void D_002AD530(void *);
extern s32 D_002AD5A8(s32, s32);
extern f32 D_0042D2C4;
extern s32 D_0043C000;

static inline s32 fxp(f32 v) {
    u32 bits = *(u32 *)&v;
    s32 sign = (s32)bits >> 31;
    s32 mant = bits & 0x7FFFFF;
    s32 e = ((bits >> 23) & 0xFF) - 127;
    s32 mask = ~(e >> 31);
    s32 r = (s32)(((u32)((mant | 0x800000) << 8) >> (31 - e)) & mask);
    if (((mant << 8) & ((1 << (31 - (e & mask))) - 1)) == 0) {
        r ^= sign;
        r -= sign;
    }
    return r;
}

void func_003597E0(u8 *arg0, u8 *arg1) {
    u8 *t22, *sp40, *t2, *t16, *p2, *p3, *aligned, *base, *tail;
    s32 sp44, var_18, need, val10, alloc, t16c, t16c2, old4;
    s32 var_21, chunk, var_17, var_9, off, v, c;
    u8 *tbl, *rec, *dst, *d1, *d2p, *d3;
    f32 f3, f22, f21, f20, f4, f0, f1, d2;
    f32 tmp[16];

    t22 = *(u8 **)(arg0 + 0x1068);
    sp40 = *(u8 **)(t22 + 0x1C);
    t2 = func_002DDA20();
    t16 = *(u8 **)(sp40 + 0x10);
    sp44 = *(s32 *)(arg1 + 0x30);
    var_18 = sp44;
    p2 = *(u8 **)(t2 + 0xC);
    p3 = *(u8 **)(p2 + 0x30);
    f3 = *(f32 *)(p3 + 0x11C);
    tmp[4] = 128.0f; tmp[5] = 128.0f; tmp[6] = 128.0f; tmp[15] = 1.0f;
    tmp[2] = 0.0f; tmp[3] = 0.0f;
    tmp[8] = 0.0f; tmp[9] = 0.0f; tmp[10] = 0.0f; tmp[11] = 0.0f;
    f22 = 64.0f / f3;
    f21 = (D_0042D2C4 * 64.0f) / f3;
    f20 = *(f32 *)(arg1 + 0x3C) * 3.0f;
    t16c = *(s32 *)(t16 + 0xC);
    if ((*(s32 *)(t16 + 8) - t16c) < var_18) {
        need = (t16c + var_18 + 0xFF) & ~0xFF;
        val10 = *(s32 *)(t16 + 0x10);
        D_0043C000 = val10;
        alloc = D_002AD5A8((need << 6) | 0x80, val10);
        t16c2 = *(s32 *)(t16 + 0xC);
        aligned = (u8 *)((alloc + 0x7F) & 0xFFFFFF80);
        if (t16c2 > 0) func_003F931C(aligned, *(void **)(t16 + 0), t16c2 << 6);
        old4 = *(s32 *)(t16 + 4);
        if (old4) D_002AD530((void *)old4);
        *(s32 *)(t16 + 4) = alloc;
        *(u8 **)(t16 + 0) = aligned;
        *(s32 *)(t16 + 8) = need;
        D_0043C000 = 0;
    }
    var_21 = 0;
    if (sp44 > 0) {
        do {
            chunk = (var_18 < 0x1F) ? var_18 : 0x1E;
            var_17 = 0;
            var_9 = chunk - 1;
            var_18 -= chunk;
            f4 = 1.0f / (35.0f - (2.0f * *(f32 *)(arg0 + 0x100C)));
            if (var_9 >= 0) {
                off = var_21 * 0xC - 0xC;
                tbl = *(u8 **)(arg1 + 0x24);
                do {
                    off += 0xC;
                    var_21++;
                    rec = tbl + off;
                    f0 = (*(f32 *)(rec + 0) - *(f32 *)(arg0 + 0x1010)) * f4;
                    f1 = (*(f32 *)(rec + 8) - *(f32 *)(arg0 + 0x1018)) * f4;
                    d2 = ((f0 * f0) + (f1 * f1)) * 1024.0f;
                    v = fxp(d2);
                    if (v < 0x3FF) {
                        var_17++;
                        tmp[0] = f21 * f20;
                        tmp[1] = f22 * f20;
                        tmp[7] = *(f32 *)(arg0 + v * 4);
                        tmp[12] = *(f32 *)(rec + 0);
                        tmp[13] = *(f32 *)(rec + 4);
                        tmp[14] = *(f32 *)(rec + 8);
                        c = *(s32 *)(t16 + 0xC);
                        dst = *(u8 **)(t16 + 0) + (c << 6);
                        *(s32 *)(t16 + 0xC) = c + 1;
                        d1 = dst + 0x10; d2p = dst + 0x20; d3 = dst + 0x30;
                        *(f32 *)(dst + 0) = tmp[0];
                        *(f32 *)(dst + 4) = tmp[1];
                        *(f32 *)(dst + 8) = tmp[2];
                        *(f32 *)(dst + 0xC) = tmp[3];
                        *(f32 *)(dst + 0x10) = tmp[4];
                        *(f32 *)(d1 + 4) = tmp[5];
                        *(f32 *)(d1 + 8) = tmp[6];
                        *(f32 *)(d1 + 0xC) = tmp[7];
                        *(f32 *)(dst + 0x20) = tmp[8];
                        *(f32 *)(d2p + 4) = tmp[9];
                        *(f32 *)(d2p + 8) = tmp[10];
                        *(f32 *)(d2p + 0xC) = tmp[11];
                        *(f32 *)(dst + 0x30) = tmp[12];
                        *(f32 *)(d3 + 4) = tmp[13];
                        *(f32 *)(d3 + 8) = tmp[14];
                        *(f32 *)(d3 + 0xC) = tmp[15];
                    }
                    var_9--;
                } while (var_9 >= 0);
            }
            if (var_17 > 0) {
                base = *(u8 **)(t16 + 0);
                tail = base + (*(s32 *)(t16 + 0xC) << 6);
                *(s32 *)(tail + 0xC) = var_17;
                func_0031DA60(sp40, (void *)(s32)*(u32 *)(t22 + 0x78), var_17);
            }
            *(s32 *)(t22 + 0x78) = *(s32 *)(t16 + 0xC);
        } while (var_18 > 0);
    }
}
