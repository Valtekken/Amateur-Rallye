s32 func_001EEED8(void **, u32 *, void *);
void *func_0020F310(void *, void *, void *, void *);
void func_002B2028(u32, u32, s32);
void func_003F9698(char *, s32);
extern u32 D_0040E618[];
extern char D_004772E8[];
extern char D_00477330[];

struct S_func_001EE4B0_arg1_10 {
    u8 unk_00[0x18];
    s16 unk_18;
    u8 unk_1A[0x2];
    s32 unk_1C;
};

struct S_func_001EE4B0_arg1 {
    void *unk_00;
    u8 unk_04[0xC];
    struct S_func_001EE4B0_arg1_10 *unk_10;
    s32 unk_14;
};

struct S_func_001EE3D8_arg0 {
    void *unk_00;
};

void func_001EE4B0(struct S_func_001EE3D8_arg0 **arg0, struct S_func_001EE4B0_arg1 *arg1) {
    u32 sp0;
    u32 sp4;
    s32 sp8;
    u32 sp10;
    u32 sp14;
    s32 sp18;
    struct S_func_001EE3D8_arg0 **sp30;
    struct S_func_001EE4B0_arg1 *sp34;
    s32 sp38;
    s32 sp3C;
    s32 temp_16_2;
    s32 temp_16;
    s32 temp_20;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 var_17;
    u32 *temp_4_3;
    u32 var_17_2;
    u32 var_3;
    u32 var_3_2;
    void *temp_11;
    void *temp_18;
    void *temp_2;
    struct S_func_001EE4B0_arg1_10 *temp_3;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_5_2;
    void *temp_6;
    void *temp_6_2;
    void *temp_7;
    void *temp_7_2;
    void *temp_8;
    void *temp_9;
    char *var_16;

    sp34 = arg1;
    sp30 = arg0;
    temp_3 = sp34->unk_10;
    temp_2 = ((void *(*)(void *, s16))temp_3->unk_1C)((char *)sp34 + temp_3->unk_18, temp_3->unk_18);
    if (temp_2 != NULL) {
        temp_2_2 = *(u32 *)((char *)temp_2 + 0x20);
        sp3C = temp_2_2;
        sp38 = *(u32 *)((char *)temp_2 + 0x1C);
        if (temp_2_2 & 1) {
            func_003F9698(D_004772E8, sp34->unk_14);
        } else {
            temp_18 = *(void **)((char *)*sp30 + 0x34);
            var_17 = 0;
            if (sp3C > 0) {
                do {
                    sp0 = 0;
                    temp_16 = sp38 + var_17;
                    sp4 = 0;
                    sp8 = 0;
                    func_0020F310(&sp0, NULL, (char *)temp_18 + temp_16 * 0x34, NULL);
                    temp_11 = (char *)temp_18 + (temp_16 * 0x34 + 0x34);
                    if (sp4 != sp8) {
                        temp_4 = (char *)temp_11 + 0x10;
                        if (sp4 != 0) {
                            temp_5 = (char *)sp4 + 0x10;
                            temp_7 = (char *)temp_11 + 0x1C;
                            *(u32 *)sp4 = *(u32 *)temp_11;
                            temp_6 = (char *)sp4 + 0x1C;
                            temp_8 = (char *)temp_11 + 0x28;
                            temp_9 = (char *)sp4 + 0x28;
                            *(u32 *)((char *)sp4 + 0x4) = *(u32 *)((char *)temp_11 + 0x4);
                            *(u32 *)((char *)sp4 + 0x8) = *(u32 *)((char *)temp_11 + 0x8);
                            *(u32 *)((char *)sp4 + 0xC) = *(u32 *)((char *)temp_11 + 0xC);
                            *(u32 *)((char *)sp4 + 0x10) = *(u32 *)((char *)temp_11 + 0x10);
                            *(u32 *)((char *)temp_5 + 0x4) = *(u32 *)((char *)temp_4 + 0x4);
                            *(u32 *)((char *)temp_5 + 0x8) = *(u32 *)((char *)temp_4 + 0x8);
                            *(u32 *)((char *)sp4 + 0x1C) = *(u32 *)((char *)temp_11 + 0x1C);
                            *(u32 *)((char *)temp_6 + 0x4) = *(u32 *)((char *)temp_7 + 0x4);
                            *(u32 *)((char *)temp_6 + 0x8) = *(u32 *)((char *)temp_7 + 0x8);
                            *(u32 *)((char *)sp4 + 0x28) = *(u32 *)((char *)temp_11 + 0x28);
                            *(u32 *)((char *)temp_9 + 0x4) = *(u32 *)((char *)temp_8 + 0x4);
                            *(u32 *)((char *)temp_9 + 0x8) = *(u32 *)((char *)temp_8 + 0x8);
                        }
                        sp4 = (u32)sp4 + 0x34;
                    } else {
                        func_0020F310(&sp0, (void *)sp4, temp_11, NULL);
                    }
                    sp10 = 0;
                    sp14 = 0;
                    sp18 = 0;
                    if (func_001EEED8((void **)sp30, &sp10, &sp0)) {
                        var_17_2 = sp10;
                        temp_20 = (s32)((((u32 *)temp_18)[1] - ((u32 *)temp_18)[0]) * 0xC4EC4EC5 >> 2);
                        if (var_17_2 != sp14) {
                            var_16 = (char *)((u32)var_17_2 + 0x28);
                            do {
                                temp_7_2 = ((u32 *)temp_18)[1];
                                if (temp_7_2 != ((u32 *)temp_18)[2]) {
                                    temp_4_2 = (char *)temp_7_2 + 0x10;
                                    if (temp_7_2 != 0) {
                                        temp_5_2 = (char *)temp_7_2 + 0x1C;
                                        temp_6_2 = (char *)temp_7_2 + 0x28;
                                        *(u32 *)temp_7_2 = *(u32 *)(var_16 - 0x28);
                                        *(u32 *)((char *)temp_7_2 + 0x4) = *(u32 *)(var_16 - 0x24);
                                        *(u32 *)((char *)temp_7_2 + 0x8) = *(u32 *)(var_16 - 0x20);
                                        *(u32 *)((char *)temp_7_2 + 0xC) = *(u32 *)(var_16 - 0x1C);
                                        *(u32 *)((char *)temp_7_2 + 0x10) = *(u32 *)(var_16 - 0x18);
                                        *(u32 *)((char *)temp_4_2 + 0x4) = *(u32 *)(var_16 - 0x14);
                                        *(u32 *)((char *)temp_4_2 + 0x8) = *(u32 *)(var_16 - 0x10);
                                        *(u32 *)((char *)temp_7_2 + 0x1C) = *(u32 *)(var_16 - 0xC);
                                        *(u32 *)((char *)temp_5_2 + 0x4) = *(u32 *)(var_16 - 0x8);
                                        *(u32 *)((char *)temp_5_2 + 0x8) = *(u32 *)(var_16 - 0x4);
                                        *(u32 *)((char *)temp_7_2 + 0x28) = *(u32 *)var_16;
                                        *(u32 *)((char *)temp_6_2 + 0x4) = *(u32 *)(var_16 + 0x4);
                                        *(u32 *)((char *)temp_6_2 + 0x8) = *(u32 *)(var_16 + 0x8);
                                    }
                                    ((u32 *)temp_18)[1] = (u32)temp_18 + 0x34;
                                } else {
                                    func_0020F310(temp_18, (void *)temp_7_2, (void *)var_17_2, temp_7_2);
                                }
                                var_17_2 += 0x34;
                                var_16 += 0x34;
                            } while (var_17_2 != sp14);
                        }
                        *(u32 *)((char *)temp_2 + 0x1C) = temp_20;
                        *(u32 *)((char *)temp_2 + 0x20) = (s32)(((s32)(sp14 - sp10) * 0xC4EC4EC5) >> 2);
                    } else {
                        func_003F9698(D_00477330, sp34->unk_14);
                    }
                    if (sp10 < sp14) {
                        var_3 = sp10 + 0x34;
loop_23:
                        if (var_3 < sp14) {
                            var_3 += 0x34;
                            goto loop_23;
                        }
                    }
                    temp_2_3 = (s32)(((s32)(sp18 - sp10) * 0xC4EC4EC5) >> 2);
                    if (temp_2_3 != 0) {
                        if ((temp_2_3 * 0x34) == 0) {
                            *(u32 *)sp10 = D_0040E618[-1];
                            D_0040E618[-1] = (u32)sp10;
                        } else {
                            func_002B2028(sp10, sp14, sp18);
                        }
                    }
                    var_3_2 = sp0;
                    if (var_3_2 < (u32)sp4) {
                        do {
                            var_3_2 += 0x34;
                        } while (var_3_2 < (u32)sp4);
                    }
                    temp_4_3 = (u32 *)sp0;
                    temp_2_4 = (s32)(((char *)((u32 *)sp0)[2] - (char *)(u32 *)sp0) * 0xC4EC4EC5 >> 2);
                    if (temp_2_4 != 0) {
                        if ((temp_2_4 * 0x34) == 0) {
                            *(u32 *)temp_4_3 = D_0040E618[-1];
                            D_0040E618[-1] = (u32)temp_4_3;
                        } else {
                            func_002B2028((u32)temp_4_3, (u32)sp0, sp18);
                        }
                    }
                    var_17 += 2;
                } while (var_17 < sp3C);
            }
        }
    }
    temp_16_2 = (s32)sp34->unk_00;
    if (temp_16_2 != 0) {
        do {
            func_001EE4B0(sp30, (struct S_func_001EE4B0_arg1 *)temp_16_2);
            temp_16_2 = *(u32 *)((char *)temp_16_2 + 0x4);
        } while (temp_16_2 != 0);
    }
}
