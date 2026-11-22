extern s32 func_001E4280(void);
extern void func_001D4040(void *, char *);
extern void func_001E3D10(s32, void *, s32);
extern char D_00448450[], D_00448470[], D_00448490[], D_004484B0[], D_004484D0[], D_004484F0[];

void func_001253D8(s32 arg0, s32 arg1, s32 arg2) {
    char buf[16];
    s32 var_16;

    switch (arg1) {
    case 1:
        var_16 = func_001E4280();
        func_001D4040(buf, D_00448450);
        func_001E3D10(var_16, buf, arg2);
        break;
    case 4:
        var_16 = func_001E4280();
        func_001D4040(buf, D_00448470);
        func_001E3D10(var_16, buf, arg2);
        break;
    case 3:
        var_16 = func_001E4280();
        func_001D4040(buf, D_00448490);
        func_001E3D10(var_16, buf, arg2);
        break;
    case 2:
        var_16 = func_001E4280();
        func_001D4040(buf, D_004484B0);
        func_001E3D10(var_16, buf, arg2);
        break;
    case 5:
        var_16 = func_001E4280();
        func_001D4040(buf, D_004484D0);
        func_001E3D10(var_16, buf, arg2);
        break;
    case 6:
        var_16 = func_001E4280();
        func_001D4040(buf, D_004484F0);
        func_001E3D10(var_16, buf, arg2);
        break;
    }
}
