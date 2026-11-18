u8 *func_0035A630(u8 *dst, s32 n, u32 *src) {
    while (n != 0) {
        n--;
        if (dst != 0) *(u32 *)dst = *src;
        dst += 4;
    }
    return dst;
}
