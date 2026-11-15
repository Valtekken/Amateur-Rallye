s32 func_003A3EB0(s32);

s32 func_003A0628(register s32 arg0) {
    if (arg0 != 0)
        return func_003A3EB0(arg0 * 0x1C);
    return 0;
}

s32 func_003B1A90(s32);

s32 func_003ACD28(register s32 arg0, register s32 arg1) {
    register s32 s2 = func_003B1A90(arg0);
    return s2 < func_003B1A90(arg1);
}
