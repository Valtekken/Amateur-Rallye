extern s32 *func_001A12E0(void);
extern f32 D_00425D88, D_00479C9C;
void func_00198538(void *arg0) {
    register void *p0 = *(void**)arg0;
    register void *p18 = *(void**)((char*)p0+0x18);
    register void *p4 = *(void**)((char*)p18+0xC);
    register void *p14 = *(void**)((char*)p4+0x14);
    register f32 f, f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f11, f12;
    if (p14 != 0) {
        f = *(f32*)((char*)p0+0x28);
        f = __builtin_fabsf(f);
        if (D_00425D88 < f) {
            *(f32*)((char*)arg0+0x18) = *(f32*)((char*)arg0+0x18) + (f / D_00425D88) * *(f32*)((char*)arg0+0x8);
            return;
        }
    }
    if (*(f32*)((char*)p0+0xEC) > 0.0f) {
        register s32 id = *(s32*)((char*)p0+0xE8);
        s32 *r;
        r = func_001A12E0();
        if (id == r[0]) goto match;
        r = func_001A12E0();
        if (id == r[1]) goto match;
        r = func_001A12E0();
        if (id != r[2]) goto skip;
    match:
        {
            register void *p3 = *(void**)((char*)p4+4);
            register void *p11C = (char*)p3+0x11C;
            register void *pF8 = (char*)p3+0xF8;
            register void *pEC = (char*)p3+0xEC;
            f2 = *(f32*)((char*)p3+0x11C);
            f6 = *(f32*)((char*)p11C+4);
            f5 = *(f32*)((char*)p11C+8);
            f1 = *(f32*)((char*)p3+0xF8);
            f0 = *(f32*)((char*)pF8+4);
            f7 = *(f32*)((char*)p3+0xEC);
            f3 = *(f32*)((char*)pF8+8);
            f8 = *(f32*)((char*)pEC+4);
            f9 = *(f32*)((char*)pEC+8);
            f4 = *(f32*)((char*)p0+0x128) * *(f32*)((char*)p0+0x44) - (f2*f1 + f6*f0 + f5*f3);
            f11 = *(f32*)((char*)p0+0x28) + *(f32*)((char*)p0+0x2C);
            f12 = D_00479C9C * f11;
            f4 = __builtin_fabsf(f4);
            f2 = f2*f7 + f6*f8 + f5*f9;
            f2 = __builtin_fabsf(f2);
            f0 = *(f32*)((char*)p0+0xFC) / f12;
            f0 = f0 * (f4 + f2);
            f0 = f0 - *(f32*)((char*)arg0+0x20);
            if (f0 < 0) f0 = 0;
            *(f32*)((char*)arg0+0x34) = *(f32*)((char*)arg0+0x34) + f0;
        }
    }
skip:
    if (*(f32*)((char*)p0+0xEC) > 0.0f) {
        f32 x = *(f32*)((char*)p0+0xF0) - *(f32*)((char*)arg0+4);
        if (x < 0) x = 0;
        *(f32*)((char*)arg0+0x18) = *(f32*)((char*)arg0+0x18) + x;
    }
}
