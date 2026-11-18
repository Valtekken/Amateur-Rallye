extern f32 func_003F3E80(f32);
extern f32 sqrtf(f32) __attribute__((alias("func_003F3E80")));

void func_0036D5E0(register f32 *arg0, register f32 *arg1, register f32 *arg2) {
    f32 a[3];
    f32 len, inv, d;
    a[0] = arg1[0]; a[1] = arg1[1]; a[2] = arg1[2];
    len = a[0]*a[0] + a[1]*a[1] + a[2]*a[2];
    if (len <= 1.1920929e-7f) {
        a[0] = 0.0f; a[1] = 0.0f; a[2] = 0.0f;
    } else {
        inv = 1.0f / __builtin_sqrtf(len);
        a[0] *= inv; a[2] *= inv; a[1] *= inv;
    }
    d = arg0[0]*a[0] + arg0[1]*a[1] + arg0[2]*a[2];
    a[0] *= d; a[1] *= d; a[2] *= d;
    arg2[0] = arg0[0] - a[0];
    arg2[1] = arg0[1] - a[1];
    arg2[2] = arg0[2] - a[2];
    len = arg2[0]*arg2[0] + arg2[1]*arg2[1] + arg2[2]*arg2[2];
    if (len <= 1.1920929e-7f) {
        arg2[2] = 0.0f; arg2[0] = 0.0f; arg2[1] = 0.0f;
    } else {
        inv = 1.0f / __builtin_sqrtf(len);
        arg2[0] *= inv; arg2[2] *= inv; arg2[1] *= inv;
    }
}
