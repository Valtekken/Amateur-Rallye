s32 *func_0036CB00(s32 *arg0, s32 arg1, s32 *arg2) {
    s32 *p = arg0;
    s32 n = arg1;
    if (n) {
        do {
            n--;
            if (p) *p = *arg2;
            p++;
        } while (n);
    }
    return p;
}
