void *func_003F91A8(const void *s, s32 c, s32 n) {
    const u8 *p = (const u8 *)s;
    u8 v = (u8)c;
    while (n-- > 0) { if (*p == v) return (void *)p; p++; }
    return NULL;
}
