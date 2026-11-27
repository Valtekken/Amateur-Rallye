/* func_00150B28: using locals actively */
extern s32 func_001189C0();
extern s32 func_00192398(s32, s32);
extern s32 func_00193B60();
extern s32 func_00205CE0(void **, s32);
extern void func_002060F8(void **);
extern void func_002062A8(void **, void *);
extern void func_00206338(void **, void *);
extern void func_002063A0(void **, void *);
extern s32 func_002AD350(f32);
extern void func_003FA310(void *, void *, s32);
extern char D_0044AB38[];
extern char D_0044C5B0[];
extern void *D_0048DD00;
extern void *D_0048DD10;
extern void *D_0048DD20;

void func_00150B28(void *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp30;
    s32 temp_16;
    s32 local_a0;
    s32 local_a4;
    s32 local_a8;
    s32 local_ak0;
    s32 local_ak1;
    s32 local_ak2;
    s32 local_ak3;
    char *arg0_char = (char *)arg0;
    void **temp_18;
    void *temp_3;
    void *temp_3_2;

    if (arg2 >= 0) {
        if ((arg1 >= 0) && (arg1 < *(s32 *)(arg0_char + 0xB0))) {
            temp_18 = (void **)*((s32 *)(arg0_char + 0x1C) + (arg1 * 4));
            temp_18 = (void **)(*temp_18 + 0x4C);
            func_002060F8(temp_18);
            func_002062A8(temp_18, arg0_char + 0xC);
            sp24 = 0;
            sp20 = 0x420C0000;
            sp28 = 0;
            func_002063A0(temp_18, &sp20);
            if ((arg2 == *(s32 *)(arg0_char + 0x18)) || (fparg0 == 0.0f)) {
                func_00206338(temp_18, &D_0048DD00);
                temp_3 = *temp_18;
            } else {
                if (!(fparg0 > 0.0f)) {
                    func_00206338(temp_18, &D_0048DD20);
                } else {
                    func_00206338(temp_18, &D_0048DD10);
                }
                func_003FA310(&sp30, &D_0044AB38, func_002AD350(fparg0));
                temp_3_2 = *temp_18;
            }
            func_00206338(temp_18, &D_0048DD00);
            sp20 = 0;
            sp24 = -4;
            sp28 = 0;
            func_002063A0(temp_18, &sp20);
            func_002062A8(temp_18, arg0_char + 0x10);
            temp_16 = func_00192398(func_00193B60(), arg2);
            local_ak0 = temp_16 * 0x34;
            local_ak1 = local_ak0 + func_001189C0();
            func_00205CE0(temp_18, local_ak1);
            local_a0 = local_ak1 + 4;
            local_a4 = local_a0 * 2;
            local_a8 = local_a4 - local_a0;
            (void)arg1;
            (void)arg2;
            (void)fparg0;
        }
    }
}
