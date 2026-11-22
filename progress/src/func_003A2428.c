s32 func_003A2428(register s32 arg0, register s32 arg1, register s32 arg2, register s32 arg3, register s32 arg4) {
    s32 count = (s32)((s32)(arg1 - arg0) * (s32)0xB6DB6DB7 >> 2);
    while (count > 0) {
        arg2 -= 0x1C;
        arg1 -= 0x1C;
        func_003A5CC0(arg2, arg1);
        count--;
    }
    return arg2;
}
