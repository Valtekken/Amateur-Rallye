typedef struct { f32 f0, f4, f8; } V;
typedef struct { char pad[0x50]; f32 f50, f54, f58, f5C; } T;
typedef struct { char pad[0x4C]; void *p4C, *p50; } A1;
typedef struct C {
    f32 pad[4];
    f32 f10, f14, f18;
    f32 f1C, f20, f24;
    f32 f28, f2C, f30;
    f32 f34, f38, f3C;
    f32 f40, f44, f48;
    f32 f4C, f50, f54, f58;
} C;

extern f32 sqrtf(f32);

void func_00296A90(C *arg0, A1 *arg1) {
    V *v10, *v1C, *v40, *v34;
    T *t;
    f32 f6, v, d0, d1, dy, dist, inv, tmp;

    v10 = (V *)((char *)arg0 + 0x10);
    v1C = (V *)((char *)arg0 + 0x1C);
    v40 = (V *)((char *)arg0 + 0x40);
    v34 = (V *)((char *)arg0 + 0x34);
    t = (T *)arg1->p4C;
    if (t == 0) {
        t = (T *)arg1->p50;
    }
    t->f50 = arg0->f10;
    t->f54 = v10->f4;
    t->f58 = v10->f8;
    t->f5C = 1.0f;
    d0 = arg0->f2C - arg0->f28;
    arg0->f4C = d0;
    tmp = (f32)(s32)(d0 * arg0->f30);
    arg0->f50 = tmp;
    arg0->f30 = tmp / d0;
    d1 = arg0->f1C - arg0->f10;
    d0 = v1C->f4 - v10->f4;
    dy = v1C->f8 - v10->f8;
    dist = d1 * d1 + d0 * d0 + dy * dy;
    if (f6 != f6) {
        f6 = sqrtf(dist);
    }
    v = f6 / (arg0->f4C * arg0->f4C);
    arg0->f54 = (2.0f / arg0->f30) * v;
    arg0->f58 = (2.0f / (1.0f - arg0->f30)) * v;
    arg0->f40 = d1;
    d0 = v1C->f4 - v10->f4;
    dy = v1C->f8 - v10->f8;
    v40->f4 = d0;
    v40->f8 = dy;
    dist = arg0->f40 * arg0->f40 + d0 * d0 + dy * dy;
    if (dist <= 1.1920929e-7f) {
        arg0->f40 = 0.0f;
        v40->f4 = 0.0f;
        v40->f8 = 0.0f;
    } else {
        v = dist;
        if (v != v) {
            v = sqrtf(dist);
        }
        inv = 1.0f / v;
        arg0->f40 = arg0->f40 * inv;
        v40->f4 = v40->f4 * inv;
        v40->f8 = v40->f8 * inv;
    }
    arg0->f34 = arg0->f10;
    v34->f4 = v10->f4;
    v34->f8 = v10->f8;
}
