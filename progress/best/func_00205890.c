extern f32 func_003F2F50(f32);
extern f32 func_003F3140(f32);
extern f32 func_003F3E80(f32);
extern f32 sqrtf(f32);
extern f32 fabsf(f32);

typedef struct {
    f32 w;
    f32 x;
    f32 y;
    f32 z;
} Quat;

Quat func_00205890(const Quat *q) {
    Quat res;
    f32 len = sqrtf((q->x * q->x) + (q->y * q->y) + (q->z * q->z));
    f32 c = func_003F2F50(len);
    f32 s = func_003F3140(len);
    f32 scale = 1.0f;

    if (!(fabsf(s) < 0.001f)) {
        scale = s / len;
    }

    res.w = c;
    res.z = scale * q->z;
    res.x = scale * q->x;
    res.y = scale * q->y;
    return res;
}
