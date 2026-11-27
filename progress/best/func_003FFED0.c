extern void *func_003FFA18(s32);

void *func_003FFED0(void *arg1, void *arg2)
{
    s32 *var_8_3;
    s32 temp_21;
    s32 var_18;
    s32 var_19;
    s32 var_20;
    s32 var_3;
    s32 var_5;
    u16 temp_2_2;
    u16 temp_2_3;
    u16 temp_7;
    u32 *var_12;
    u32 *var_14;
    u32 *var_16_2;
    u32 *var_6;
    u32 *var_9_2;
    u32 *var_9_3;
    u32 temp_10_2;
    u32 temp_24;
    u32 temp_3;
    u32 temp_4;
    u32 temp_4_2;
    u32 temp_4_3;
    u32 var_11;
    u32 var_11_2;
    u32 var_13;
    u32 var_15;
    u32 var_2;
    u32 var_7;
    u32 var_8;
    u32 var_8_2;
    u32 var_9;
    void *temp_17;
    void *temp_18;
    void *temp_25;
    void *temp_2;
    void *var_16;
    void *var_17;
    s32 temp_10;
    u32 *var_8_3u;

    var_17 = arg2;
    var_16 = arg1;
    var_18 = *(s32 *)((u8 *)var_16 + 0x10);
    var_19 = *(s32 *)((u8 *)var_17 + 0x10);
    temp_25 = var_16;
    if (var_18 < var_19) {
        var_16 = var_17;
        var_17 = temp_25;
        var_18 = *(s32 *)((u8 *)var_16 + 0x10);
        var_19 = *(s32 *)((u8 *)var_17 + 0x10);
    }
    var_20 = var_18 + var_19;
    temp_2 = func_003FFA18(*(s32 *)((u8 *)var_16 + 0x4) + (*(s32 *)((u8 *)var_16 + 0x8) < var_20));
    temp_21 = var_20 * 4;
    temp_24 = (u32)(u8 *)temp_2 + 0x14;
    temp_4 = temp_24 + temp_21;
    var_9 = temp_24;
    if (temp_24 < temp_4) {
        var_14 = (u32 *)((u8 *)var_16 + 0x14);
        var_5 = var_18 * 4;
        var_6 = (u32 *)((u8 *)var_17 + 0x14);
        var_3 = var_19 * 4;
        do { *(u32 *)var_9 = 0; var_9 += 4; } while (var_9 < temp_4);
    } else {
        var_14 = (u32 *)((u8 *)var_16 + 0x14);
        var_5 = var_18 * 4;
        var_6 = (u32 *)((u8 *)var_17 + 0x14);
        var_3 = var_19 * 4;
    }
    var_12 = var_6;
    temp_17 = (void *)(var_14 + var_5);
    temp_18 = (void *)(var_12 + var_3);
    var_13 = temp_24;
    if ((u32)(u8 *)var_12 < (u32)(u8 *)temp_18) {
        do {
            temp_10 = *var_12 & 0xFFFF;
            var_8 = var_13;
            if (temp_10 != 0) {
                var_9_2 = var_14;
                var_11 = 0;
                var_16_2 = var_12 + 4;
                var_15 = var_8 + 4;
                do {
                    temp_3 = *var_9_2;
                    temp_4_2 = *(u32 *)var_8;
                    var_9_2 += 4;
                    temp_2_2 = (u16)(((temp_3 & 0xFFFF) * temp_10) + (temp_4_2 & 0xFFFF) + var_11);
                    *(u16 *)var_8 = temp_2_2;
                    temp_7 = (u16)(((temp_3 >> 0x10) * temp_10) + (temp_4_2 >> 0x10) + (temp_2_2 >> 0x10));
                    *(u16 *)(var_8 + 2) = temp_7;
                    var_11 = temp_7 >> 0x10;
                    var_8 += 4;
                } while ((u32)(u8 *)var_9_2 < (u32)(u8 *)temp_17);
                *(u32 *)var_8 = var_11;
            } else {
                var_16_2 = var_12 + 4;
                var_15 = var_13 + 4;
            }
            temp_10_2 = *var_12 >> 0x10;
            var_8_2 = var_13;
            if (temp_10_2 != 0) {
                var_9_3 = var_14;
                var_7 = *(u32 *)var_8_2;
                var_11_2 = 0;
                var_2 = var_7;
                do {
                    temp_4_3 = *var_9_3;
                    *(u16 *)var_8_2 = (u16)var_7;
                    var_9_3 += 4;
                    temp_2_3 = (u16)(((temp_4_3 & 0xFFFF) * temp_10_2) + (var_2 >> 0x10) + var_11_2);
                    *(u16 *)(var_8_2 + 2) = temp_2_3;
                    var_8_2 += 4;
                    var_2 = *(u32 *)var_8_2;
                    var_7 = ((temp_4_3 >> 0x10) * temp_10_2) + (var_2 & 0xFFFF) + (temp_2_3 >> 0x10);
                    var_11_2 = var_7 >> 0x10;
                } while ((u32)(u8 *)var_9_3 < (u32)(u8 *)temp_17);
                *(u32 *)var_8_2 = var_7;
            }
            var_12 = var_16_2;
            var_13 = var_15;
        } while ((u32)(u8 *)var_12 < (u32)(u8 *)temp_18);
    }
    var_8_3 = (s32 *)(temp_24 + temp_21);
loop_20:
    if (var_20 > 0) {
        var_8_3 -= 4;
        if (*var_8_3 == 0) {
            var_20 -= 1;
            goto loop_20;
        }
    }
    *(s32 *)((u8 *)temp_2 + 0x10) = var_20;
    return temp_2;
}
