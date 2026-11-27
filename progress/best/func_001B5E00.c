extern void *func_0021E9C0(void *, void *);
extern void *func_0021F4B0(void);
extern f32 func_003F2F50(f32);
extern f32 func_003F3140(f32);
extern f32 func_003F3E80(f32);
extern void func_001B25D8(void *, void *, s32);
extern void func_001B28C0(void *, void *, s32);
extern void func_001B2B90(void *, s32, f32);

void func_001B5E00(void *a0, void *a1) {
    f32 s00,s04,s08,s10,s14,s18,s20,s24,s28,s30,s34,s38,s40,s44,s48;
    u8 *self = (u8*)a0;
    void *p = func_0021E9C0(func_0021F4B0(), self+4);
    if (p) {
        u8 *q = *(u8**)(p+0x50);
        if (q) {
            u8 *q5; f32 t, aa, f3, f5, f4, bb, f2, f3b, f1b;
            f32 d0,d1,d2, len2, len, inv;
            q5 = q + 0x50;
            t = *(f32*)(self+0x30) + *(f32*)(self+0x34);
            *(f32*)(self+0x30) = t;
            aa = func_003F2F50(*(f32*)(self+0x2C) * t);
            s20 = *(f32*)(q+0x50) + *(f32*)(self+8);
            s24 = *(f32*)(q5+4) + *(f32*)(self+0xC);
            s28 = *(f32*)(q5+8) + *(f32*)(self+0x10);
            f3 = *(f32*)(self+0x14) * aa;
            f5 = *(f32*)(self+0x1C) * aa;
            f4 = *(f32*)(self+0x18) * aa;
            s10 = s20 + f3;
            s14 = s24 + f4;
            s18 = s28 + f5;
            s30 = *(f32*)(q5+8);
            s34 = f4;
            s38 = f5;
            bb = func_003F3140(*(f32*)(self+0x2C) * *(f32*)(self+0x30));
            f2 = *(f32*)(self+0x20) * bb;
            f3b = *(f32*)(self+0x28) * bb;
            f1b = *(f32*)(self+0x24) * bb;
            s40 = f2; s44 = f1b; s48 = f3b;
            s00 = s10 + f2;
            s04 = s14 + f1b;
            s08 = s18 + f3b;
            s10 = *(f32*)(q+0x50);
            s14 = *(f32*)(q5+4);
            s18 = *(f32*)(q5+8);
            if (*(s32*)(self+0x38)) {
                d0 = s10 - s00;
                d1 = s14 - s04;
                d2 = s18 - s08;
            } else {
                d0 = s10 - *(f32*)((u8*)a1+0xA4);
                d1 = s14 - *(f32*)((u8*)a1+0xA8);
                d2 = s18 - *(f32*)((u8*)a1+0xAC);
            }
            s20=d0; s24=d1; s28=d2; s30=d0; s34=d1; s38=d2;
            len2 = d0*d0 + d1*d1 + d2*d2;
            len = __builtin_sqrtf(len2);
            if (!(len2 > 1.1920929e-7f)) { s20=s24=s28=0; }
            else {
                inv = 1.0f / len;
                s20 *= inv; s28 *= inv; s24 *= inv;
            }
            func_001B25D8(a1, &s00, *(s32*)(self+0x38));
            func_001B28C0(a1, &s20, *(s32*)(self+0x38));
            func_001B2B90(a1, *(s32*)(self+0x38), 0.0f);
        }
    }
}
