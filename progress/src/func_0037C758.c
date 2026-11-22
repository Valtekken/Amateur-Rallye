extern void func_001D4040(void *, void *);
extern s32 func_001E33C8(s32, void *, s32);
extern s32 func_001E38C8(s32, void *);
extern s32 func_001E3EC0(s32, void *, s32);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern s32 D_0042FB70;
extern char D_00486C90[];
extern char D_0049B830[];

void func_0037C758(void) {
    if (D_0042FB70 == 0) {
        func_001D4040(&D_0049B830, &D_00486C90);
        D_0042FB70 = 1;
    }
    if (func_001E38C8(func_001E4280(), &D_0049B830) == 0) {
        func_001E3EC0(func_001E4280(), &D_0049B830, 0x3E7);
        func_001E33C8(func_001E4280(), &D_0049B830, 0);
    }
    func_001E3650(func_001E4280(), (s32) &D_0049B830);
}
