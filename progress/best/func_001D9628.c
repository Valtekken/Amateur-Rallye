extern u32 func_001D94C0(u32, u32, u32 *);
extern u32 func_001D9598(u32, u32, u32 *, u32);
extern u32 func_001D9F40(u32, u32, u32, u32);
extern u32 func_002B1FC0(s32, s32, s32 *);
extern void func_002B2028(u32, u32);
extern u32 func_003D2910(s32);
extern u32 func_00152D28(u32, s32, u32);
extern u32 D_0040E618[];

typedef struct { u32 unk0; u32 unk4; u32 unk8; } Buf;
typedef struct { u32 unk0; u32 unk4; u32 unk8; u32 unkC; } Chunk;

void func_001D9628(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    Buf *b = (Buf *)arg0;
    u32 sp14 = arg2;
    s32 sp10;
    u32 var_20, var_22, temp_21, temp_16;
    s32 temp_2, temp_5, temp_5_2, temp_2_2, temp_2_5, temp_17_2, temp_2_7, temp_2_8;
    s32 temp_2_4, temp_2_6, temp_3_3, var_3, var_5, var_18;
    u32 var_16, var_17, var_16_2, temp_3, temp_4, temp_3_2, temp_4_3;
    u32 temp_3_4, temp_4_4, temp_4_5, temp_4_2;
    u32 sp_buf[2];

    if (arg2 == 0) {
        return;
    }
    temp_5 = b->unk4;
    if ((u32)((s32)(b->unk8 - temp_5) >> 3) < arg2) {
        temp_2 = (s32)(temp_5 - b->unk0) >> 3;
        temp_5_2 = (u32)temp_2 < arg2;
        sp10 = temp_2;
        temp_2_2 = temp_2 + ((temp_5_2 == 0) ? sp10 : (s32)sp14);
        var_22 = temp_2_2 * 8;
        if (var_22 != 0) {
            temp_21 = func_002B1FC0(var_22, temp_5_2, &sp10);
            var_20 = temp_21;
            if (temp_21 == 0) {
                var_20 = func_003D2910(var_22);
            }
        } else {
            var_20 = 0;
        }
        temp_16 = b->unk4;
        temp_21 = func_001D9F40(arg1, b->unk4, func_001D9598(func_001D9F40(b->unk0, arg1, var_20, 0), sp14, arg3, 0), 0);
        temp_4_2 = b->unk0;
        var_16 = temp_4_2;
        if (var_16 < temp_16) {
            do {
                temp_3 = *(u32 *)var_16;
                temp_4 = temp_3 - 0x10;
                temp_2_4 = ((s32 *)(temp_4 + 8))[0] - 1;
                ((s32 *)(temp_4 + 8))[0] = temp_2_4;
                if (temp_2_4 == 0) {
                    if (((s32 *)(temp_4 + 4))[0] + 0x10 == 0) {
                        *(u32 *)temp_3 = D_0040E618[-1];
                        D_0040E618[-1] = temp_4;
                    } else {
                        var_16 += 8;
                        func_002B2028(temp_4, 0);
                        continue;
                    }
                }
                var_16 += 8;
            } while (var_16 < temp_16);
        }
        temp_4_2 = b->unk0;
        temp_2_5 = (s32)((s32)(b->unk8 - temp_4_2) >> 3);
        if (temp_2_5 != 0) {
            func_002B2028(temp_4_2, 0);
        }
        b->unk4 = temp_21;
        b->unk8 = (s32)(var_20 + var_22);
        b->unk0 = var_20;
    } else {
        temp_3_2 = *(u32 *)arg3;
        temp_4_3 = temp_3_2 - 0x10;
        if (((s32 *)(temp_4_3 + 0xC))[0] != 0) {
            var_5 = func_00151930((void *)temp_4_3);
        } else {
            var_5 = temp_3_2;
            ((s32 *)(temp_4_3 + 8))[0] = ((s32 *)(temp_4_3 + 8))[0] + 1;
        }
        temp_16 = b->unk4;
        temp_17_2 = (s32)((s32)(temp_16 - arg1) >> 3);
        sp_buf[1] = ((Chunk *)arg3)->unk4;
        sp_buf[0] = var_5;
        if (sp14 < (u32)temp_17_2) {
            var_17 = temp_16;
            func_001D9F40(temp_16 - sp14 * 8, temp_16, temp_16, 0);
            temp_3_3 = sp14 * 8;
            var_16_2 = temp_16 - temp_3_3;
            b->unk4 = b->unk4 + temp_3_3;
            var_18 = (s32)((s32)(var_16_2 - arg1) >> 3);
            if (var_18 > 0) {
                do {
                    var_17 -= 8;
                    var_16_2 -= 8;
if (var_16_2 != var_17) {
                        temp_3_4 = *(u32 *)var_17;
                        temp_4_4 = temp_3_4 - 0x10;
                        temp_2_6 = ((s32 *)(temp_4_4 + 8))[0] - 1;
                        ((s32 *)(temp_4_4 + 8))[0] = temp_2_6;
                        if (temp_2_6 == 0) {
                            if (((s32 *)(temp_4_4 + 4))[0] + 0x10 == 0) {
                                *(u32 *)temp_3_4 = D_0040E618[-1];
                                D_0040E618[-1] = temp_4_4;
                            } else {
                                func_002B2028(temp_4_4, 0);
                            }
                        }
                        var_3 = *(s32 *)var_16_2;
                        temp_4_5 = var_3 - 0x10;
                        if (((s32 *)(temp_4_5 + 0xC))[0] == 0) {
                            ((s32 *)(temp_4_5 + 8))[0] = ((s32 *)(temp_4_5 + 8))[0] + 1;
                        } else {
                            var_3 = func_00151930((void *)temp_4_5);
                        }
                        *(u32 *)var_17 = var_3;
                    }
                    var_18 -= 1;
                    ((s32 *)var_17)[1] = ((s32 *)var_16_2)[1];
                } while (var_18 > 0);
            }
            func_001D94C0(arg1, arg1 + sp14 * 8, sp_buf);
        } else {
            func_001D9598(temp_16, sp14 - temp_17_2, sp_buf, 0);
            temp_2_7 = b->unk4 + ((sp14 - temp_17_2) * 8);
            b->unk4 = temp_2_7;
            func_001D9F40(arg1, temp_16, temp_2_7, 0);
            b->unk4 = b->unk4 + (temp_17_2 * 8);
            func_001D94C0(arg1, temp_16, sp_buf);
        }
        temp_2_8 = sp_buf[1] - 1;
        sp_buf[1] = temp_2_8;
        if (temp_2_8 == 0) {
            if (sp_buf[0] + 0x10 != 0) {
                func_002B2028((u32)(sp_buf - 1), (u32)sp_buf);
                return;
            }
            sp_buf[0] = D_0040E618[-1];
            D_0040E618[-1] = (u32)(sp_buf - 1);
        }
    }
}
