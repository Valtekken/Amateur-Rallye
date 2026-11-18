extern s32 func_001E4280(void);
extern void func_001D4040(void *, char *);
extern void func_001E3D10(s32, void *, s32);
extern char D_00447890[], D_004478B8[], D_004478D8[];

void func_0011FAD0(s32 arg0, s32 arg1, s32 arg2) {
    char buf[16];
    s32 v;
    (void)arg0;
    switch (arg1) {
    case 1: v = func_001E4280(); func_001D4040(buf, D_00447890); func_001E3D10(v, buf, arg2); break;
    case 2: v = func_001E4280(); func_001D4040(buf, D_004478B8); func_001E3D10(v, buf, arg2); break;
    case 3: v = func_001E4280(); func_001D4040(buf, D_004478D8); func_001E3D10(v, buf, arg2); break;
    }
}
