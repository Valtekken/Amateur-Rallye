extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, void *);
extern void *func_0021F4B0(void);
extern void *func_0021E9C0(void *, void *);
extern void **func_00201350(void *);
extern void ***func_002015D8(void);
extern void func_001CB748(void *, void *, void *, void *);
extern void func_00280CB8(void *, void *, void *, void *, u32);
extern f32 func_003F3E80(f32 *);

void func_0027F760(u8 *arg0, u8 *arg1) {
    f32 sp0[4];
    f32 sp10[4];
    f32 sp20[4];
    f32 sp30[4];
    f32 sp40[4];
    f32 sp50[4];
    f32 sp60[4];
    f32 sp70[4];
    f32 sp80[4];
    f32 sp90[4];
    f32 spA0[4];
    f32 spB0[4];
    f32 spC0[4];
    f32 spD0[4];
    f32 spE0[4];
    f32 spF0[4];
    f32 sp100[4];
    f32 sp110[4];
    f32 sp120[4];
    f32 sp130[4];
    f32 sp140[4];
    f32 sp150[4];
    f32 f20, f21;
    if (func_001E3650(func_001E4280(), arg0 + 0x14) <= 0) {
        void *v20 = func_0021E9C0(func_0021F4B0(), arg0 + 0x10);
        if (v20 != NULL) {
            if (*(s32 *)((u8 *)v20 + 0x58) != 0) {
                u8 *a1_50 = *(u8 **)(arg1 + 0x50);
                f32 f5 = 0.1f;
                sp0[0] = *(f32 *)(a1_50 + 0x50) + *(f32 *)(a1_50 + 0x30) * f5;
                sp0[1] = *(f32 *)(a1_50 + 0x54) + *(f32 *)(a1_50 + 0x34) * f5;
                sp0[2] = *(f32 *)(a1_50 + 0x58) + *(f32 *)(a1_50 + 0x38) * f5;
                sp20[0] = *(f32 *)(a1_50 + 0x30) * f5;
                sp20[1] = *(f32 *)(a1_50 + 0x34) * f5;
                sp20[2] = *(f32 *)(a1_50 + 0x38) * f5;
                {
                    void **ret = func_00201350(a1_50 + 0x30);
                    s32 idx = *(s32 *)(arg0 + 0xC);
                    u8 *v19 = (u8 *)ret[idx];
                    sp30[0] = -*(f32 *)(v19 + 0x90);
                    sp30[1] = -*(f32 *)(v19 + 0x94);
                    sp30[2] = -*(f32 *)(v19 + 0x98);
                    sp40[0] = *(f32 *)(v19 + 0xA0);
                    sp40[1] = *(f32 *)(v19 + 0xA4);
                    sp40[2] = *(f32 *)(v19 + 0xA8);
                    sp50[0] = -*(f32 *)(v19 + 0xB0);
                    sp50[1] = -*(f32 *)(v19 + 0xB4);
                    sp50[2] = -*(f32 *)(v19 + 0xB8);
                    sp60[0] = *(f32 *)(v19 + 0xC0);
                    sp60[1] = *(f32 *)(v19 + 0xC4);
                    sp60[2] = *(f32 *)(v19 + 0xC8);
                    func_00280CB8(arg0, sp70, spB0, v20, 0);
                }
            }
        }
    }
}
