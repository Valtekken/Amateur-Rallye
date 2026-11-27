extern f32 func_003F2E78(f32);

typedef struct {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 pad1[0x8];
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    u8 pad2[0x4];
    s32 unk34;
    s32 unk38;
    s8 *unk3C;
} A;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} Out;

s32 func_001D51A8(A *arg0, s32 arg1, s32 arg2, Out *arg3) {
    volatile s32 sp0;
    volatile s32 sp4;
    s32 temp_10;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_4;
    s32 temp_f1;
    s32 temp_f1_2;
    s32 var_14;
    s32 var_15;
    s32 var_18;
    s32 var_23;
    s32 var_2;
    s32 var_2_2;
    s32 var_5;
    s32 var_5_2;
    s32 var_5_3;
    s32 var_7;
    s32 var_7_2;
    s32 var_8;
    s8 *grid;

    sp0 = 0;
    sp4 = 0;
    var_23 = 0;
    if (arg0->unk2C == 0) {
        return 0;
    }
    temp_f1 = (s32)func_003F2E78((f32)arg1 / (f32)arg0->unk24);
    temp_f1_2 = (s32)func_003F2E78((f32)arg2 / (f32)arg0->unk28);
    var_15 = 0;
    if (arg0->unk38 > 0) {
        var_5 = arg0->unk34;
    loop_4:
        var_8 = 0;
        var_14 = var_5;
        if (var_5 > 0) {
            var_2 = var_15 * var_5;
            do {
                grid = arg0->unk3C;
                var_18 = 0;
                if (grid[var_2 + var_8] == 0) {
                    temp_2 = var_8 + temp_f1;
                    temp_2_2 = var_15 + temp_f1_2;
                    if ((temp_2 < var_5) && (temp_2_2 < arg0->unk38)) {
                        var_18 = 1;
                        var_7 = var_15;
                        if (var_15 < temp_2_2) {
                            do {
                                var_5_2 = var_8;
                                if (var_8 < temp_2) {
                                    var_2_2 = var_7 * var_14;
                                    do {
                                        if (grid[var_2_2 + var_5_2] == 1) {
                                            var_7 = temp_2_2;
                                            var_18 = 0;
                                            var_5_2 = temp_2 + 1;
                                        }
                                        var_5_2 += 1;
                                        var_2_2 = var_7 * var_14;
                                    } while (var_5_2 < temp_2);
                                }
                                var_7 += 1;
                            } while (var_7 < temp_2_2);
                        }
                    }
                }
                if (var_18 == 1) {
                    temp_2_3 = var_15 + temp_f1_2;
                    var_7_2 = var_15;
                    if (var_15 < temp_2_3) {
                        temp_10 = var_8 + temp_f1;
                        do {
                            var_5_3 = var_8;
                            if (var_8 < temp_10) {
                                do {
                                    temp_4 = (var_7_2 * arg0->unk34) + var_5_3;
                                    var_5_3 += 1;
                                    grid[temp_4] = 1;
                                } while (var_5_3 < temp_10);
                            }
                            var_7_2 += 1;
                            var_14 = arg0->unk34;
                        } while (var_7_2 < temp_2_3);
                    }
                    sp0 = var_8;
                    var_23 = 1;
                    sp4 = var_15;
                    var_8 = var_14;
                    var_15 = arg0->unk38;
                }
                var_8 += 1;
                var_5 = var_14;
                var_2 = var_15 * var_5;
            } while (var_8 < var_5);
        }
        var_15 += 1;
        if (var_15 < arg0->unk38) {
            var_5 = arg0->unk34;
            goto loop_4;
        }
    }
    if (var_23 != 1) {
        arg3->unk0 = arg0->unk14;
        arg3->unk4 = arg0->unk18;
        arg3->unk8 = temp_f1 * arg0->unk24;
        arg3->unkC = temp_f1_2 * arg0->unk28;
        return 0;
    }
    arg3->unk0 = (sp0 * arg0->unk24) + arg0->unk14;
    arg3->unk4 = (sp4 * arg0->unk28) + arg0->unk18;
    arg3->unk8 = temp_f1 * arg0->unk24;
    arg3->unkC = temp_f1_2 * arg0->unk28;
    arg0->unk10 = arg0->unk10 + 1;
    return 1;
}
