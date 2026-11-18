u8 *func_002FB750(u8 *dst, s32 n, u32 *src) {
    while (n != 0) {
        if (dst != 0) *(u32 *)dst = *src;
        n--;
        dst += 4;
    }
    return dst;
}
