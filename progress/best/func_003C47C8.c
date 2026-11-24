/* identical to func_00153B48 (matched), with its names changed by decompdecomp */
/* identical to func_00156908 (matched), with its names changed by decompdecomp */
typedef struct { u64 x; } __attribute__((packed)) E;

void func_003C47C8(E *dst, E *dst_end, const E *src) {
    while (dst != dst_end) {
        *dst = *src;
        dst++;
    }
}
