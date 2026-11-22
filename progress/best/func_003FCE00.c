s32 func_003FCE00(void *arg0, s32 arg1, s8 arg2) {
    u8 buf[0x134];
    u8 sp134;
    s32 var_5 = arg1;
    u8 *var_6, *var_6_2, *var_8;
    u8 temp_2, temp_2_2;

    *(s8 *)arg0 = arg2;
    if (var_5 < 0) {
        var_5 = -var_5;
        *(s8 *)((s8 *)arg0 + 1) = '-';
        var_8 = (u8 *)arg0 + 2;
    } else {
        var_8 = (u8 *)arg0 + 2;
        *(s8 *)((s8 *)arg0 + 1) = '+';
    }
    var_6 = buf + 0x134;
    if (var_5 >= 10) {
        do {
            var_6 -= 1;
            temp_2 = (var_5 % 10) + 0x30;
            var_5 = var_5 / 10;
            *var_6 = temp_2;
        } while (var_5 >= 10);
        var_6_2 = var_6 - 1;
        *var_6_2 = var_5 + 0x30;
        if ((u32)var_6_2 < (u32)var_6) {
            do {
                temp_2_2 = *var_6_2;
                var_6_2 += 1;
                *var_8 = temp_2_2;
                var_8 += 1;
            } while ((u32)var_6_2 < (u32)var_6);
        }
    } else {
        *var_8 = 0x30;
        *(var_8 + 1) = (s8)(var_5 + 0x30);
        var_8 = var_8 + 2;
    }
    return var_8 - (u8 *)arg0;
}
