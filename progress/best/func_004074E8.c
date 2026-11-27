extern s32 CreateSema_2(void *);
extern void DeleteSema_2(s32);
extern void SignalSema_2(s32);
extern void WaitSema_2(s32);
extern void func_004055A0(void *, s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, s32, s32, s32, s32);
extern void *func_00406698(void);
extern void func_00406B18(s32);
extern void func_00406B48(void);

extern s32 D_00441128;
extern s32 D_004411A8;
extern s32 D_004411B4;
extern u8 D_0049FF80[];
extern u8 D_004A0BC0[];
extern u8 D_004A0C00[];
extern u8 D_004A1040[];
extern u8 D_004A1240[];

s32 func_004074E8(void *arg1, s32 arg2)
{
    u8 sp[0x40];
    s32 sp14;
    s32 sp18;
    s32 sp24;
    s32 temp_18;
    s32 temp_19;
    s32 temp_16_2;
    s32 var_6;
    void *temp_16;
    u8 *r = D_0049FF80;
    u8 *a1 = (u8 *)arg1;

    temp_16 = func_00406698();
    func_00406B18(2);
    if (D_004411A8 == 0) { func_00406B48(); return -1; }
    if (temp_16 == NULL) { func_00406B48(); return -9; }
    temp_19 = *(s32 *)((u8 *)temp_16 + 0x4);
    if (temp_19 == 0) { func_00406B48(); return -9; }

    *(s32 *)(r + 0xC) = *(s32 *)((u8 *)temp_16 + 0x0);
    sp14 = 1;
    *(s32 *)(r + 0x1C) = (s32)(((u8 *)temp_16 - D_004A1040) >> 4);
    *(s32 *)(r + 0x10) = (s32)(u8 *)arg1;
    *(s32 *)(r + 0x14) = arg2;
    sp18 = 0;
    sp24 = 0;
    temp_18 = CreateSema_2(sp + 0x10);
    *(s32 *)(r + 0x8) = 4;
    *(s32 *)(r + 0x4) = (s32)(sp + 0x30);
    *(s32 *)(r + 0x0) = temp_18;

    if (temp_19 & 0x8000) {
        WaitSema_2(D_004411B4);
        if (D_00441128 == -1) {
            D_00441128 = *(s32 *)r;
            *(s32 *)r = -*(s32 *)r;
        } else {
            var_6 = 1;
        loop_11:
            if (var_6 < 0x20) {
                s32 *temp_5 = &D_00441128 + var_6;
                var_6 += 1;
                if (*temp_5 == -1) { *temp_5 = *(s32 *)r; *(s32 *)r = -*(s32 *)r; }
                else goto loop_11;
            }
        }
        SignalSema_2(D_004411B4);
    }

    if (!(temp_19 & 0x20000000)) func_004055A0(a1, arg2);
    func_004055A0(D_004A0C00, 0xA4);
    func_004055A0(r, 0x20);

    if (func_00405E90(D_004A1240, 2, 0, r, 0x20, (s32)D_004A0BC0, 4, 0, 0) < 0) {
        DeleteSema_2(temp_18); func_00406B48(); return -0xB;
    }

    temp_16_2 = *(s32 *)(u32)(0x20000000 | (u32)D_004A0BC0);
    func_00406B48();
    if (temp_16_2 == 0) { DeleteSema_2(temp_18); return -0xB; }
    if (temp_19 & 0x8000) { DeleteSema_2(temp_18); return 0; }
    WaitSema_2(temp_18); DeleteSema_2(temp_18); return *(s32 *)(sp + 0x30);
}
