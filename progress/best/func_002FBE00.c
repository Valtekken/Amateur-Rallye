u16 *func_002FBE00(u16 *dst, s32 count, u16 *src) {
    if (count != 0) {
        do {
            count--;
            if (dst != NULL) {
                *dst = *src;
            }
            dst++;
        } while (count != 0);
    }
    return dst;
}
