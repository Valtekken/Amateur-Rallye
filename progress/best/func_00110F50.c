extern char D_00446648[];
extern char D_00446660[];
extern char D_00446670[];
extern void *D_002AD390(void *);
extern void func_001112F0(void *);
extern void *func_001D2488(void **, s32);
extern void func_001D4040(void *, const char *);
extern s32 func_001E3598(s32, void *);
extern void *func_001E37E8(s32, s32);
extern s32 func_001E38C8(s32, void *);
extern s32 func_001E3D10(s32, void *, s32);
extern s32 func_001E3EC0(s32, void *, u32);
extern void func_001E3FB0(s32, s32, void *);
extern s32 func_001E4280(void);
extern s32 func_002623F0(s32, void *);
extern s32 func_00262838(void);

typedef struct {
    s32 unk0;
    s32 unk4;
} Temp2;

typedef struct {
    s32 pad0;
    s32 pad4;
    s32 pad8;
    s32 padC;
    s32 unk10;
    void *unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 pad24;
    s32 unk28;
    s32 unk2C;
} This;

void func_00110F50(This *arg0)
{
    s32 stackbuf;
    Temp2 *temp_2;
    void *temp_16;
    s32 temp_2_2;
    s32 temp_18;
    s32 temp_16_4;
    s32 temp_16_5;
    s32 temp_16_6;
    void *sp10;
    void *temp_16_3;

    temp_2 = func_001E37E8(func_001E4280(), arg0->unk18);
    if (temp_2 != NULL) {
        temp_16 = &arg0->unk28;
        if ((func_001E38C8(func_001E4280(), temp_16) != 0)
            && (func_001E3598(func_001E4280(), temp_16) != 0)) {
            s32 temp_16_2 = func_00262838();
            func_001D4040(&stackbuf, D_00446648);
            func_002623F0(temp_16_2, &stackbuf);
        } else {
            temp_16_3 = &arg0->unk1C;
            temp_2_2 = func_001E3650(func_001E4280(), temp_16_3);
            temp_18 = temp_2_2 - 1;
            if (temp_2_2 > 0) {
                if ((u32)temp_18 < (u32)((s32)(temp_2->unk4 - temp_2->unk0) >> 2)) {
                    func_001E3EC0(func_001E4280(), temp_16_3, (u32)temp_18);
                    temp_16_4 = func_00262838();
                    func_001D4040(&stackbuf, D_00446660);
                    func_002623F0(temp_16_4, &stackbuf);
                    temp_16_5 = func_001E4280();
                    (void)func_001D2488((void **)((char *)&stackbuf + 0x10), temp_18 << 2);
                    sp10 = *(void **)((char *)&stackbuf + 0x10);
                    func_001D4040(sp10, (const char *)(u32)(temp_2->unk0 + temp_18 * 4));
                    D_002AD390((void *)(u32)temp_16_4);
                    func_001112F0(sp10);
                    if (arg0->unk2C != 0) {
                        temp_16_6 = func_001E4280();
                        func_001D4040(&stackbuf, D_00446670);
                        func_001E3D10(temp_16_6, &stackbuf, 1);
                    }
                }
            } else {
                s32 temp_16_7 = func_00262838();
                func_001D4040(&stackbuf, D_00446648);
                func_002623F0(temp_16_7, &stackbuf);
            }
        }
    }
    temp_16_4 = func_001E4280();
    func_001D4040(&stackbuf, D_00446670);
    func_001E3D10(temp_16_4, &stackbuf, 0);
}
