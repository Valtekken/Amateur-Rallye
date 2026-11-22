extern s32 func_001E4280(void);
extern f32 func_001E3610(s32, void *);

void func_0014A2E0(register void *arg0, register void *arg1) {
    volatile f32 sp0, sp4, sp8;
    if (*(s32 *)((char *)arg0 + 0x18) != 0) {
        void *dst = *(void **)((char *)arg1 + 0x4C);
        if (dst != 0) {
            f32 *p = (f32 *)((char *)arg0 + 0x30);
            sp0 = p[0]; sp4 = p[1]; sp8 = p[2];
            f32 r = func_001E3610(func_001E4280(), (char *)arg0 + 0x2C);
            f32 f4 = *(f32 *)((char *)arg0 + 0x40);
            f32 f5 = f4 * r;
            f32 half = 0.5f;
            if (*(s32 *)((char *)arg0 + 0x64) != 0) {
                sp0 = sp0 + (f32)*(s32 *)((char *)arg0 + 0x28);
                sp4 = sp4 + (f5 - f4 * half);
            } else {
                sp4 = sp4 + (f32)*(s32 *)((char *)arg0 + 0x28);
                sp0 = sp0 + (f5 - f4 * half);
            }
            *(f32 *)((char *)dst + 0x50) = sp0;
            *(f32 *)((char *)dst + 0x54) = sp4;
            *(f32 *)((char *)dst + 0x5C) = 1.0f;
            *(f32 *)((char *)dst + 0x58) = sp8;
        }
    }
}
