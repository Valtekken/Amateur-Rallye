s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

f32 func_003F33C8(f32);
f32 func_003F3140(f32);

void func_00204EF8(void *, void *, void *, f32);

void *func_00205360(void *arg0, void *arg1, void *arg2, void *arg3, f32 fparg0, void *arg4) {
    f32 f20 = fparg0;
    f32 f0 = 1.0f - f20;
    f32 f21 = 2.0f * f20;
    f32 prod = f21 * f0;
    func_00204EF8((void *)0, arg1, arg4, prod);
    func_00204EF8((void *)0, arg1, arg4, f20);
    func_00204EF8(arg0, (void *)0, (void *)0, prod);
    return arg0;
}

void *func_00204E58(void *arg0, void *arg1) {
    f32 temp_f0 = func_003F33C8(*(f32 *)((u8 *)arg1 + 0));
    f32 temp_f0_2 = func_003F3140(temp_f0);
    f32 var_f3 = 1.0f;
    f32 ab = temp_f0_2;
    if (ab < 0.0f) ab = -ab;
    if (!(ab < 0.001f)) {
        var_f3 = temp_f0 / temp_f0_2;
    }
    *(s32 *)((u8 *)arg0 + 0) = 0;
    *(f32 *)((u8 *)arg0 + 0xC) = var_f3 * *(f32 *)((u8 *)arg1 + 0xC);
    *(f32 *)((u8 *)arg0 + 4) = var_f3 * *(f32 *)((u8 *)arg1 + 4);
    *(f32 *)((u8 *)arg0 + 8) = var_f3 * *(f32 *)((u8 *)arg1 + 8);
    return arg0;
}

void *func_00204E20(void *arg0, void *arg1) {
    f32 f3 = *(f32 *)((u8 *)arg1 + 4);
    f32 f0 = *(f32 *)((u8 *)arg1 + 8);
    f32 f1 = *(f32 *)((u8 *)arg1 + 12);
    f3 = -f3;
    f0 = -f0;
    f32 f2 = *(f32 *)((u8 *)arg1 + 0);
    f1 = -f1;
    *(f32 *)arg0 = f2;
    *(f32 *)((u8 *)arg0 + 4) = f3;
    *(f32 *)((u8 *)arg0 + 8) = f0;
    *(f32 *)((u8 *)arg0 + 12) = f1;
    return arg0;
}
