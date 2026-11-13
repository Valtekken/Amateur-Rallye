extern f32 func_003F2F50(f32);
extern f32 func_003F3140(f32);
extern f32 func_003F3E80(f32);

void func_00260BE8(void *arg0, f32 arg1, void *arg2) {
    f32 sp0, sp4, sp8;
    f32 f21 = arg1;
    f32 f22 = func_003F2F50(f21);
    f32 f20 = (*(f32 *)((char *)arg2 + 0)) * f22 - (*(f32 *)((char *)arg2 + 8)) * func_003F3140(f21);
    f32 f22b = func_003F3140(f21);
    f32 f2 = (*(f32 *)((char *)arg2 + 4));
    f32 f1 = (*(f32 *)((char *)arg2 + 0)) * f22b + (*(f32 *)((char *)arg2 + 8)) * func_003F2F50(f21);
    sp0 = f20;
    sp4 = f2;
    sp8 = f1;
    f32 f4 = f20 * f20;
    f32 f5 = f2 * f2;
    f32 f12 = f4 + f5 + f1 * f1;
    if (f12 <= 1.1920929e-7f) {
        sp0 = 0.0f;
        sp4 = 0.0f;
        sp8 = 0.0f;
    } else {
        f32 f0 = sqrtf(f12);
        f32 inv = 1.0f / f0;
        sp0 = sp0 * inv;
        sp8 = sp8 * inv;
        sp4 = sp4 * inv;
    }
    *(f32 *)((char *)arg0 + 0) = sp0;
    *(f32 *)((char *)arg0 + 4) = sp4;
    *(f32 *)((char *)arg0 + 8) = sp8;
}
