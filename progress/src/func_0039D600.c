/* identical to func_00399AF0 (matched), with its names changed by decompdecomp */
s32 *func_0039D600(s32 *p, s32 n, s32 *v) {
    while (n != 0) {
        *p = *v;
        n--;
        p += 1;
    }
    return p;
}
