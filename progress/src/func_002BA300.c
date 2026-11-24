void func_002BA300(char *arg0, s32 *arg1, u32 arg2, s8 arg3) {
    s32 idx = *arg1;
    if ((u32)idx < arg2) {
        arg0[idx] = arg3;
        idx = *arg1;
    }
    *arg1 = idx + 1;
}
