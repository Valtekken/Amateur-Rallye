extern s32 func_001F0468(void *arg0, void *arg1);

s32 func_001F0748(void *arg0, void *arg1, s32 arg2) {
    s32 ok = 1;
    s32 i = 0;
    if (arg2 > 0) {
        char *p = arg1;
        do {
            s32 r = func_001F0468(arg0, p);
            s32 b = r != 0;
            ok &= b;
            i += 1;
            p += 0x34;
        } while (i < arg2 && ok == 1);
    }
    return ok;
}
