typedef struct Block {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ struct Block *unk8;
} Block;

extern Block D_004404E0;
extern s64 D_004408F0;
extern s32 D_004408F8;
extern u64 D_00440900;
extern u64 D_00440908;
extern u32 D_00440910;

extern void func_003F79D0(s32 arg0, void *arg1);
extern u32 func_003F9E78(s32 arg0, s32 arg1);

void func_003F87D8(s32 arg0, u32 arg1) {
    Block *temp_20;
    s32 temp_6;
    u32 temp_19;
    Block *temp_21;
    s32 var_18;
    u32 var_17;
    s32 var_16;

    temp_20 = D_004404E0.unk8;
    temp_6 = temp_20->unk4;
    temp_19 = temp_6 & 0xFFFFFFFC;
    var_18 = (s32)((s64)(u64)arg1 + D_004408F0 + 0x10);
    temp_21 = (Block *)((u8 *)temp_20 + temp_19);

    if (D_004408F8 != -1) {
        var_18 = (s32)(((u32)var_18 + 0xFFF) & 0xFFFFF000);
    }

    var_17 = func_003F9E78(arg0, var_18);
    if (var_17 == 0xFFFFFFFF) {
        return;
    }
    if (var_17 < (u32)temp_21) {
        if (temp_20 != &D_004404E0) {
            return;
        }
    }

    {
        u32 t3 = D_00440910 + var_18;
        D_00440910 = t3;
        if (var_17 == (u32)temp_21) {
            D_004404E0.unk8->unk4 = var_18 + temp_19 + 1;
        } else {
            if (D_004408F8 == -1) {
                D_004408F8 = var_17;
            } else {
                D_00440910 = t3 + (s32)(var_17 - (u32)temp_21);
            }

            {
                s32 tmp = (var_17 + 8) & 0xF;
                if (tmp != 0) {
                    var_16 = 0x10 - tmp;
                    var_17 += var_16;
                } else {
                    var_16 = 0;
                }
            }

            {
                s32 sz = var_16 + (0x1000 - ((var_17 + var_18) & 0xFFF));
                u32 r2 = func_003F9E78(arg0, sz);
                if (r2 == 0xFFFFFFFF) {
                    return;
                }
                D_00440910 += sz;
                ((Block *)var_17)->unk4 = (s32)((r2 - var_17) + sz) | 1;
                D_004404E0.unk8 = (Block *)var_17;
                if (temp_20 != &D_004404E0) {
                    if (temp_19 < 0x10) {
                        ((Block *)var_17)->unk4 = 1;
                        return;
                    } else {
                        u32 t19b = (temp_19 - 0xC) & 0xFFFFFFF0;
                        Block *tp = (Block *)((u8 *)temp_20 + t19b);
                        temp_20->unk4 = (temp_20->unk4 & 1) | t19b;
                        tp->unk8 = (Block *)5;
                        tp->unk4 = 5;
                        if (t19b >= 0x10) {
                            func_003F79D0(arg0, (u8 *)temp_20 + 8);
                        }
                    }
                }
            }
        }
    }

    if (D_00440900 < (u64)D_00440910) {
        D_00440900 = (u64)D_00440910;
    }
    if (D_00440908 < (u32)D_00440910) {
        D_00440908 = (u64)D_00440910;
    }
}
