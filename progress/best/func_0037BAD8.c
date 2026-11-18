u16 *func_0037BAD8(u16 *arg0, s32 arg1, u16 *arg2) {
    u16 *p = arg0;
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
