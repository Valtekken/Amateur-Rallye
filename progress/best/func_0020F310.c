typedef struct S_func_0020F310_arg0_4 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1C */ s32 unk_1C;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2C */ s32 unk_2C;
    /* 0x30 */ s32 unk_30;
} S_func_0020F310_arg0_4;

typedef struct S_func_0020F310_arg0 {
    /* 0x00 */ u8 unk_00[0x4];
    /* 0x04 */ S_func_0020F310_arg0_4 *unk_04;
    /* 0x08 */ s32 unk_08;
} S_func_0020F310_arg0;

typedef struct S_func_0020F310_arg1 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1C */ s32 unk_1C;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2C */ s32 unk_2C;
    /* 0x30 */ s32 unk_30;
} S_func_0020F310_arg1;

extern void *func_00152D28(s32 a0, void *a1, void *a2);
extern void *func_00210F50(void *a0, void *a1, void *a2, s32 a3);
extern void *func_002B1FC0(s32 a0, void *a1);
extern void func_002B2028(void *a0);
extern void *func_003D2910(s32 a0);

extern s32 D_0040E618[16];

void func_0020F310(S_func_0020F310_arg0 *arg0, S_func_0020F310_arg1 *arg1, S_func_0020F310_arg1 *arg2) {
    S_func_0020F310_arg0_4 *p_unk4 = arg0->unk_04;
    s32 unk8 = arg0->unk_08;

    if (p_unk4 != arg2->unk_04) {
        if (p_unk4 != NULL) {
            S_func_0020F310_arg0_4 *p_old = p_unk4;
            S_func_0020F310_arg0_4 *p_target = (S_func_0020F310_arg0_4 *)((char*)p_unk4 - 0x34);
            S_func_0020F310_arg0_4 *p_new_1 = (S_func_0020F310_arg0_4 *)((char*)p_unk4 - 0x24);
            S_func_0020F310_arg0_4 *p_new_2 = (S_func_0020F310_arg0_4 *)((char*)p_unk4 + 0x10);

            p_unk4->unk_00 = p_target->unk_00; // This looks weird in assembly, let's re-examine
            // Actually, the assembly says:
            // lw $2, -0x34($11)
            // sw $2, 0x0($11)
            // lw $3, -0x24($11)
            // sw $3, 0x10($11)
            // ...
        }
    }
}
