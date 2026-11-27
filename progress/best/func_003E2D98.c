extern void func_003E1708(void *, void *);
extern void D_003E3D08(s32, s32);
extern void func_003E3CA8(s32, s32, s32);
extern char D_00489C58[];

void func_003E2D98(void *arg0, s32 arg1) {
    s32 sp0 = arg1;
    s32 sp4, sp8;
    s32 var_21 = 0;
    s32 var_30;
    char *a = (char *)arg0;

    s32 temp_5 = arg1 * 0x140;
    char *temp_2 = a + 0x6BC;
    if (*(s32 *)(a + temp_5 + 0x6C8) != 0) {
        sp4 = (s32)temp_2;
        var_21 = 0;
        if (*(s32 *)(temp_2 + temp_5) > 0) {
            sp8 = (s32)(a + 0x6C0);
            var_30 = (s32)(a + 0x6B8);
            while (1) {
                s32 temp_16 = var_21 * 4;
                s32 temp_17 = sp0 * 0x140;
                s32 temp_19 = var_21 * 0x1C;
                var_21 += 1;
                s32 temp_16_2 = temp_16 + temp_17;
                s32 temp_18 = (s32)(a + (temp_17 + 0x590));
                void (*fp1)(void*) = *(void (**)(void*))(a + 0x5B8 + temp_16_2);
                fp1((void *)(temp_18 + (temp_19 + 0x48)));
                void (*fp2)(void*) = *(void (**)(void*))(a + 0x5C8 + temp_16_2);
                fp2((void *)(temp_18 + (temp_19 + 0xB8)));
                if (!(var_21 < *(s32 *)(sp4 + temp_17))) break;
            }
        } else {
            var_30 = (s32)(a + 0x6B8);
            sp8 = (s32)(a + 0x6C0);
        }
    } else {
        var_30 = (s32)(a + 0x6B8);
        sp8 = (s32)(a + 0x6C0);
    }
    s32 temp_4 = sp0 * 0x140;
    if (*(s32 *)(sp8 + temp_4) != 0 && *(s32 *)(a + temp_4 + 0x6CC) != 0) {
        func_003E1708(arg0, D_00489C58);
    }
    s32 temp_5_2 = sp0 * 0x140;
    if (*(s32 *)(sp8 + temp_5_2) != 0) {
        D_003E3D08(*(s32 *)(var_30 + temp_5_2), *(s32 *)(a + temp_5_2 + 0x594));
        return;
    }
    s32 *temp_2_2 = (s32 *)(var_30 + temp_5_2);
    if (*(s32 *)(a + temp_5_2 + 0x6CC) != 0) {
        D_003E3D08(*temp_2_2, *(s32 *)(a + 0x81C));
        return;
    }
    func_003E3CA8(*temp_2_2, *(s32 *)(a + 0x81C), *(s32 *)(a + temp_5_2 + 0x594));
}
