s32 func_003FA760(const char *a0, const char *a1) {
    u32 u;
    const u64 *p0;
    const u64 *p1;
    u64 v0;
    u64 v1;

    u = (u32)((u32)a0 | (u32)a1);
    if (u & 7) goto byte_loop;

    p0 = (const u64 *)a0;
    p1 = (const u64 *)a1;

    for (;;) {
        v0 = *p0;
        v1 = *p1;
        if (v0 != v1) goto byte_loop;
        if ((v0 - 0x0101010101010101ULL) & ~v0 & 0x8080808080808080ULL) return 0;
        p0++;
        p1++;
    }

byte_loop:
    while (*a0 && *a0 == *a1) {
        a0++;
        a1++;
    }
    return (u8)*a0 - (u8)*a1;
}
