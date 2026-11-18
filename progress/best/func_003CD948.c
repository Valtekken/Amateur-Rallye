extern s32 func_002B1FC0(u32, void *, u32, u32, void *, s32);
extern s32 func_002B2028(void *, void *, void *);
extern s32 func_003D13B0(void *);
extern s32 func_003D16A8(void *);
extern void *func_003D2910(u32);
extern void *func_003D2B48(s32, void **, u32, u32, void *, s32);
extern s32 func_003F931C(void *, void *, u32);
extern s32 func_003F93CC(void *, void *, s32, s32, void *, s32);
extern s32 D_00437E18;
extern s32 D_00488CC0;
extern s32 D_00488CD0;

void **func_003CD948(void **arg0, u32 arg1, u32 arg2, void *arg3, u32 arg4) {
    void *sp0;
    s32 sp4;
    void **temp_5;
    void *temp_2;
    void *temp_3_3;
    void *temp_5_2;
    void *temp_6_4;
    void *var_16;
    void *var_2;
    void *var_4;
    void *var_8;
    s32 temp_16_2;
    s32 temp_2_2;
    s32 temp_3_4;
    s32 temp_6_5;
    s32 temp_7;
    s32 var_30;
    s32 var_9;
    u32 *temp_2_3;
    u32 temp_16;
    u32 temp_16_3;
    u32 temp_19;
    u32 temp_21;
    u32 temp_3;
    u32 temp_4;
    u32 temp_6;
    u32 temp_6_2;
    u32 temp_6_3;
    u32 var_18;
    void *temp_3_2;

    sp0 = arg3;
    temp_21 = *(u32 *)((s8 *)*arg0 - 0x10);
    if (temp_21 < arg1) {
        func_003D13B0(&D_00488CC0);
    }
    temp_3 = temp_21 - arg1;
    temp_19 = (temp_3 < arg2) ? temp_3 : arg2;
    temp_16 = temp_21 - temp_19;
    if ((u32) (0xFFFFFFFE - arg4) < temp_16) {
        func_003D16A8(&D_00488CD0);
    }
    var_8 = *arg0;
    temp_16_2 = temp_16 + arg4;
    sp4 = temp_16_2;
    temp_4 = temp_16_2 + 1;
    temp_3_2 = (s8 *)var_8 - 0x10;
    var_9 = 0;
    *(s32 *)((s8 *)temp_3_2 + 0xC) = 0;
    if (((u32) *(u32 *)((s8 *)temp_3_2 + 8) >= 2U) || ((temp_6 = *(u32 *)((s8 *)temp_3_2 + 4), ((temp_6 < temp_4) != 0)) || ((u32) (((temp_4 > 0xFU) ? temp_4 : 0x10U) * 2) < temp_6))) {
        var_9 = 1;
    }
    var_18 = 0x10;
    if (var_9 != 0) {
        if (temp_4 > 0x10U) {
            var_30 = arg1 + arg4;
            do {
                var_18 *= 2;
            } while (var_18 < temp_4);
        } else {
            var_30 = arg1 + arg4;
        }
        temp_16_3 = var_18 + 0x10;
        temp_6_2 = var_18 + 0x17;
        if (temp_16_3 >= 0x81U) {
            temp_2 = func_002B1FC0(temp_16_3, var_8, temp_6_2, temp_4, var_8, var_9);
            var_4 = temp_2;
            if (temp_2 == NULL) {
                var_2 = func_003D2910(temp_16_3);
                goto block_21;
            }
        } else {
            temp_5 = (void **)(((((temp_6_2 >> 3) - 1) * 4) + (s8 *)&D_00437E18));
            temp_3_3 = *temp_5;
            if (temp_3_3 != NULL) {
                var_4 = temp_3_3;
                *temp_5 = *(void **)temp_3_3;
            } else {
                var_2 = func_003D2B48(temp_6_2 & 0xFFFFFFF8, temp_5, temp_6_2, temp_4, var_8, var_9);
block_21:
                var_4 = var_2;
            }
        }
        *(u32 *)((s8 *)var_4 + 4) = var_18;
        *(s32 *)((s8 *)var_4 + 8) = 1;
        *(s32 *)((s8 *)var_4 + 0xC) = 0;
        if (arg1 != 0) {
            var_16 = (s8 *)var_4 + 0x10;
            func_003F931C(var_16, *arg0, arg1);
        } else {
            var_16 = (s8 *)var_4 + 0x10;
        }
        temp_6_3 = temp_21 - (arg1 + temp_19);
        if (temp_6_3 != 0) {
            func_003F931C((s8 *)var_16 + var_30, (s8 *)*arg0 + arg1 + temp_19, temp_6_3);
        }
        if (arg4 != 0) {
            func_003F931C((s8 *)var_16 + arg1, sp0, arg4);
        }
        temp_6_4 = *arg0;
        temp_5_2 = (s8 *)temp_6_4 - 0x10;
        temp_2_2 = *(s32 *)((s8 *)temp_5_2 + 8) - 1;
        *(s32 *)((s8 *)temp_5_2 + 8) = temp_2_2;
        if (temp_2_2 == 0) {
            temp_3_4 = *(s32 *)((s8 *)temp_5_2 + 4);
            if ((u32) (temp_3_4 + 0x10) >= 0x81U) {
                func_002B2028(temp_5_2, temp_5_2, temp_6_4);
            } else {
                temp_2_3 = (u32 *)((( ((u32) (temp_3_4 + 0x17)) >> 3) - 1) * 4 + (s8 *)&D_00437E18);
                *(u32 *)((s8 *)temp_6_4 - 0x10) = *temp_2_3;
                *temp_2_3 = (u32) temp_5_2;
            }
        }
        var_8 = var_16;
        *arg0 = var_16;
    } else {
        temp_6_5 = temp_21 - (arg1 + temp_19);
        temp_7 = arg1 + arg4;
        if (temp_6_5 != 0) {
            func_003F93CC((s8 *)var_8 + temp_7, (s8 *)var_8 + arg1 + temp_19, temp_6_5, temp_7, var_8, var_9);
            var_8 = *arg0;
        }
        if (arg4 != 0) {
            func_003F931C((s8 *)var_8 + arg1, sp0, arg4);
            var_8 = *arg0;
        }
    }
    *(s32 *)((s8 *)var_8 - 0x10) = sp4;
    return arg0;
}
