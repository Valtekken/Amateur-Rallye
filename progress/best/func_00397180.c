extern s32 func_003A35D0(s32);
extern s32 func_00396310(s32, s32);
s32 func_00397180(s32 arg0, s32 arg1, s32 arg2, char arg3) {
    s32 sp10 = arg2;
    while (arg0 != arg1) {
        func_00396310(func_003A35D0(sp10), arg0);
        arg0 += 4;
        sp10 += 4;
    }
    return sp10;
}
