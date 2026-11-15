typedef struct S_func_003401F0_arg0 {
    s8 unk_00;
    s8 unk_01;
    s8 unk_02;
    s8 unk_03;
} S_func_003401F0_arg0;

void func_003402B0(S_func_003401F0_arg0 *arg0, f32 arg1) {
    union {
        f32 f;
        u32 u;
    } conv;
    conv.u = 0x437F0000;
    
    f32 product = arg1 * conv.f;
    s32 int_val = (s32)product;

    if (int_val < 2) {
        arg0->unk_03 = (s8)0xFE;
    } else {
        arg0->unk_03 = (s8)2;
    }
}
