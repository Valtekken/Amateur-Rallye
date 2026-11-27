extern void func_00152720(void *, void *, void *, s32);

typedef struct { f32 x; f32 y; f32 z; } Vec3;

struct Elem; /* defined via offsets */

void func_00357C38(u8 *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3)
{
    s32 count;
    s32 var_2;
    u8 *temp_16;
    s32 var_18;
    s32 var_17;
    s32 var_19;
    s32 var_20;

    count = (s32)((u32)(*(s32 *)(arg0 + 0x1060) - *(s32 *)(arg0 + 0x105C)) * 0xF0F0F0F1u) >> 2;
    var_2 = count - 1;

    if (var_2 < 0) {
        return;
    }

    do {
        s32 temp_23 = var_2 - 1;
        temp_16 = *(u8 **)(arg0 + 0x105C) + (var_2 * 0x44);
        var_18 = *(s32 *)(temp_16 + 0x30) - 1;
        var_2 = temp_23;
        if (var_18 >= 0) {
            var_19 = var_18 * 0xC;
            var_17 = var_18;
            var_20 = var_19;
            do {
                Vec3 *temp_2 = (Vec3 *)(*(u8 **)(temp_16 + 0x24) + var_20);
                f32 f0 = temp_2->x;
                f32 f8 = temp_2->z;
                if ((f0 < fparg0) || (fparg2 <= f0) || (f8 < fparg1) || (fparg3 <= f8)) {
                    s32 *temp_6 = *(s32 **)(temp_16 + 0xC);
                    s32 temp_7 = var_17 * 4;
                    s32 temp_5 = *(s32 *)(temp_16 + 0x30) - 1;
                    s32 sp10 = temp_6[var_17];
                    Vec3 saved = *temp_2;
                    *(s32 *)(temp_16 + 0x30) = temp_5;
                    if (var_17 != temp_5) {
                        u8 *temp_3 = *(u8 **)(temp_16 + 0x24);
                        s32 temp_5_2 = temp_6[temp_5];
                        Vec3 *temp_4 = (Vec3 *)(temp_3 + temp_5 * 0xC);
                        Vec3 *temp_3_2 = (Vec3 *)(temp_3 + var_19);
                        temp_3_2->x = temp_4->x;
                        temp_3_2->y = temp_4->y;
                        temp_3_2->z = temp_4->z;
                        *(*(s32 **)temp_16 + temp_5_2 * 4) = var_17;
                        *(temp_6 + var_17) = temp_5_2;
                    }
                    {
                        Vec3 *temp_2_2 = (Vec3 *)(*(u8 **)(temp_16 + 0x24) + (*(s32 *)(temp_16 + 0x30) * 0xC));
                        temp_2_2->x = saved.x;
                        temp_2_2->y = saved.y;
                        temp_2_2->z = saved.z;
                    }
                    {
                        u8 *temp_4_2 = temp_16 + 0x18;
                        s32 *temp_5_3 = *(s32 **)(temp_4_2 + 0x4);
                        if (temp_5_3 != *(s32 **)(temp_4_2 + 0x8)) {
                            if (temp_5_3 != NULL) {
                                *temp_5_3 = sp10;
                            }
                            *(s32 **)(temp_4_2 + 0x4) = temp_5_3 + 1;
                        } else {
                            func_00152720(temp_4_2, temp_5_3, &sp10, temp_7);
                        }
                    }
                }
                var_19 -= 0xC;
                var_17 -= 1;
                var_18 -= 1;
                var_20 -= 0xC;
            } while (var_18 >= 0);
            var_2 = temp_23;
        }
    } while (var_2 >= 0);
}
