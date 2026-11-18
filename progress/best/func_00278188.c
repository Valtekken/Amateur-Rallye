typedef struct { f32 x, y, z; } Vec3;
extern f32 func_003F3E80(f32);

static inline void norm3(f32 *sp, f32 len2) {
    f32 l = sp[2];
    f32 t;
    if (l != l) l = func_003F3E80(len2);
    t = 1.0f / l;
    sp[0] *= t;
    sp[2] *= t;
    sp[1] *= t;
}

void func_00278188(Vec3 *a, Vec3 *b, Vec3 *out) {
    f32 sp[3];
    f32 len2, t, d, l;

    sp[0] = b->x;
    sp[1] = b->y;
    sp[2] = b->z;
    len2 = b->x * b->x + b->y * b->y + b->z * b->z;
    if (len2 <= 1.1920929e-7f) {
        sp[0] = 0.0f;
        sp[1] = 0.0f;
        sp[2] = 0.0f;
    } else {
        norm3(sp, len2);
    }
    d = a->x * sp[0] + a->y * sp[1] + a->z * sp[2];
    sp[0] *= d;
    sp[1] *= d;
    sp[2] *= d;
    out->x = a->x - sp[0];
    out->y = a->y - sp[1];
    out->z = a->z - sp[2];
    len2 = out->x * out->x + out->y * out->y + out->z * out->z;
    if (len2 <= 1.1920929e-7f) {
        out->z = 0.0f;
        out->x = 0.0f;
        out->y = 0.0f;
        return;
    }
    l = out->z;
    if (l != l) l = func_003F3E80(len2);
    t = 1.0f / l;
    out->x *= t;
    out->z *= t;
    out->y *= t;
}
