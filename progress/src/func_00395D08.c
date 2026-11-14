extern s32 func_003A3880(s32 *);
extern s32 func_00395C80(s32, s32, s32, s32);

s32 func_00395D08(register s32 arg0, register s32 arg1, register s32 arg2) {
    return func_00395C80(arg0, arg1, arg2, func_003A3880(&arg0));
}
