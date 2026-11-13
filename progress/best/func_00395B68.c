extern s32 func_002AFEB8(s32, s32);
extern s32 func_003958D8(s32, s32);

s32 func_00395B68(s32 arg0, s32 arg1) {
    register s32 s0 = arg0;
    register s32 s1 = arg1;
    register s32 s2 = func_002AFEB8(8, s0);
    if (s2 != 0) {
        s2 = func_003958D8(s2, s1);
    }
    return s2;
}
