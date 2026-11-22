extern void func_003A5DC8(s32, s32);

s32 func_003A1AC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 count = (s32)((s32)(arg1 - arg0) * 0xAAAAAAABu >> 3);
    while (count > 0) {
        arg1 -= 0x18;
        arg2 -= 0x18;
        func_003A5DC8(arg2, arg1);
        count--;
    }
    return arg2;
}
