extern s32 func_003F93CC(s32, s32, s32);

s32 func_003D0C80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg3 != 0) {
        return func_003F93CC(arg0 + 0x10 + arg1, arg2, arg3);
    }
    return arg1;
}
