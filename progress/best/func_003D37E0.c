extern s32 func_002AE6B8(s32, s64);
extern s8 func_003D30B0(s32);
extern void func_003D4D70(s32);
extern s32 func_003D4EA0(void **);
extern void func_003D6F68(s32, s8);
extern s8 func_003DA6B8(s32);

s32 func_003D37E0(void **arg0, s64 *arg1, s32 *arg2) {
    s32 temp_17;
    s32 temp_3_2;
    s32 temp_4;
    s32 var_19;
    s32 var_22;
    s32 var_4;
    s8 var_3_2;
    s8 var_5;
    s8 var_5_2;
    u32 var_16;
    u32 var_3;
    u8 temp_2;
    void *temp_3;

    temp_3 = *arg0;
    temp_2 = *(u8 *)((u8 *)temp_3 + 0x1A);
    if (temp_2 != 0) {
        var_4 = 0;
        *(u8 *)((u8 *)temp_3 + 0x1A) = (u8)(temp_2 | 2);
    } else {
        temp_4 = *(s32 *)((u8 *)temp_3 + 0x4);
        if (temp_4 != 0) {
            func_003D4D70(temp_4);
        }
        var_4 = 1;
        if ((*(s64 *)((u8 *)*arg0 + 0x10) & 1) != 0) {
            var_4 = func_003D4EA0(arg0);
        }
    }
    if (var_4 != 0) {
        var_19 = 0xA;
        var_22 = 0;
        temp_17 = *(s32 *)(u8 *)*arg0;
        var_5 = func_003D30B0(temp_17);
        if (var_5 != -1) {
            *arg2 = 0;
            if (var_5 == 43) {
                var_5 = func_003D30B0(temp_17);
            } else if (var_5 == 45) {
                *arg2 = 1;
                var_5 = func_003D30B0(temp_17);
            }
            if (var_5 != -1) {
                temp_3_2 = (s32)(*(s64 *)((u8 *)*arg0 + 0x10) & 0x70);
                if (temp_3_2 == 0) {
                    if (var_5 == 0x30) {
                        var_5_2 = func_003DA6B8(temp_17);
                        if (var_5_2 == -1) {
                            *arg1 = 0;
                            return 1;
                        }
                        if (var_5_2 == 0x78 || var_5_2 == 0x58 || (var_5_2 == 0x58)) {
                            var_19 = 0x10;
                            var_5 = func_003DA6B8(temp_17);
                            if (var_5 != -1) goto block_29;
                            goto block_42;
                        }
                        var_19 = 8;
                        func_003D6F68(temp_17, var_5_2);
                        var_5 = 0x30;
                        goto block_29;
                    }
                    goto block_29;
                }
                if (temp_3_2 == 0x40) var_19 = 0x10;
                else var_19 = ((temp_3_2 ^ 0x20) == 0) ? 8 : 0xA;
block_29:
                *arg1 = 0;
                if (var_5 != -1) {
                    var_3 = (u32)(var_5 - 0x30);
                    for (;;) {
                        var_16 = var_3;
                        if (var_3 >= 0xAU) {
                            var_16 = (u32)(var_5 - 0x37);
                            if ((u32)(var_5 - 0x41) >= 6U) {
                                var_16 = ((u32)(var_5 - 0x61) <= 5U) ? (u32)(var_5 - 0x57) : 0x3E7U;
                            }
                        }
                        if ((s32)var_16 < var_19) {
                            var_22 += 1;
                            *arg1 = (s64)((u32)var_16 + (u32)func_002AE6B8(var_19, *arg1));
                            var_5 = func_003DA6B8(temp_17);
                            var_3 = (u32)(var_5 - 0x30);
                            if (var_5 == -1) return 1;
                        } else {
                            func_003D6F68(temp_17, var_5);
                            if (var_22 != 0) return 1;
                            var_3_2 = (s8)(*(u8 *)((u8 *)*arg0 + 0x1A) | 2);
                            goto block_43;
                        }
                    }
                }
                return 1;
            }
            goto block_42;
        }
block_42:
        var_3_2 = (s8)(*(u8 *)((u8 *)*arg0 + 0x1A) | 3);
block_43:
        *(u8 *)((u8 *)*arg0 + 0x1A) = (u8)var_3_2;
        return 0;
    }
    return 0;
}
