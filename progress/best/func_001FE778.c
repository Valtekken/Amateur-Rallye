extern f32 func_003F3E80(f32);

typedef struct { f32 x; f32 y; f32 z; } Vec3;

void *func_001FE778(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2, Vec3 *arg3)
{
    f32 dx, dy, dz;
    f32 len2;
    f32 inv;
    f32 t;
    f32 px, py, pz;
    f32 ax, ay, az;   /* arg2 - proj */
    f32 bx, by, bz;   /* arg3 - proj */
    f32 rx, ry, rz;

    dx = arg3->x - arg2->x;
    dy = arg3->y - arg2->y;
    dz = arg3->z - arg2->z;

    len2 = dx * dx + dy * dy + dz * dz;
    if (len2 <= 1.1920929e-7f) {
        dx = 0.0f;
        dy = 0.0f;
        dz = 0.0f;
    } else {
        inv = 1.0f / func_003F3E80(len2);
        dx = dx * inv;
        dy = dy * inv;
        dz = dz * inv;
    }

    t = (arg1->x - arg2->x) * dx + (arg1->y - arg2->y) * dy + (arg1->z - arg2->z) * dz;

    px = arg2->x + dx * t;
    py = arg2->y + dy * t;
    pz = arg2->z + dz * t;

    rx = px; ry = py; rz = pz;

    ax = arg2->x - px; ay = arg2->y - py; az = arg2->z - pz;
    bx = arg3->x - px; by = arg3->y - py; bz = arg3->z - pz;

    if ((ax * bx + ay * by + az * bz) > 0.0f) {
        f32 lenA = func_003F3E80(ax * ax + ay * ay + az * az);
        f32 lenB = func_003F3E80(bx * bx + by * by + bz * bz);
        if (lenA < lenB) {
            rx = arg2->x; ry = arg2->y; rz = arg2->z;
        } else {
            rx = arg3->x; ry = arg3->y; rz = arg3->z;
        }
    }

    arg0->x = rx;
    arg0->y = ry;
    arg0->z = rz;
    return arg0;
}
