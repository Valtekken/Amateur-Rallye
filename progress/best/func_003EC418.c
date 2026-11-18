s32 *func_003EC418(s32 *dst, s32 n, s32 *src) {
    while (n != 0) {
        n--;
        do {
            if (dst) *dst = *src;
        } while (0);
        dst++;
    }
    return dst;
}
