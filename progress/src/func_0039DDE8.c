/* identical to func_0039F2A8 (matched), with its names changed by decompdecomp */
extern void func_003A4AB8(s32, s32);

s32 func_0039DDE8(register s32 arg0, register s32 arg1, register s32 arg2, register s32 arg3, register s32 arg4) {
    s32 count = (s32)((s32)(arg1 - arg0) * (s32)0xAAAAAAABu >> 2);
    while (count > 0) {
        arg2 -= 12;
        arg1 -= 12;
        func_003A4AB8(arg2, arg1);
        count--;
    }
    return arg2;
}
