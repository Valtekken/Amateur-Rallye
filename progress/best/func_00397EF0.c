s32 func_00397EF0(register s32 arg0, register s32 arg1, register s32 arg2, register s32 arg3, register s32 arg4) {
    s32 count = (arg1 - arg0) >> 3;
    while (count > 0) {
        arg2 -= 8;
        arg1 -= 8;
        func_003A6370(arg2, arg1);
        count--;
    }
    return arg2;
}
