/* identical to func_003A4C98 (matched), with its names changed by decompdecomp */
extern void D_002AD390(s32);

void func_003A4BF0(register s32 *arg0, register s32 arg1) {
    D_002AD390(*arg0);
    if (arg1 & 1) {
        D_002AD390(arg0);
    } else {
    }
}

s32 func_001CE2F8(s32);
s32 func_001D2658(s32, s32, s32, s32);

s32 func_003A4D10(register s32 arg0, register s32 arg1) {
    return func_001D2658(arg0, 0, func_001CE2F8(arg0), arg1);
}
