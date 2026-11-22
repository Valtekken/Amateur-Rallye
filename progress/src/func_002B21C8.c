extern s32 func_002B2360(s32, s32, s32);
extern s32 func_003CBFE8(void);
extern s32 func_003CC288(s32);
extern void func_003F9698(char *, ...);
extern char D_0047DFB0[];
extern char D_0047DFD0[];
extern char D_0047DFF8[];
extern char D_0047E020[];
extern char D_0047E048[];
extern char D_0047E078[];

s32 func_002B21C8(register s32 arg0) {
    s32 sp0;
    s32 sp4 = 0;
    s32 sp8 = 0;
    sp0 = func_003CBFE8();
    if (sp0 == 0) {
        func_003F9698(D_0047DFB0);
    } else {
        if (sp0 == -0x65) func_003F9698(D_0047DFD0);
        if (sp0 == -0x78) func_003F9698(D_0047DFF8);
        if (sp0 == -0x79) func_003F9698(D_0047E020);
        func_003F9698(D_0047E048, sp0);
        return -1;
    }
    sp4 = 0;
    while (sp4 < 2) {
        sp8 = 0;
        while (sp8 < func_003CC288(sp4)) {
            func_003F9698(D_0047E078, func_002B2360(arg0, sp4, sp8));
            sp8++;
        }
        sp4++;
    }
    return 1;
}
