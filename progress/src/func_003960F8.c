s32 *func_00396130(register s32 *arg0, register s32 *arg1, register s32 *arg2, register s32 arg3, register s32 arg4) {
    register s32 d = arg1 - arg0;
    s32 n = d >> 2;
    while (n > 0) {
        arg2--;
        arg1--;
        *arg2 = *arg1;
        n--;
    }
    return arg2;
}

s32 *func_003960F8(register s32 *arg0, register s32 *arg1) {
    *arg0 = *arg1;
    return arg0;
}

u32 *func_00395D88(register u32 *arg0, register u32 *arg1) {
    return *arg0 < *arg1 ? arg1 : arg0;
}

extern s32 func_003A3880(s32 *);
extern s32 func_00395C80(s32, s32, s32, s32);

s32 func_00395D08(s32 arg0, s32 arg1, s32 arg2) {
    s32 local0 = arg0;
    s32 r = func_003A3880(&local0);
    return func_00395C80(local0, arg1, arg2, r);
}
