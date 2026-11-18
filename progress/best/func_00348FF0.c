s32 *func_00348FF0(s32 *arg0, s32 arg1, s32 *arg2) {
    s32 *p = arg0;
    s32 n = arg1;
    if (n != 0) {
        do {
            n -= 1;
            if (p != 0) {
                *p = *arg2;
            }
            p += 1;
        } while (n != 0);
    }
    return p;
}
