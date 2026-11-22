extern f32 func_0015ACC8(void);
extern void func_00328C90(void);
extern f32 D_0042DC40;
extern f32 D_0042DC00[4];
extern f32 D_004A4760[4096];

struct Arg1 {
    char pad_0[0x10];
    void *obj_ptr;
    char pad_14[0x1C];
    s32 field_30;
};

struct Obj {
    void *base_ptr;
    char pad_4[8];
    s32 loop_count;
};

void func_00320C78(void *unused, struct Arg1 *arg1, s32 *arg2) {
    f32 temp_f30;
    f32 sp0;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f23_2;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f26;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f2, temp_f1, temp_f3, temp_f6, temp_f7;
    s32 temp_21;
    s32 temp_22;
    s32 temp_3;
    s32 var_18;
    void *temp_16;
    void *temp_2;
    f32 *var_17;
    f32 *matrix_ptr;
    
    var_18 = 0;
    temp_f30 = D_0042DC40;
    func_00328C90();
    temp_2 = (void *)arg1->obj_ptr;
    temp_22 = arg1->field_30;
    temp_21 = ((struct Obj *)temp_2)->loop_count;
    sp0 = temp_f30 * 1.61368f;
    
    if (temp_21 > 0) {
        var_17 = (f32 *)((char *)((struct Obj *)temp_2)->base_ptr + 0x20);
        matrix_ptr = (f32 *)((char *)((struct Obj *)temp_2)->base_ptr + (s32)&D_0042DC00);
        
        temp_f2 = matrix_ptr[0];
        temp_f1 = matrix_ptr[1];
        temp_f3 = matrix_ptr[4];
        temp_f6 = matrix_ptr[5];
        temp_f7 = matrix_ptr[8];
        temp_f1 = matrix_ptr[9];
        
        do {
            temp_3 = (var_18 + temp_22) * 0x30;
            var_18 += 1;
            temp_16 = (void *)((char *)arg2[0] + temp_3);
            
            temp_f26 = *(f32 *)((char *)temp_16 + 0x20);
            temp_f25 = *(f32 *)((char *)temp_16 + 0x28);
            temp_f20 = (temp_f26 * 0.1f) + sp0;
            temp_f21 = (temp_f25 * 0.1f) + temp_f30;
            temp_f22 = temp_f20 * 2.19f;
            temp_f24 = temp_f21 * 2.93f;
            temp_f20_2 = temp_f20 * 1.13f;
            temp_f21_2 = temp_f21 * 1.78f;
            
            temp_f0 = func_0015ACC8();
            temp_f21_2 = temp_f21_2 * temp_f0;
            temp_f0 = 4096.0f / temp_f0;
            temp_f20_2 = temp_f20_2 * temp_f0;
            temp_3 = (s32)temp_f20_2 & 0xFFF;
            
            temp_f0 = func_0015ACC8();
            temp_f23 = D_004A4760[temp_3];
            temp_f0 = 4096.0f / temp_f0;
            temp_f21_2 = temp_f21_2 * temp_f0;
            temp_3 = ((s32)temp_f21_2 + 0x400) & 0xFFF;
            
            temp_f0 = func_0015ACC8();
            temp_f0 = D_004A4760[temp_3];
            temp_f0 = 4096.0f / temp_f0;
            temp_f22 = temp_f22 * temp_f0;
            temp_3 = ((s32)temp_f22 + 0x400) & 0xFFF;
            
            temp_f0 = func_0015ACC8();
            temp_f23 = temp_f23 - temp_f0;
            temp_f0 = 4096.0f / temp_f0;
            temp_f22 = temp_f22 * temp_f0;
            temp_3 = ((s32)temp_f22 + 0x400) & 0xFFF;
            
            temp_f0 = func_0015ACC8();
            temp_f20_3 = D_004A4760[temp_3];
            temp_f0 = 4096.0f / temp_f0;
            temp_f24 = temp_f24 * temp_f0;
            temp_3 = (s32)temp_f24 & 0xFFF;
            temp_f0 = D_004A4760[temp_3];
            
            temp_f23_2 = temp_f23 * 0.05f;
            temp_f4 = temp_f26 * 0.05f;
            temp_f5 = temp_f25 * 0.05f;
            temp_f23 = temp_f23 * 0.6f;
            temp_f4 = temp_f4 + temp_f23_2;
            temp_f5 = temp_f5 + temp_f23_2;
            
            var_17[0] = temp_f4;
            
            temp_f20_4 = temp_f20_3 + temp_f0;
            temp_f23_2 = temp_f20_4 * 0.05f;
            temp_f20_4 = temp_f20_4 * 0.6f;
            temp_f5 = temp_f5 + temp_f23_2;
            var_17[1] = temp_f5;
            
            temp_f0 = *(f32 *)((char *)temp_16 + 0) + temp_f23;
            temp_f4 = *(f32 *)((char *)temp_16 + 4);
            temp_f20_2 = *(f32 *)((char *)temp_16 + 8) + temp_f20_4;
            
            temp_f2 = temp_f0 * temp_f2;
            temp_f3 = temp_f4 * temp_f3;
            temp_f0 = temp_f0 * temp_f1;
            temp_f4 = temp_f4 * temp_f6;
            temp_f2 = temp_f2 + temp_f3;
            temp_f1 = temp_f20_2 * temp_f1;
            temp_f0 = temp_f0 + temp_f4;
            temp_f20_2 = temp_f20_2 * temp_f7;
            temp_f0 = temp_f0 + temp_f1;
            temp_f2 = temp_f2 + temp_f20_2;
            
            temp_f0 = temp_f0 * -0.5f;
            temp_f2 = temp_f2 * 0.5f;
            temp_f0 = temp_f0 + 0.5f;
            temp_f2 = temp_f2 + 0.5f;
            temp_f0 = temp_f0 + temp_f25 * 0.02f;
            temp_f2 = temp_f2 + temp_f26 * 0.02f;
            
            var_17[2] = temp_f2;
            var_17[3] = temp_f0;
            
            var_17 += 16;
        } while (var_18 < temp_21);
    }
}
