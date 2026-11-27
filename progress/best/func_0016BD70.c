extern void func_0016C260(void *, s32, void *, s32);
extern void *func_00168448(void *, void *);
extern void func_0016BF00(void *, s32, void *, void *);
extern f32 func_00167DB8(s32, void *, void *);
extern void func_0016CAC0(s32, void *);
extern f32 func_003F3E80(f32);

void func_0016BD70(s32 a0, f32 *v, s32 a2) {
    f32 sp[3], tmp[4], a[3], b[3], out;
    void *h;
    f32 x, y, z, x2, y2, z2, len2, var, r;

    func_0016C260(sp, a0, v, a2);
    h = func_00168448(tmp, v);
    x = sp[0] + v[0];
    y = sp[1] + v[1];
    z = sp[2] + v[2];
    a[0] = x; a[1] = y; a[2] = z;
    len2 = x * x + y * y + z * z;
    z2 = z * 0.7f; v[2] = z2; b[2] = z2;
    x2 = x * 0.7f; v[0] = x2; b[0] = x2;
    y2 = y * 0.7f; v[1] = y2; b[1] = y2;
    if (len2 <= 1.1920929e-7f) {
        a[0] = 0.0f; a[1] = 0.0f; a[2] = 0.0f;
    } else {
        var = __builtin_sqrtf(len2);
        if (var != var) var = func_003F3E80(len2);
        r = 1.0f / var;
        a[0] = a[0] * r;
        a[1] = a[1] * r;
        a[2] = a[2] * r;
    }
    func_0016BF00(b, a0, v, a);
    a[0] = b[0]; a[1] = b[1]; a[2] = b[2];
    out = func_00167DB8(a0, h, a);
    func_0016CAC0(a0, &out);
}
