extern s32 *func_002AFEB8(s32, void *);
extern s32 func_003A3910(s32);

void func_00396310(register s32 arg0, register s32 arg1) {
    register s32 *p = func_002AFEB8(4, arg0);
    register s32 *q = p;
    if (p) {
        *p = func_003A3910(arg1);
        q = p;
    }
}

s32 *func_00396130(register s32 *arg0, register s32 *arg1, register s32 *arg2, register s32 arg3, register s32 arg4) {
    register s32 d = arg1 - arg0;
    s32 n = d >> 2;
    while (n > 0) {
        arg2--;
        arg1--;
        *arg2 = *arg1;
        n--;
    }
    return arg2;
}
