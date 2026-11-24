typedef struct { f32 x, y, z; } Vec3;
typedef struct { f32 a, b, c, d; s32 e; } S;
extern f32 D_00426508[3];
extern void func_002433F8(void *a, Vec3 *b, S *c);

void func_00243338(void *a0, Vec3 *in, Vec3 *out, f32 *fout, int *iout) {
    S sp;
    Vec3 v;
    f32 z, c;
    sp.a = D_00426508[0];
    sp.b = D_00426508[1];
    sp.e = -1;
    v.x = in->x;
    v.y = in->y;
    z = in->z;
    c = D_00426508[2];
    sp.c = c;
    v.z = z;
    sp.d = 0.0f;
    func_002433F8(a0, &v, &sp);
    out->x = sp.a;
    out->y = sp.b;
    out->z = sp.c;
    *fout = sp.d;
    *iout = sp.e;
    v.x = sp.a;
    v.y = sp.b;
    v.z = sp.c;
}
