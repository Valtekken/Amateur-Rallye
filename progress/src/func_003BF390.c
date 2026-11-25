typedef struct { u64 x; } __attribute__((packed)) E;

void func_003BF390(E *dst, E *dst_end, const E *src) {
    while (dst != dst_end) {
        *dst = *src;
        dst++;
    }
}
