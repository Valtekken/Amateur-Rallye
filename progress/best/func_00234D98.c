extern f32 D_004264A0[2];
extern f32 sqrtf(f32);

void* func_00234D98(void* arg0, void* arg1) {
    register void** a0 = (void**)arg0;
    register void** a1 = (void**)arg1;
    register f32* D = D_004264A0;
    void* v0;
    void* v1;
    f32 f0, f1, f2, f3, f4, f5, f12, f20;
    s32 v0_int;

    // Block 1: a0[0] vs a1[0]
    v0 = a0[0];
    v1 = a1[0];
    f0 = ((f32*)v0)[0] - ((f32*)v1)[0];  // X diff
    f3 = ((f32*)v0)[1] - ((f32*)v1)[1];  // Y diff
    f1 = ((f32*)v0)[2] - ((f32*)v1)[2];  // Z diff (keep in f1)
    f4 = ((f32*)v1)[0] - ((f32*)v0)[0];  // X diff (v1-v0) - unused but matches target
    f2 = ((f32*)v0)[1] - ((f32*)v1)[1];  // Y diff (v0-v1) - matches target f2
    f5 = ((f32*)v1)[2] - ((f32*)v0)[2];  // Z diff (v1-v0) - unused
    
    // Squares - match target order
    f3 = f0 * f0;      // X^2
    f4 = f2 * f2;      // Y^2
    f0 = f1 * f1;      // Z^2
    f12 = f3 + f4 + f0;
    
    // NaN check on f1 (Z diff)
    if (f1 == f1) {
        f1 = sqrtf(f12);
    }
    
    f20 = 10.0f;
    f0 = D[0] * f20;
    if (f1 < f0) {
        return a0[0];
    }

    // Block 2: a0[0] vs a1[1]
    v0 = a0[0];
    v1 = a1[1];
    f0 = ((f32*)v0)[0] - ((f32*)v1)[0];
    f3 = ((f32*)v0)[1] - ((f32*)v1)[1];
    f1 = ((f32*)v0)[2] - ((f32*)v1)[2];
    f4 = ((f32*)v1)[0] - ((f32*)v0)[0];
    f2 = ((f32*)v0)[1] - ((f32*)v1)[1];
    f5 = ((f32*)v1)[2] - ((f32*)v0)[2];
    
    f3 = f0 * f0;
    f4 = f2 * f2;
    f0 = f1 * f1;
    f12 = f3 + f4 + f0;
    
    if (f1 == f1) {
        f1 = sqrtf(f12);
    }
    
    f0 = D[0] * f20;
    if (f1 < f0) {
        return a0[0];
    }

    // Block 3: a0[1] vs a1[0]
    v0 = a0[1];
    v1 = a1[0];
    f0 = ((f32*)v0)[0] - ((f32*)v1)[0];
    f3 = ((f32*)v0)[1] - ((f32*)v1)[1];
    f1 = ((f32*)v0)[2] - ((f32*)v1)[2];
    f4 = ((f32*)v1)[0] - ((f32*)v0)[0];
    f2 = ((f32*)v0)[1] - ((f32*)v1)[1];
    f5 = ((f32*)v1)[2] - ((f32*)v0)[2];
    
    f3 = f0 * f0;
    f4 = f2 * f2;
    f0 = f1 * f1;
    f12 = f3 + f4 + f0;
    
    if (f1 == f1) {
        f1 = sqrtf(f12);
    }
    
    f0 = D[0] * f20;
    if (f1 < f0) {
        return a0[1];
    }

    // Block 4: a0[1] vs a1[1]
    v0 = a0[1];
    v1 = a1[1];
    f0 = ((f32*)v0)[0] - ((f32*)v1)[0];
    f3 = ((f32*)v0)[1] - ((f32*)v1)[1];
    f1 = ((f32*)v0)[2] - ((f32*)v1)[2];
    f4 = ((f32*)v1)[0] - ((f32*)v0)[0];
    f2 = ((f32*)v0)[1] - ((f32*)v1)[1];
    f5 = ((f32*)v1)[2] - ((f32*)v0)[2];
    
    f3 = f0 * f0;
    f4 = f2 * f2;
    f0 = f1 * f1;
    f12 = f3 + f4 + f0;
    
    if (f1 == f1) {
        f1 = sqrtf(f12);
    }
    
    f0 = D[0] * f20;
    if (f1 < f0) {
        return a0[1];
    }

    return NULL;
}
