extern s32 D_00441128[];
extern s32 D_004411A8;
extern s32 D_004411B4;
extern u8 D_0049FF80[];
extern u8 D_004A0BC0[];
extern u8 D_004A1040[];
extern u8 D_004A1240[];

extern s32 CreateSema_2(void *param);
extern s32 DeleteSema_2(s32 sema);
extern s32 WaitSema_2(s32 sema);
extern s32 SignalSema_2(s32 sema);
extern s32 func_00405E90(void *a0, s32 a1, s32 a2, void *a3, s32 a4, void *a5, s32 a6, s32 a7, s32 a8);
extern void *func_00406698(void);
extern void func_00406B18(s32 arg0);
extern void func_00406B48(void);

s32 func_004072B0(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp10[8];
    s32 sp30;
    u8 *g = D_0049FF80;
    void *temp_16;
    s32 temp_18;
    s32 temp_19;
    s32 i;
    u8 *var_16;

    (void)arg0;
    temp_16 = func_00406698();
    func_00406B18(4);

    if (D_004411A8 == 0) {
        func_00406B48();
        return -1;
    }
    if (temp_16 == NULL) {
        func_00406B48();
        return -9;
    }
    temp_19 = *(s32 *)((u8 *)temp_16 + 4);
    if (temp_19 == 0) {
        func_00406B48();
        return -9;
    }

    *(s32 *)(g + 0x10) = arg1;
    *(s32 *)(g + 0xC) = *(s32 *)((u8 *)temp_16 + 0);
    *(s32 *)(g + 0x14) = arg2;
    *(s32 *)(g + 0x18) = ((u8 *)temp_16 - D_004A1040) >> 4;

    sp10[1] = 1;
    sp10[2] = 0;
    sp10[5] = 0;
    temp_18 = CreateSema_2(sp10);

    *(s32 *)(g + 0x8) = 4;
    *(s32 *)(g + 0x4) = (s32)&sp30;
    *(s32 *)(g + 0x0) = temp_18;

    if (temp_19 & 0x8000) {
        WaitSema_2(D_004411B4);
        if (D_00441128[0] == -1) {
            var_16 = (u8 *)0x4A0000;
            D_00441128[0] = *(s32 *)(g + 0x0);
            *(s32 *)(g + 0x0) = -*(s32 *)(g + 0x0);
        } else {
            var_16 = D_004A0BC0;
            i = 1;
            while (i < 0x20) {
                if (D_00441128[i] == -1) {
                    D_00441128[i] = *(s32 *)(g + 0x0);
                    *(s32 *)(g + 0x0) = -*(s32 *)(g + 0x0);
                    break;
                }
                i++;
            }
        }
        SignalSema_2(D_004411B4);
    } else {
        var_16 = D_004A0BC0;
    }

    if (func_00405E90(D_004A1240, 4, 0, g, 0x1C, var_16, 4, 0, 0) < 0) {
        DeleteSema_2(temp_18);
        func_00406B48();
        return -11;
    }

    {
        s32 res = *(s32 *)((u32)var_16 | 0x20000000);
        func_00406B48();
        if (res == 0) {
            DeleteSema_2(temp_18);
            return -11;
        }
        if (temp_19 & 0x8000) {
            DeleteSema_2(temp_18);
            return 0;
        }
        WaitSema_2(temp_18);
        DeleteSema_2(temp_18);
        return sp30;
    }
}
