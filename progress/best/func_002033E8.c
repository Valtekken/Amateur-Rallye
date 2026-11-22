extern f32 func_003F3E80(f32);

void func_002033E8(f32 *arg0, f32 *arg1, f32 *arg2) {
    f32 f0 = 1e-8f;
    f32 f21 = arg0[2];  // +8
    f32 f1 = arg0[0];   // +0
    f32 f2 = fabsf(f21);
    f32 f23 = arg0[4];  // +0x10
    f32 f24 = arg0[5];  // +0x14
    f32 f22 = arg0[8];  // +0x20
    f32 f20 = arg0[1];  // +4
    
    if (f2 >= f0) {
        arg2[2] = 0.0f;  // arg2+8 = 0
        f32 f1_sq = f20 * f20;
        f32 f0_sq = f21 * f21;
        f32 f12 = f1_sq + f0_sq;
        f32 f5 = func_003F3E80(f12);  // rsqrt?
        f32 f20_n = f20 / f5;
        f32 f21_n = f21 / f5;
        f32 f4 = 1.0f;
        f32 f2_diff = f22 - f23;
        f32 f0_2 = f20_n + f20_n;
        f32 f2_mul = f21_n * f2_diff;
        f32 f3 = -f0_2;
        f32 f0_mul = f0_2 * f24;
        f32 f0_add = f0_mul + f2_mul;
        f32 f1_mul = f21_n * f0_add;
        f32 f0_mul2 = f20_n * f0_add;
        f32 f2_sub = f22 - f1_mul;
        f32 f1_add = f23 + f1_mul;
        f32 f0_sub = f24 - f0_mul2;
        
        arg1[2] = f2_sub;
        arg1[1] = f1_add;
        arg2[1] = f0_sub;
        arg2[0] = f5;
        arg0[8] = f3;  // +0x20
        arg0[0] = f4;  // +0
        arg0[7] = f21_n;  // +0x1C
        arg0[1] = 0.0f;  // +4
        arg0[2] = 0.0f;  // +8
        arg0[3] = 0;     // +0xC (int)
        arg0[4] = f20_n; // +0x10
        arg0[5] = f21_n; // +0x14
        arg0[6] = 0;     // +0x18 (int)
    } else {
        arg1[2] = f22;
        arg1[1] = f23;
        arg2[1] = f24;
        arg2[0] = f20;
        arg0[8] = 1.0f;  // +0x20
        arg0[0] = 1.0f;  // +0
        arg0[1] = 0.0f;  // +4
        arg0[2] = 0.0f;  // +8
        arg0[3] = 0;     // +0xC
        arg0[4] = 1.0f;  // +0x10
        arg0[5] = 0.0f;  // +0x14
        arg0[6] = 0;     // +0x18
        arg0[7] = 0.0f;  // +0x1C
    }
}
