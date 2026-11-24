/* identical to func_00275388 (matched), with its names changed by decompdecomp */
typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    s32 flags;
} Vec4S;

void *func_002E8178(Vec4S *src, Vec4S *end, Vec4S *dst) {
    if (src != end) {
        do {
            if (dst != NULL) {
                dst->x = 0.0f;
                dst->y = 0.0f;
                dst->z = 0.0f;
                dst->x = src->x;
                dst->y = src->y;
                dst->z = src->z;
                dst->w = src->w;
                dst->flags = src->flags;
            }
            src++;
            dst++;
        } while (src != end);
    }
    return dst;
}
