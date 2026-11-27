extern s32 func_00243260(s32, s32, s32, void *, void *, void *);
extern void func_00244478(s32, void *);
extern void func_00244DB8(s32, void *);
extern void func_002C6528(void *, u32, s32, void *);
extern void **func_002DDA20(void);
extern s32 func_002E3630(s32, void *);
extern s32 func_002E3650(s32, void *);
extern void *func_00303038(void *, void *);

void func_002E3AF0(s32 arg0, u8 *arg1, u8 *arg2)
{
    u8 *temp_18;
    u8 *temp_2;
    u8 *temp_4;
    s32 temp_6;
    u8 *temp_16;
    u8 *var_3;
    f32 sp10[7];
    s32 temp_2_4;
    s32 temp_2_5;

    if (arg2 == NULL) {
        return;
    }
    if (*(s32 *)(*(u8 **)(arg2 + 0x50) + 0xC) == 0) {
        return;
    }

    temp_18 = *func_002DDA20();
    var_3 = NULL;
    temp_2 = *(u8 **)(arg2 + 0x50);
    temp_6 = *(s32 *)(temp_2 + 0xC);

    if (temp_6 != 0) {
        temp_4 = temp_18 + 0x14;
        /* reserve inlined */
        temp_16 = *(u8 **)(temp_18 + 0x14) + temp_6 * 8;
        if (*(s32 *)(temp_16 + 0x4) != *(s32 *)(temp_18 + 0x20)) {
            *(u8 **)temp_16 = (u8 *)func_00303038(temp_18, temp_2 + 0xC);
            *(s32 *)(temp_16 + 0x4) = *(s32 *)(temp_18 + 0x20);
        }
        var_3 = *(u8 **)temp_16;
    }

    if (var_3 != NULL) {
        s32 temp_4_2 = *(s32 *)(var_3 + 0x30);
        if (temp_4_2 != 0) {
            if (func_00243260(temp_4_2, 0, 1, arg1, arg1 + 0xC, sp10) != 0) {
                *(s32 *)(arg1 + 0x34) = 1;
                *(f32 *)(arg1 + 0x18) = sp10[0];
                *(f32 *)(arg1 + 0x1C) = sp10[1];
                *(f32 *)(arg1 + 0x20) = sp10[2];
                *(f32 *)(arg1 + 0x24) = sp10[3];
                *(f32 *)(arg1 + 0x28) = sp10[4];
                *(f32 *)(arg1 + 0x2C) = sp10[5];
                *(s32 *)(arg1 + 0x30) = (s32)sp10[6];
            } else {
                *(s32 *)(arg1 + 0x34) = 0;
                *(f32 *)(arg1 + 0x18) = 0.0f;
                *(f32 *)(arg1 + 0x1C) = 0.0f;
                *(f32 *)(arg1 + 0x20) = 0.0f;
                *(f32 *)(arg1 + 0x24) = 0.0f;
                *(f32 *)(arg1 + 0x28) = 0.0f;
                *(f32 *)(arg1 + 0x2C) = 0.0f;
                *(s32 *)(arg1 + 0x30) = -1;
            }
        } else if (*(s32 *)(var_3 + 0x34) != 0) {
            temp_2_4 = func_002E3630(arg0, arg2);
            if (temp_2_4 != 0) {
                func_00244478(temp_2_4, arg1);
            }
        } else if (*(s32 *)(var_3 + 0x38) != 0) {
            temp_2_5 = func_002E3650(arg0, arg2);
            if (temp_2_5 != 0) {
                func_00244DB8(temp_2_5, arg1);
            }
        }
    }
}
