extern s32 func_001D4B28(s32, ...);

void func_001D4A60(s32 *base) {
    s32 i, j, v;
    s32 *p;

    for (i = 0; i < 0x100; i++) {
        p = &base[i];
        *p = func_001D4B28(i, 8) << 24;
        for (j = 7; j >= 0; j--) {
            v = *p;
            v = ((v & 0x80000000) == 0) ? (v << 1) : ((v << 1) ^ 0x04C11DB7);
            *p = v;
        }
        *p = func_001D4B28(*p, 0x20, j);
    }
}
