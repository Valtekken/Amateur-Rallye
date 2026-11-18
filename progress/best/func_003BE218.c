s32 *func_003BE218(s32 *dst, s32 n, s32 *src) {
    while (n != 0) {
        n--;
        if (dst != 0) {
            *dst = *src;
        } else {
            goto skip;
        }
skip:
        dst++;
    }
    return dst;
}
