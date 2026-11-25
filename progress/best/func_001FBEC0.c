f32 func_001FBE60(void *, f32);                     /* extern */

f32 func_001FBEC0(void *arg0, f32 fparg0) {
    f32 f20, f21, f1, f0, f2, f3;
    f32 v0, v14, v18;
    
    v0 = *(f32 *)arg0;
    f21 = fparg0;
    f20 = func_001FBE60(arg0, v0);
    
    v14 = *(f32 *)((u8 *)arg0 + 0x14);
    f1 = func_001FBE60(arg0, v14);
    
    v18 = *(f32 *)((u8 *)arg0 + 0x18);
    f3 = 0.0f;
    
    if (v18 >= 0.0f) {
        if (f1 <= f20) {
            f0 = f20 - f1;
            f0 = f21 * f0;
            return f1 + f0;
        }
        f0 = 1.0f - f1;
        f0 = f0 + f20;
        f0 = f21 * f0;
        f0 = f1 + f0;
        if (f0 >= 1.0f) {
            return f0 - 1.0f;
        }
        return f0;
    } else {
        if (f20 <= f1) {
            f0 = f20 - f1;
            f0 = f21 * f0;
            return f1 + f0;
        }
        f0 = 1.0f - f20;
        f0 = f1 + f0;
        f0 = f21 * f0;
        f0 = f1 - f0;
        if (f0 < 0.0f) {
            return f0 + 1.0f;
        }
        return f0;
    }
}
