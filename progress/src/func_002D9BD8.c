extern float sqrtf(float) __attribute__((alias("func_003F3E80")));

f32 func_002D9BD8(f32 *v) {
    f32 len2, r, diff, e2, one;
    s32 v0;
    len2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    r = 0.0f;
    if (!(len2 <= 1.1920929e-7f)) {
        one = 1.0f;
        diff = len2 - one;
        e2 = 1.1920929e-6f;
        v0 = (-e2 <= diff && diff <= e2);
        if (!v0) {
            one = one / __builtin_sqrtf(len2);
        }
        r = one;
    }
    return r;
}
