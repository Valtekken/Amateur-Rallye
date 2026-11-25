typedef struct { u32 lo; u32 hi; } __attribute__((aligned(4))) U64;

void func_003C47C8(void *dst, void *dst_end, const void *src) {
    U64 *d = (U64 *)dst;
    U64 *d_end = (U64 *)dst_end;
    const U64 *s = (const U64 *)src;
    while (d != d_end) {
        *d = *s;
        d++;
    }
}
