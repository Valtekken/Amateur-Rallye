extern s32 func_003F93CC(s32, s32, s32);

s32 func_003B43F0(register s32 arg0, register s32 arg1, register s32 arg2) {
    func_003F93CC(arg2, arg0, ((arg1 - arg0) >> 2) * 4);
    return arg2 + (arg1 - arg0);
}
