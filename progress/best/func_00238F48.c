s32 func_00238F48(void *arg0) {
    s32 *end = *(s32 **)((char*)arg0 + 8);
    s32 *p = *(s32 **)((char*)arg0 + 4);
    if (p == end) return 0;
    s32 v = *p;
    while (1) {
        if (v == 0) {
            p++;
            if (p == end) return 0;
            v = *p;
        } else {
            return v;
        }
    }
}
