f32 func_003972C0(register f32 a, register f32 b, register f32 c) {
    f32 sp0 = a;
    s32 t;
    if (a < b) { t = 1; sp0 = b; }
    else { t = 0; if (c < a) sp0 = c; }
    return sp0;
}

extern s32 func_00395B68(s32, s32);

s32 func_00397228(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10 = arg2;
    while (arg0 != arg1) {
        func_00395B68(sp10, arg0);
        arg0 += 8;
        sp10 += 8;
    }
    return sp10;
}
