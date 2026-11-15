extern s32 func_003A3CC8(s32);
extern s32 func_00154E78(s32, s32, s32, s32, s8);

s32 func_0039C160(register s32 arg0, register s32 arg1, register s8 arg2) {
    register s32 v = func_003A3CC8(arg0);
    register s32 s0 = arg0;
    register s32 s1 = arg1;
    register s32 s2 = (s32)((s8)arg2 << 24) >> 24;
    return func_00154E78(s0, v, 0, s1, arg2);
}
