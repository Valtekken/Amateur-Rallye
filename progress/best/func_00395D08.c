extern s32 func_003A3880(s32 *);
extern s32 func_00395C80(s32, s32, s32, s32);

s32 func_00395D08(s32 arg0, s32 arg1, s32 arg2) {
    s32 local0 = arg0;
    s32 r = func_003A3880(&local0);
    return func_00395C80(local0, arg1, arg2, r);
}
