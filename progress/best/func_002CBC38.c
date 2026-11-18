/* func_002CBCB8 - float clamp */
void func_002CBCB8(void *arg0) {
    f32 *f50 = (f32*)((char*)arg0 + 0x50);
    s32 *f84 = (s32*)((char*)arg0 + 0x84);
    f32 *fdc = (f32*)((char*)arg0 + 0xDC);
    f32 *fe8 = (f32*)((char*)arg0 + 0xE8);
    
    f32 temp = *f50;
    f32 prod = temp * *fe8;
    if (*f84 != 0) {
        *fdc = *fdc + prod;
    } else {
        *fdc = *fdc - prod;
    }
    
    /* Clamp to [0.0, 1.0] using conditional moves */
    f32 val = *fdc;
    f32 zero = 0.0f;
    f32 one = 1.0f;
    if (val < zero) val = zero;
    else if (val > one) val = one;
    *fdc = val;
}

/* func_002CBC38 - float clamp with params */
void func_002CBC38(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 *fd8 = (f32*)((char*)arg0 + 0xD8);
    f32 *fe8 = (f32*)((char*)arg0 + 0xE8);
    
    f32 temp_f1 = *fd8;
    f32 temp_f0 = *fe8;
    f32 var_f0;
    s32 cond;
    
    if (temp_f1 < fparg0) {
        var_f0 = temp_f1 + fparg1 * temp_f0;
        cond = fparg0 < var_f0;
    } else {
        var_f0 = temp_f1 - fparg2 * temp_f0;
        cond = var_f0 < fparg0;
    }
    *fd8 = var_f0;
    if (cond) *fd8 = fparg0;
    
    f32 val = *fd8;
    f32 zero = 0.0f;
    f32 one = 1.0f;
    if (val < zero) val = zero;
    else if (val > one) val = one;
    *fd8 = val;
}
