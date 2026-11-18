extern void func_0029EA38(s32);
extern void func_0029EB50(s32, void *, f32);
extern void func_0029EC30(s32, s32);

typedef struct S_func_0014C5D8_arg0 {
    /* 0x00 */ u8 unk_00[0x2C];
    /* 0x2C */ s32 unk_2C;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ f32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3C */ s32 unk_3C;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ f32 unk_44;
    /* 0x48 */ f32 unk_48;
    /* 0x4C */ f32 unk_4C;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ f32 unk_54;
    /* 0x58 */ f32 unk_58;
    /* 0x5C */ f32 unk_5C;
    /* 0x60 */ f32 unk_60;
    /* 0x64 */ f32 unk_64;
    /* 0x68 */ f32 unk_68;
} S_func_0014C5D8_arg0;

typedef struct S_func_0014C5D8_arg1 {
    /* 0x00 */ u8 unk_00[0x4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08[0x44];
    /* 0x4C */ f32 unk_4C;
} S_func_0014C5D8_arg1;

void func_0014CAB8(S_func_0014C5D8_arg0 *arg0, S_func_0014C5D8_arg1 *arg1) {
    s32 val_arg1_4 = arg1->unk_04;
    if (val_arg1_4 != 0) {
        if (arg0->unk_50 != 0 && arg0->unk_3C == 0) {
            arg0->unk_34 *= 1.08f;
        }
        s32 unk50 = arg0->unk_50;
        if (unk50 == 0) {
            if (arg0->unk_3C != 0) {
                arg0->unk_30 = 0.0f;
                arg0->unk_50 = 1;
                arg0->unk_34 = 0.033333334f;
                func_0029EB50(val_arg1_4, (void *)arg0, arg0->unk_30);
                if (arg0->unk_38 == 0) {
                    arg0->unk_38 = 1;
                    func_0029EA38(val_arg1_4);
                    func_0029EC30(val_arg1_4, 0xCA);
                }
            } else if (arg0->unk_38 != 0) {
                arg0->unk_30 = 0.0f;
                arg0->unk_38 = 0;
                arg0->unk_40 = 0;
                func_0029EB50(val_arg1_4, (void *)arg0, arg0->unk_30);
                func_0029EA38(val_arg1_4);
            }
        } else if (unk50 == 1) {
            if (arg0->unk_30 < 1.0f) {
                // I need to see the assembly for the rest of Case 1 and Case 2.
                // Case 1: .L0014CC18...
                // Case 2: .L0014CC68...
            } else {
                // Case 1: ...
            }
        }
    }
}
