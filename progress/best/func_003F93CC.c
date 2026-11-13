typedef int __attribute__((mode(TI))) s128;
void *func_003F93CC(register void *dest, register const void *src, register u32 n) {
    register u8 *d = dest;
    register const u8 *s = src;
    if (s < d && d < s + n) {
        d += n;
        s += n;
        if ((s32)--n != -1) {
            do {
                *--d = *--s;
            } while ((s32)--n != -1);
        }
        return dest;
    }
    if (n >= 0x20 && ((u32)s | (u32)d) % 16 == 0) {
        do {
            n -= 0x20;
            *(s128 *)d = *(s128 *)s;
            *(s128 *)(d + 0x10) = *(s128 *)(s + 0x10);
            d += 0x20;
            s += 0x20;
        } while (n >= 0x20);
        if (n >= 8) {
            do {
                n -= 8;
                *(u64 *)d = *(u64 *)s;
                d += 8;
                s += 8;
            } while (n >= 8);
        }
    }
    while (n > 0) {
        *d++ = *s++;
        n--;
    }
    return dest;
}
