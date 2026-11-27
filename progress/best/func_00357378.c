extern void func_001D9A90(void *, u32, s32, s32 *);
extern void func_0020FE18(void *, u32, s32, s32 *, void *);

typedef struct { f32 x; f32 y; f32 z; } Vec3;

void func_00357378(u8 *arg0, f32 fparg0, f32 fparg1, f32 fparg2)
{
    u8 *temp_16;
    s32 temp_18;
    s32 temp_3;
    s32 var_17;
    u8 *temp_21;
    Vec3 *temp_2_2;
    s32 *temp_3_5;
    s32 sp10;

    temp_16 = *(u8 **)(arg0 + 0x105C) + (*(s32 *)(arg0 + 0x1024) * 0x44);
    temp_18 = *(s32 *)(temp_16 + 0x30);
    temp_3 = temp_18 + 1;
    *(s32 *)(temp_16 + 0x30) = temp_3;
    if (*(s32 *)(temp_16 + 0x34) < temp_3) {
        *(s32 *)(temp_16 + 0x34) = temp_3;
    }

    /* store vector at vec[temp_18] */
    temp_2_2 = (Vec3 *)(*(u8 **)(temp_16 + 0x24) + temp_18 * 0xC);
    temp_2_2->x = fparg0;
    temp_2_2->y = fparg1;
    temp_2_2->z = fparg2;

    temp_21 = temp_16 + 0x18;
    temp_3_5 = *(s32 **)(temp_21 + 0x4);
    sp10 = -1;
    if (((s32)((u8 *)temp_3_5 - *(u8 **)temp_21) >> 2) != 0) {
        var_17 = *(s32 *)((u8 *)temp_3_5 - 4);
        *(s32 **)(temp_21 + 0x4) = (s32 *)((u8 *)temp_3_5 - 4);
    } else {
        var_17 = *(s32 *)(temp_16 + 0x38);
        *(s32 *)(temp_16 + 0x38) = var_17 + 1;
        if (var_17 >= ((s32)(*(s32 *)(temp_16 + 0x4) - *(s32 *)(temp_16 + 0x0)) >> 2)) {
            sp10 = -1;
            /* reserve */
        }
    }

    *(s32 *)(*(s32 *)temp_16 + var_17 * 4) = temp_18;
    *(s32 *)(*(s32 *)(temp_16 + 0xC) + temp_18 * 4) = var_17;
}
