extern s32 func_002B1FC0(s32);
extern s32 func_002BA330(s32, s32, s32, s32);
s32 func_002BA390(s32 *arg0, s32 arg1, s32 arg2) {
    s32 n = func_002BA330(0, 0, arg1, arg2);
    if (n > 0) {
        s32 sz = n + 1;
        s32 *buf = (s32 *)func_002B1FC0(sz);
        *arg0 = (s32)buf;
        if (buf != NULL) return func_002BA330((s32)buf, sz, arg1, arg2);
        return -1;
    }
    return n;
}
