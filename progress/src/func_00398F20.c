extern s32 *func_002AFEB8(s32, void *);
extern s32 func_003A3910(s32);

void func_00396310(register void *arg0, register s32 arg1) {
    s32 *p = func_002AFEB8(4, arg0);
    if (p) {
        *p = func_003A3910(arg1);
    }
}

extern void func_003A4488(s32, s32);
extern void func_003A69F8(s32, s32);

s32 func_00398F20(register s32 arg0, register s32 arg1) {
    func_003A69F8(arg0, arg1);
    func_003A4488(arg0 + 4, arg1 + 4);
    return arg0;
}

s32 *func_00396130(s32 *arg0, register s32 *arg1, register s32 *arg2, s32 arg3, s32 arg4) {
    s32 n = (arg1 - arg0) >> 2;
    while (n > 0) {
        arg2 -= 1;
        arg1 -= 1;
        *arg2 = *arg1;
        n--;
    }
    return arg2;
}
