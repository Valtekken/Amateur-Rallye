extern f32 func_0016FC30(void *, f32);
extern void func_00170660(s32);
extern f32 func_00171518(s32, f32);

void func_0016F9F8(void *arg0, f32 fparg0) {
    u8 *a = (u8 *)arg0;
    f32 var_f20 = fparg0;
    f32 temp_f12;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f12;
    f32 temp_f8;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f4;
    f32 temp_f3;
    f32 var_f0_2;
    f32 temp_f2_2;
    f32 var_f0_3;
    f32 var_f1_2;
    f32 temp_f3_2;
    f32 temp_f0_3;
    f32 temp_f1_2;
    f32 temp_f1_3;

    if ((*(s32 *)(a + 0x74) != 0) && (*(s32 *)(a + 0xF8) == 0)) {
        var_f20 = 0.0f;
    }
    temp_f12 = *(f32 *)(a + 0x28);
    temp_f0 = *(f32 *)(a + 0x44);
    if (temp_f0 <= temp_f12) {
        *(f32 *)(a + 0xDC) = 0.0f;
    } else {
        *(f32 *)(a + 0xDC) = var_f20 * *(f32 *)(a + 0x50) * func_00171518(*(s32 *)(a + 0x70), temp_f12 / temp_f0);
    }
    temp_f1_3 = *(f32 *)(a + 0x58);
    temp_f2 = *(f32 *)(a + 0x28);
    var_f12 = 0.0f;
    if (temp_f2 > 0.0f) {
        var_f12 = temp_f2;
    }
    *(f32 *)(a + 0xDC) = *(f32 *)(a + 0xDC) - ((temp_f1_3 + (*(f32 *)(a + 0x54) - temp_f1_3) * var_f20) * var_f12);
    temp_f8 = func_0016FC30(a, var_f12);
    if (*(s32 *)(a + 0x80) == 1) {
        var_f4 = 0.0f;
    } else {
        temp_f2 = *(f32 *)(a + 0x28);
        var_f12 = 0.0f;
        if (temp_f2 > 0.0f) {
            var_f12 = temp_f2;
        }
        temp_f4 = (((__builtin_fabsf(var_f12 - temp_f8) / *(f32 *)(a + 0x44)) - 0.1f) * -0.5f) / 0.3f + 1.0f;
        var_f0 = 0.5f;
        if (!(temp_f4 < 0.5f)) {
            var_f0 = temp_f4;
            if (temp_f4 > 1.0f) {
                var_f0 = 1.0f;
            }
        }
        var_f4 = var_f0;
    }
    var_f0_2 = 0.0f;
    temp_f3 = *(f32 *)(a + 0x5C);
    if (*(f32 *)(a + 0x28) > 0.0f) {
        var_f0_2 = *(f32 *)(a + 0x28);
    }
    temp_f2_2 = -temp_f3;
    var_f0_3 = (temp_f8 - var_f0_2) * 15.0f;
    if (var_f0_3 < temp_f2_2) {
        var_f0_3 = temp_f2_2;
    } else if (temp_f3 < var_f0_3) {
        var_f0_3 = temp_f3;
    }
    var_f1_2 = *(f32 *)(a + 0x28);
    temp_f3_2 = var_f4 * var_f0_3;
    if (*(f32 *)(a + 0x28) < 0.0f) {
        var_f1_2 = 0.0f;
    }
    temp_f0_3 = *(f32 *)(a + 0xDC);
    temp_f1_2 = __builtin_fabsf(temp_f8 - var_f1_2);
    *(f32 *)(a + 0x2C) = temp_f0_3 + temp_f3_2;
    *(f32 *)(a + 0xE4) = temp_f1_2;
    *(f32 *)(a + 0xE0) = (temp_f0_3 - temp_f3_2) * *(f32 *)(*(u8 **)(a + 0x64) + (*(s32 *)(a + 0x80) << 2)) * *(f32 *)(a + 0x4C);
    func_00170660(*(s32 *)(a + 0x38));
}
