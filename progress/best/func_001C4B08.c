typedef struct { f32 x, y, z, w; } Vec4;

void func_001C4B08(Vec4 *dst, Vec4 *a, Vec4 *b) {
    if (dst != a && dst != b) {
        dst->x = a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
        dst->y = a->y * b->x + a->x * b->y + a->z * b->z + a->w * b->w;
        dst->z = a->z * b->x + a->y * b->y + a->x * b->z + a->w * b->w;
        dst->w = a->w * b->x + a->y * b->y + a->z * b->z + a->x * b->w;
    }
}
