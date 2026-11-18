s32 *func_00364CA8(s32 *arg0, s32 arg1, s32 *arg2) {
    s32 *p = arg0;
    s32 n = arg1;
    if (n != 0) {
        do {
            n = n - 1;
            if (p) *p = *arg2;
            p = p + 1;
        } while (n != 0);
    }
    return p;
}
