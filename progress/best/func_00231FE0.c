extern f32 D_004265E4;

typedef struct { f32 x, y, z, w; } Vec4;

s32 func_00231FE0(Vec4 *arg0, Vec4 *arg1) {
    f32 d0;

    d0 = arg0->x * arg1->x + arg0->y * arg1->y + arg0->z * arg1->z;
    if ((1.0f - D_004265E4) < d0) {
        if ((arg0->w - D_004265E4) < arg1->w) {
            if (arg1->w < (arg0->w + D_004265E4)) {
                return 1;
            }
        }
    }
    return 0;
}
