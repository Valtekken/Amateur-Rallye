/* identical to func_003A35D0 (matched), with its names changed by decompdecomp */
s32 func_003AB660(void *);
s32 func_003AB788(s32 *, s32);
extern s32 D_0040E658;

s32 *func_003A3460(register s32 *arg0, register s32 arg1) {
    *arg0 = func_003AB660(&D_0040E658);
    func_003AB788(arg0, arg1);
    return arg0;
}

extern void D_002AD390(s32);
s32 func_003A33E8(s32, s32);

void func_003A34D0(register s32 arg0, register s32 arg1) {
    func_003A33E8(arg0, 2);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

s32 func_003B0670(register s32 arg0) {
    return arg0;
}

s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}
