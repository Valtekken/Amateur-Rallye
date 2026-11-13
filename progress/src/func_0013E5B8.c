extern s32 func_001E4280(void);
extern void func_001D4040(void *, char *);
extern s32 func_001E3D10(s32, void *, s32);
extern char D_0044B568[];
extern char D_0044B598[];
extern char D_0044B5C0[];
extern char D_0044B5E8[];

void func_0013E5B8(s32 arg0, s32 arg1, s32 arg2) {
    char buf[16];
    s32 var_16;

    switch (arg1) {
    case 2:
        var_16 = func_001E4280();
        func_001D4040(buf, D_0044B568);
        func_001E3D10(var_16, buf, arg2);
        break;
    case 3:
        var_16 = func_001E4280();
        func_001D4040(buf, D_0044B598);
        func_001E3D10(var_16, buf, arg2);
        break;
    case 4:
        var_16 = func_001E4280();
        func_001D4040(buf, D_0044B5C0);
        func_001E3D10(var_16, buf, arg2);
        break;
    case 5:
        var_16 = func_001E4280();
        func_001D4040(buf, D_0044B5E8);
        func_001E3D10(var_16, buf, arg2);
        break;
    }
}
