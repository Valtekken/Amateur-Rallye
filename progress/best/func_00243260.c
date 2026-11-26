typedef struct { f32 x, y, z; } V;
typedef struct { f32 f[3]; } F3;
typedef struct { f32 f[6]; s32 tail; } D;
extern s32 func_00243718(s32, s32, s32, f32 *, f32 *, f32 *, f32 *, s32 *);

s32 func_00243260(s32 a0, s32 a1, s32 a2, V *p3, V *p4, D *dst) {
    f32 v1[3], v2[3], A[3], B[3];
    s32 out;
    F3 t;
    F3 *q;
    s32 r;
    v1[0] = p3->x; v1[1] = p3->y; v1[2] = p3->z;
    v2[0] = p4->x; v2[1] = p4->y; v2[2] = p4->z;
    A[0] = 0; A[1] = 0; A[2] = 0;
    B[0] = 0; B[1] = 0; B[2] = 0;
    r = func_00243718(a0, a1, a2, v1, v2, A, B, &out);
    if (r != 0) {
        q = (F3 *)((char *)dst + 0xC);
        dst->f[0] = A[0];
        t.f[2] = B[2];
        dst->f[1] = A[1];
        dst->f[2] = A[2];
        q->f[0] = B[0];
        t.f[0] = B[0];
        t.f[1] = B[1];
        q->f[1] = B[1];
        q->f[2] = t.f[2];
        dst->tail = out;
    }
    return r;
}
