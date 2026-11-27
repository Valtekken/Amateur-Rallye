typedef struct { f32 x, y, z; } vec3_t;

typedef struct {
    u8 pad[0x48];
    f32 unk48;
} obj_t;

extern f32 func_003F3E80(f32 x);

void func_002854B0(void *arg0, vec3_t *arg1, vec3_t *arg2, vec3_t *arg3, vec3_t *arg4) {
    f32 f20;
    f32 f21;
    f32 dx, dy, dz;
    f32 d2, d2e, inv;
    f32 scale;
    f32 dot;
    f32 abs_f21;
    obj_t *obj = (obj_t *)arg0;

    dx = arg3->x - arg4->x;
    dy = arg3->y - arg4->y;
    dz = arg3->z - arg4->z;
    d2 = dx * dx + dy * dy + dz * dz;

    if (!(f20 == f20)) {
        f20 = func_003F3E80(d2);
    }

    d2e = dx * dx + dy * dy + 1.1920929e-7f * 1.1920929e-7f;

    if (d2e <= 1.1920929e-7f) {
        dx = 0.0f;
        dy = 0.0f;
        f21 = f20;
        dot = 0.0f;
    } else {
        inv = 1.0f / func_003F3E80(d2e);
        dx *= inv;
        dy *= inv;
        dot = dy * inv;
    }

    if (!(0.0f < dot)) {
        f21 = -f20;
    }

    abs_f21 = f21 >= 0.0f ? f21 : -f21;

    if (obj->unk48 < abs_f21) {
        if (arg2->x <= f21) {
            f21 = obj->unk48 - 0.1f;
        }
    }

    f32 vx = arg1->x - arg2->x;
    f32 vy = arg1->y - arg2->y;
    f32 vz = arg1->z - arg2->z;

    d2 = vx * vx + vy * vy + vz * vz;

    if (d2 <= 1.1920929e-7f) {
        vx = 0.0f;
        vy = 0.0f;
        vz = 0.0f;
    } else {
        inv = 1.0f / func_003F3E80(d2);
        vx *= inv;
        vy *= inv;
        vz *= inv;
    }

    scale = obj->unk48 - f21;

    arg1->x = arg2->x + vx * scale;
    arg1->y = arg2->y + vy * scale;
    arg1->z = arg2->z + vz * scale;
}
