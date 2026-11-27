extern s32 CreateSema_2(void *);
extern void DeleteSema_2(s32);
extern void SignalSema_2(s32);
extern void WaitSema_2(s32);
extern void func_004055A0(u32, s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, s32, s32, s32, s32);
extern void *func_00406698(void);
extern void func_00406B18(s32);
extern void func_00406B48(void);

extern s32 D_00441128;
extern s32 D_004411A8;
extern s32 D_004411B4;
extern u8 D_0049FF80[];
extern u8 D_004A0BC0[];
extern u8 D_004A1040[];
extern u8 D_004A1240[];

s32 func_00407758(u32 arg1, s32 arg2)
{
    u8 sp[0x40];
    s32 sp14, sp18, sp24;
    s32 temp_20;
    s32 temp_22;
    s32 var_16, var_16_2, var_5, var_6, temp_16_2, temp_16_3;
    s32 *temp_5;
    u8 *temp_4;
    u8 temp_3;
    void *temp_16;
    u32 var_30;
    u8 *r = D_0049FF80;

    temp_16 = func_00406698();
    func_00406B18(3);
    if (D_004411A8 == 0) { func_00406B48(); return -1; }
    if (temp_16 == NULL) { func_00406B48(); return -9; }
    temp_22 = *(s32 *)((u8 *)temp_16 + 0x4);
    if (temp_22 == 0) { func_00406B48(); return -9; }

    *(s32 *)(r + 0xC) = *(s32 *)((u8 *)temp_16 + 0x0);
    sp14 = 1;
    *(s32 *)(r + 0x2C) = (s32)(((u8 *)temp_16 - D_004A1040) >> 4);
    *(s32 *)(r + 0x14) = arg2;
    *(s32 *)(r + 0x10) = (s32)arg1;
    sp18 = 0; sp24 = 0;
    temp_20 = CreateSema_2(sp + 0x10);
    *(s32 *)(r + 0x8) = 4;
    *(s32 *)(r + 0x4) = (s32)(sp + 0x30);
    *(s32 *)(r + 0x0) = temp_20;

    if (temp_22 & 0x8000) {
        WaitSema_2(D_004411B4);
        var_16 = arg1 & 0xF;
        if (D_00441128 == -1) {
            var_30 = 0x4A0000;
            D_00441128 = *(s32 *)r;
            *(s32 *)r = -*(s32 *)r;
        } else {
            var_30 = 0x4A0000;
            var_6 = 1;
        loop_12:
            if (var_6 < 0x20) {
                temp_5 = &D_00441128 + var_6;
                var_6 += 1;
                if (*temp_5 == -1) { *temp_5 = *(s32 *)r; *(s32 *)r = -*(s32 *)r; }
                else goto loop_12;
            }
        }
        SignalSema_2(D_004411B4);
    } else {
        var_16 = arg1 & 0xF;
        var_30 = (u32)D_004A0BC0;
    }

    if (var_16 == 0) var_16_2 = 0;
    else var_16_2 = ((arg1 >> 4) * 0x10) - ((s32)arg1 - 0x10);
    temp_16_2 = (arg2 < var_16_2) ? arg2 : var_16_2;

    if (!(temp_22 & 0x20000000)) func_004055A0(arg1, arg2);

    *(s32 *)(r + 0x18) = temp_16_2;
    var_5 = 0;
    if (temp_16_2 > 0) {
        do {
            temp_4 = r + 0x1C + var_5;
            temp_3 = *(u8 *)((arg1 | 0x20000000) + var_5);
            var_5 += 1;
            *temp_4 = temp_3;
        } while (var_5 < temp_16_2);
    }

    if (func_00405E90(D_004A1240, 3, 0, r, 0x30, (s32)var_30, 4, 0, 0) < 0) {
        DeleteSema_2(temp_20); func_00406B48(); return -0xB;
    }

    temp_16_3 = *(s32 *)(u32)(var_30 | 0x20000000);
    func_00406B48();
    if (temp_16_3 == 0) { DeleteSema_2(temp_20); return -0xB; }
    if (temp_22 & 0x8000) { DeleteSema_2(temp_20); return 0; }
    WaitSema_2(temp_20); DeleteSema_2(temp_20); return *(s32 *)(sp + 0x30);
}
