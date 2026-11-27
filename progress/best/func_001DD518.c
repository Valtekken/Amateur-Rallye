extern void *D_002AD408(s32);
extern void *func_001DDEE8(void *, s32, s32);
extern void func_001DD7C0(void);
extern s32 func_001DCE08(void *, s32, s32, s32, s32, void *, s32, s32);
extern void func_001DCC78(void *, s32, s32, s32);
extern void func_001DE050(void *, void *, void *);
extern void func_001DE028(void *, void *, void *);
extern void func_001DDFE0(void *, s32);
extern void func_001EA4D8(void *, void *, void *);

void func_001DD518(u8 *arg0, u8 *arg1, u8 *arg2)
{
    u8 *sp0;
    u8 *sp10;
    s32 sp20[4];
    s32 sp30[4];
    s32 sp40, sp44;
    s32 sp50, sp54, sp60, sp64;
    s32 sp70, sp74, sp80, sp84;
    u8 *sp90;
    s32 sp94;
    s32 temp_30;
    s32 temp_17;
    s32 var_16;
    s32 var_19;
    s32 temp_20;
    s32 var_17;
    s32 var_16_2;

    if (arg1 == NULL) {
        return;
    }

    *(u8 **)(arg0 + 0x0) = arg1;
    sp94 = *(s32 *)(arg1 + 0xC);
    temp_30 = *(s32 *)(arg1 + 0x10);
    func_001DD7C0();

    sp10 = *(u8 **)(arg0 + 0x24);
    sp0 = *(u8 **)sp10;
    if (sp0 == sp10) {
        return;
    }

    do {
        u8 *temp_6;
        s32 temp_4_2;
        s32 temp_8;

        var_19 = 0;

        sp90 = (u8 *)func_001DDEE8(D_002AD408(0x28), *(s32 *)(sp0 + 0x10), *(s32 *)(sp0 + 0x14));

        temp_6 = sp0 + 8;
        temp_4_2 = *(s32 *)(sp0 + 0x8);
        temp_17 = *(s32 *)(temp_6 + 0x8);
        var_16 = *(s32 *)(temp_6 + 0xC);

        temp_17 = (sp94 < (temp_4_2 + temp_17)) ? (sp94 - temp_4_2) : temp_17;
        if (temp_30 < (*(s32 *)(temp_6 + 0x4) + var_16)) {
            s32 temp_3_4 = var_16;
            var_16 = temp_30 - *(s32 *)(temp_6 + 0x4);
            var_19 = temp_3_4 - var_16;
        }

        *(s32 *)(sp90 + 0x14) = *(s32 *)(arg1 + 0x14);

        func_001DE050(arg1, sp20, sp30);

        sp40 = sp20[0];
        sp44 = sp30[1];

        temp_8 = *(s32 *)(temp_6 + 0x4);
        sp60 = *(s32 *)(sp0 + 0x8);
        sp64 = temp_8;
        sp50 = sp20[0] + sp60;
        sp54 = sp30[1] + temp_8;
        sp80 = *(s32 *)(sp0 + 0x8) + temp_17;
        sp84 = temp_8 + var_16;
        sp70 = sp20[0] + sp80;
        sp74 = sp30[1] + sp84;

        func_001DE028(sp90, &sp50, &sp70);

        temp_20 = func_001DCE08(arg1, *(s32 *)(sp0 + 0x8), *(s32 *)(sp0 + 0xC),
                                temp_17, var_16, sp90, 0, var_19);

        if (var_19 > 0) {
            var_17 = 0;
            if (var_19 > 0) {
                do {
                    var_16_2 = 0;
                    if (*(s32 *)(sp0 + 0x10) > 0) {
                        do {
                            s32 temp_5 = var_16_2;
                            s32 temp_2_5 = ((var_19 * *(s32 *)(sp90 + 0xC)) + var_16_2) * 4;
                            var_16_2 += 1;
                            func_001DCC78(sp90, temp_5, var_17, *(s32 *)(temp_2_5 + *(s32 *)(sp90 + 0x8)));
                        } while (var_16_2 < *(s32 *)(sp0 + 0x10));
                    }
                    var_17 += 1;
                } while (var_17 < var_19);
            }
        }

        if (temp_20 != 0) {
            u8 *temp_5_2 = *(u8 **)(arg2 + 0x4);
            if (temp_5_2 != *(u8 **)(arg2 + 0x8)) {
                if (temp_5_2 != NULL) {
                    *(u8 **)temp_5_2 = sp90;
                }
                *(u8 **)(arg2 + 0x4) = temp_5_2 + 4;
            } else {
                func_001EA4D8(arg2, temp_5_2, &sp90);
            }
        } else if (sp90 != NULL) {
            func_001DDFE0(sp90, 3);
        }

        sp10 = *(u8 **)(arg0 + 0x24);
        sp0 = *(u8 **)sp0;
    } while (sp0 != sp10);
}
