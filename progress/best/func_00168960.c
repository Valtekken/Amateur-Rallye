extern void func_001683A8(void *, s32);
extern void func_00168448(f32 *, s32);
extern f32 func_003F3E80(f32);

f32 func_00168960(s32 arg0) {
    f32 v[3];
    f32 c[3];
    f32 dot = 1.0f;
    f32 mag, inv;
    v[1] = 0.0f;
    c[1] = 0.0f;
    func_001683A8(v, arg0);
    func_00168448(c, arg0);
    mag = v[0] * v[0] + c[1] + v[2] * v[2];
    if (mag > 0.001f) {
        if (mag > 1.1920929e-7f) {
            inv = 1.0f / __builtin_sqrtf(mag);
            v[0] *= inv;
            v[2] *= inv;
            v[1] *= inv;
        } else {
            v[0] = 0.0f;
            v[2] = 0.0f;
            v[1] = 0.0f;
        }
        dot = c[0] * v[0] + c[1] * v[1] + c[2] * v[2];
        if (dot < 0.0f) dot = 1.0f;
    }
    return 1.0f - dot;
}
