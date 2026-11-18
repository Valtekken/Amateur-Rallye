u8 *func_00372188(u8 *dst, s32 n, u32 *src) {
    while (n != 0) {
        n--;
        if (dst != 0) *(u32 *)dst = *src;
        dst += 4;
    }
    return dst;
}
