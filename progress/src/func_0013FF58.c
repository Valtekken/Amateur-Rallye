/* identical to func_0013E5B8 (matched), with its names changed by decompdecomp */
extern s32 func_001E4280(void);
extern void func_001D4040(void *, char *);
extern s32 func_001E3D10(s32, void *, s32);
extern char D_0044B968[];
extern char D_0044B990[];
extern char D_0044B9B8[];
extern char D_0044B9E0[];

void func_0013FF58(s32 arg0, s32 arg1, s32 arg2) {
    char buf[16];
    s32 var_16;

    switch (arg1) {
    case 2:
        var_16 = func_001E4280();
        func_001D4040(buf, D_0044B968);
        func_001E3D10(var_16, buf, arg2);
        break;
    case 3:
        var_16 = func_001E4280();
        func_001D4040(buf, D_0044B990);
        func_001E3D10(var_16, buf, arg2);
        break;
    case 4:
        var_16 = func_001E4280();
        func_001D4040(buf, D_0044B9B8);
        func_001E3D10(var_16, buf, arg2);
        break;
    case 5:
        var_16 = func_001E4280();
        func_001D4040(buf, D_0044B9E0);
        func_001E3D10(var_16, buf, arg2);
        break;
    }
}
