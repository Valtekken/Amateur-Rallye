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
    }
    if (1) {
        return r;
    }
    if (0) {
        return r;
    }
    return r;
}

s32 func_003A8088(register s32 *arg0) {
    register s32 r = arg0[1];
    if (0) {
        return r;
    }
    if (0) {
        return r;
    }
    if (0) {
        return r;
    }
    return r;
}

void func_003A81C0(register s32 arg0, register s32 arg1, register s32 arg2) {
    register s32 s1 = arg0;
    register s32 s0 = arg1;
    register s32 a = func_003A80D0(s1);
    register s32 b = func_003A8118(s1);
    func_003AEF40(s1, a, b);
}

s32 func_003A8230(register s32 arg0) {
    register s32 s1 = arg0;
    register s32 end = func_003AF070(s1);
    register s32 begin = func_003AEFD0(s1);
    register s32 diff = end - begin;
    return (s32)((diff * 0xAAAAAAABLL) >> 4);
}
