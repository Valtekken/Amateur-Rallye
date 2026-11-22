void func_001412F8(void *arg1, f32 fparg0) {
    f32 sp[4];
    f32 one = 1.0f;
    f32 zero = 0.0f;
    f32 temp_f12 = fparg0;
    
    if (one < temp_f12) {
        temp_f12 = one;
        // stack frame allocated in delay slot
    }
    if (temp_f12 < zero) {
        temp_f12 = zero;
    }
    
    temp_f12 = one - temp_f12;
    
    if (0.8f < temp_f12) {
        *(f32*)((char*)arg1 + 0xC) = one;
        sp[0] = one;
        sp[1] = one;
        sp[2] = one;
        sp[3] = one;
        *(f32*)((char*)arg1 + 0x0) = one;
        *(f32*)((char*)arg1 + 0x4) = one;
        *(f32*)((char*)arg1 + 0x8) = one;
        return;
    }
    
    if (0.6f < temp_f12) {
        if (temp_f12 <= 0.8f) {
            *(f32*)((char*)arg1 + 0xC) = one;
            *(f32*)((char*)arg1 + 0x8) = zero;
            sp[0] = zero;
            sp[1] = one;
            sp[2] = zero;
            sp[3] = one;
            *(f32*)((char*)arg1 + 0x0) = zero;
            *(f32*)((char*)arg1 + 0x4) = one;
            return;
        }
    }
    
    if (0.4f < temp_f12) {
        if (temp_f12 <= 0.6f) {
            sp[2] = zero;
            *(f32*)((char*)arg1 + 0xC) = one;
            *(f32*)((char*)arg1 + 0x8) = zero;
            sp[0] = one;
            sp[1] = one;
            sp[3] = one;
            *(f32*)((char*)arg1 + 0x0) = one;
            *(f32*)((char*)arg1 + 0x4) = one;
            return;
        }
    }
    
    if (0.2f < temp_f12) {
        if (temp_f12 <= 0.4f) {
            *(f32*)((char*)arg1 + 0xC) = one;
            *(f32*)((char*)arg1 + 0x4) = 0.75f;
            *(f32*)((char*)arg1 + 0x8) = 0.3f;
            sp[0] = one;
            sp[1] = 0.75f;
            sp[2] = 0.3f;
            sp[3] = one;
            *(f32*)((char*)arg1 + 0x0) = one;
            return;
        }
    }
    
    // temp_f12 <= 0.2
    sp[1] = zero;  // delay slot store
    *(f32*)((char*)arg1 + 0xC) = one;
    *(f32*)((char*)arg1 + 0x8) = sp[1];  // load back
    sp[0] = one;
    sp[2] = zero;
    sp[3] = one;
    *(f32*)((char*)arg1 + 0x0) = one;
    *(f32*)((char*)arg1 + 0x4) = sp[1];
}
