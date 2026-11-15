extern s32 func_003A0BD8(register s32 arg0, register s32 arg1);
extern void func_00219DA8(register s32 arg0, register s32 arg1);
extern s32 func_003A80D0(s32);
extern s32 func_003A8118(s32);
extern void func_003AEF40(s32, s32, s32);
extern s32 func_003AF070(s32);
extern s32 func_003AEFD0(s32);

s32 func_003A8040(register s32 *arg0) {
    register s32 r = *arg0;
    if (0) {
        return r;
        return r;
        return r;
    }
    return r;
}

s32 func_003A8088(register s32 *arg0) {
    return arg0[1];
}

void func_003A81C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 a = func_003A80D0(arg0);
    s32 b = func_003A8118(arg0);
    func_003AEF40(arg0, a, b);
}

s32 func_003A8230(register s32 arg0) {
    s32 end = func_003AF070(arg0);
    s32 begin = func_003AEFD0(arg0);
    return (s32)(((s64)(end - begin) * 0xAAAAAAABLL) >> 4);
}
