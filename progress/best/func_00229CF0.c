s32 func_00229988(void *arg0, void *arg1, s32 arg2);

s32 func_00229CF0(void *arg0, void *arg1) {
    s32 r1 = func_00229988(arg0, arg1, -1);
    s32 r2 = func_00229988(arg0, arg1, -1);
    if (r1 != 0) {
        if (r2 != 0) return 1;
    }
    return 0;
}
