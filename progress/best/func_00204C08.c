extern f32 func_003F3E80(f32);

s32 func_00204C08(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 f10 = arg0[0];
    f32 f13 = arg0[1];
    f32 f11 = arg0[2];
    f32 f6 = -arg0[3];
    f32 f7 = arg1[0];
    f32 f8 = arg1[1];
    f32 f9 = arg1[2];
    f32 f2 = -arg1[3];
    
    f32 f0 = f13 * f7;
    f32 f3 = f11 * f7;
    f32 f4 = f10 * f8;
    f32 f1 = f10 * f9;
    f32 f22 = f13 * f9;
    f32 f1_ = f11 * f8;
    
    f32 f23 = f4 - f0;  // cross_z
    f32 f24 = f3 - f1;  // cross_y
    f32 f21 = f22 - f1_; // cross_x
    
    f32 f12 = f23 * f23; // cross_z^2
    f32 f14 = f24 * f24; // cross_y^2
    f32 f4_ = f21 * f21; // cross_x^2
    
    f32 f20, f22_, f25;
    s32 f18 = 1;
    
    if (f14 < f12) {
        if (f4_ < f12) {
            if (f12 > 0.0f) {
                f20 = -((f7 * f6) - (f10 * f2)) / f23;
                f22_ = -((f13 * f2) - (f8 * f6)) / f23;
                f25 = 0.0f;
            } else {
                f20 = 0.0f;
                f22_ = 0.0f;
                f25 = 0.0f;
                f18 = 0;
            }
        } else {
            if (f14 > 0.0f) {
                f20 = 0.0f;
                f25 = ((f7 * f6) - (f10 * f2)) / f24;
                f22_ = ((f11 * f2) - (f9 * f6)) / f24;
            } else {
                f20 = 0.0f;
                f22_ = 0.0f;
                f25 = 0.0f;
                f18 = 0;
            }
        }
    } else {
        if (f4_ < f14) {
            if (f14 > 0.0f) {
                f22_ = 0.0f;
                f25 = -((f8 * f6) - (f13 * f2)) / f21;
                f20 = -((f11 * f2) - (f9 * f6)) / f21;
            } else {
                f20 = 0.0f;
                f22_ = 0.0f;
                f25 = 0.0f;
                f18 = 0;
            }
        } else {
            if (f4_ > 0.0f) {
                f20 = 0.0f;
                f25 = -((f8 * f6) - (f13 * f2)) / f21;
                f20 = -((f11 * f2) - (f9 * f6)) / f21;
            } else {
                f20 = 0.0f;
                f22_ = 0.0f;
                f25 = 0.0f;
                f18 = 0;
            }
        }
    }
    
    f32 f0_ = f4_ + f14 + f12;
    f32 inv_len = 1.0f / func_003F3E80(f0_);
    if (inv_len != inv_len) {
        inv_len = 1.0f / func_003F3E80(f0_);
    }
    
    arg2[0] = f21 * inv_len;
    arg2[1] = f24 * inv_len;
    arg2[2] = f23 * inv_len;
    
    arg3[0] = f22_ * inv_len;
    arg3[1] = f20 * inv_len;
    arg3[2] = f25 * inv_len;
    
    return f18;
}
