typedef struct S_func_001FBD18_arg0 {
    f32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 unk_10[0x4];
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
} S_func_001FBD18_arg0;

void func_001FBFE8(S_func_001FBD18_arg0 *arg0) {
    f32 temp_f2 = arg0->unk_1C;
    f32 temp_f0 = arg0->unk_00;
    f32 temp_f3 = arg0->unk_08;
    f32 k = 0.033333335f;
    f32 prod = temp_f2 * k;
    arg0->unk_14 = temp_f0;
    arg0->unk_18 = temp_f2;
    f32 temp_f0_2 = temp_f0 + prod;
    arg0->unk_00 = temp_f0_2;
    if (temp_f0_2 < temp_f3 && temp_f2 < 0.0f) {
        if (arg0->unk_04 != 0) {
            arg0->unk_00 = temp_f3;
        } else {
            f32 temp_f0_3 = temp_f3 - temp_f0_2;
            f32 temp_f1 = arg0->unk_0C;
            f32 var_f0;
            if (temp_f0_3 >= 0.0f) {
                var_f0 = temp_f1 - temp_f0_3;
            } else {
                var_f0 = temp_f1 + temp_f0_3;
            }
            arg0->unk_00 = var_f0;
        }
    }
    f32 temp_f2_2 = arg0->unk_00;
    f32 temp_f1_2 = arg0->unk_0C;
    if (temp_f1_2 < temp_f2_2 && arg0->unk_1C > 0.0f) {
        if (arg0->unk_04 != 0) {
            arg0->unk_00 = temp_f1_2;
        } else {
            f32 temp_f0_4 = temp_f2_2 - temp_f1_2;
            f32 temp_f1_3 = arg0->unk_08;
            f32 var_f0_2;
            if (temp_f0_4 >= 0.0f) {
                var_f0_2 = temp_f1_3 + temp_f0_4;
            } else {
                var_f0_2 = temp_f1_3 - temp_f0_4;
            }
            arg0->unk_00 = var_f0_2;
        }
    }
    f32 temp_f1_4 = arg0->unk_24;
    if (temp_f1_4 > 0.0f) {
        f32 temp_f0_5 = arg0->unk_20 + k;
        arg0->unk_20 = temp_f0_5;
        if (temp_f1_4 <= temp_f0_5) {
            arg0->unk_24 = 0.0f;
            arg0->unk_20 = 0.0f;
        }
    }
}
