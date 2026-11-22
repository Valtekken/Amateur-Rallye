s32 func_0039AC18(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 count = (s32)((s32)(arg1 - arg0) * (s32)0xAAAAAAAB) >> 2;
    while (count > 0) {
        arg2 -= 12;
        arg1 -= 12;
        func_003A5228(arg2, arg1);
        count--;
    }
    return arg2;
}
