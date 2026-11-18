s32 *func_002E1358(s32 *arg0, s32 arg1, s32 *arg2) {
    s32 *var_4 = arg0;
    s32 var_5 = arg1;
    if (var_5 != 0) {
        do {
            var_5 -= 1;
            if (var_4 != (s32 *)0) {
                *var_4 = *arg2;
            }
            var_4 = var_4 + 1;
        } while (var_5 != 0);
    }
    return var_4;
}
