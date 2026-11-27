extern void func_0011E560(s32, s32), func_0011E5B0(s32, s32), func_0011E600(s32, s32);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern void func_001E3D10(s32, void *, s32);
extern char D_004475F8[], D_00447630[], D_00447668[];

void func_0011E650(s32 arg0, u32 arg1, s32 arg2) {
    s32 sp[4];
    s32 t;

    switch (arg1) {
    case 0:
        func_0011E560(arg0, 1);
        func_0011E5B0(arg0, 1);
        func_0011E600(arg0, 1);
        break;
    case 1:
        func_0011E560(arg0, 1);
        func_0011E5B0(arg0, 1);
        func_0011E600(arg0, 2);
        break;
    case 2:
        func_0011E560(arg0, 5);
        func_0011E5B0(arg0, 1);
        func_0011E600(arg0, 1);
        break;
    case 3:
        func_0011E560(arg0, 5);
        func_0011E5B0(arg0, 1);
        func_0011E600(arg0, 2);
        break;
    case 4:
        func_0011E560(arg0, 1);
        func_0011E5B0(arg0, 1);
        func_0011E600(arg0, 4);
        break;
    case 5:
        func_0011E560(arg0, 3);
        func_0011E5B0(arg0, 1);
        func_0011E600(arg0, 4);
        break;
    case 6:
        func_0011E560(arg0, 5);
        func_0011E5B0(arg0, 1);
        func_0011E600(arg0, 4);
        break;
    }
    if (arg2 != 0) {
        t = func_001E4280();
        func_001D4040(sp, D_004475F8);
        func_001E3D10(t, sp, 1);
        t = func_001E4280();
        func_001D4040(sp, D_00447630);
        func_001E3D10(t, sp, 1);
        t = func_001E4280();
        func_001D4040(sp, D_00447668);
        func_001E3D10(t, sp, 1);
    }
}
