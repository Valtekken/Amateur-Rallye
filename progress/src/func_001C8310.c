typedef struct {
    s32 f0, f1;
    f32 f2, f3, f4, f5, f6, f7, f8, f9, f10;
} Elem;

static inline void copy_elem(Elem *d, Elem *s) {
    char *x = (char *)s + 0x20;
    char *y = (char *)d + 0x20;
    *(s32 *)(y - 0x20) = *(s32 *)(x - 0x20);
    *(s32 *)(y - 0x1C) = *(s32 *)(x - 0x1C);
    *(f32 *)(y - 0x18) = *(f32 *)(x - 0x18);
    *(f32 *)(y - 0x14) = *(f32 *)(x - 0x14);
    *(f32 *)(y - 0x10) = *(f32 *)(x - 0x10);
    *(f32 *)(y - 0xC) = *(f32 *)(x - 0xC);
    *(f32 *)(y - 0x8) = *(f32 *)(x - 0x8);
    *(f32 *)(y - 0x4) = *(f32 *)(x - 0x4);
    *(f32 *)(y) = *(f32 *)(x);
    *(f32 *)(y + 4) = *(f32 *)(x + 4);
    *(f32 *)(y + 8) = *(f32 *)(x + 8);
}

Elem *func_001C8310(Elem *src, Elem *end, Elem *dst) {
    while (src != end) {
        if (dst != 0) copy_elem(dst, src);
        src++;
        dst++;
    }
    return dst;
}
