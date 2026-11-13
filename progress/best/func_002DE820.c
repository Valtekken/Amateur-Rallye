struct S_buf {
    u32 unk0;
    u32 unk4;
    u32 unk8;
};

struct S_arg3 {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    u32 unk28;
    u32 unk2C;
};

extern u32 func_002DE728(u32, u32, u32, u32);
extern void func_002DE780(u32, u32, void *);
extern u32 func_002DE7D0(u32, u32, void *, u32);
extern u32 func_002B1FC0(s32, u32, s32 *, u32);
extern void func_002B2028(u32);
extern u32 func_00152D28(u32, u32, u32, u32);
extern u32 func_003D2910(s32);
extern u32 D_0040E618[];

u32 func_002DE820(struct S_buf *arg0, u32 arg1, u32 arg2, struct S_arg3 *arg3) {
    u32 sp30;
    u32 sp34;
    u32 temp_17;
    u32 temp_2;
    u32 temp_5;
    u32 temp_19;
    u32 temp_3;
    u32 temp_4;
    u32 temp_16;
    u32 var_16;
    u32 var_3;
    u32 var_5;
    u32 var_6;
    u32 var_4;
    u32 saved0, saved1, saved2, saved3, saved4, saved5;
    u32 t8_lo, t8_hi;

    sp34 = arg2;
    if (arg2 == 0) {
        return 0;
    }
    temp_17 = arg0->unk4;
    temp_2 = (u32)((s32)((arg0->unk8 - temp_17) * 0xAAAAAAABu) >> 4);
    if (temp_2 >= arg2) {
        temp_3 = arg0->unk0;
        temp_19 = (u32)((s32)((temp_17 - arg1) * 0xAAAAAAABu) >> 4);
        saved0 = arg3->unk0; saved1 = arg3->unk4;
        saved2 = arg3->unk8; saved3 = arg3->unkC;
        saved4 = arg3->unk10; saved5 = arg3->unk14;
        t8_lo = arg3->unk18; t8_hi = arg3->unk1C;
        if (temp_19 != 0) {
            temp_16 = temp_19 * 0x30;
            if (temp_16 != 0) {
                temp_5 = (u32)((u32)arg2 < temp_19);
                if (temp_5 != 0) {
                    temp_4 = func_002DE728(temp_17, arg1, 0, 0);
                    temp_4 = temp_17 - temp_4;
                    temp_4 = temp_4 + (arg2 * 0x30);
                    temp_2 = (temp_17 - (arg2 * 0x30)) - arg1;
                    arg0->unk4 = temp_4;
                    temp_4 = (u32)((s32)(temp_2 * 0xAAAAAAABu) >> 4);
                    if (temp_4 > 0) {
                        var_5 = temp_17 - (arg2 * 0x30);
                        var_6 = temp_17;
                        var_4 = temp_4;
                        do {
                            var_5 -= 0x30;
                            var_6 -= 0x30;
                            var_4 -= 1;
                        } while (var_4 > 0);
                    }
                    func_002DE780(arg1, arg2 * 0x30 + arg1, &saved0);
                    return 0;
                }
            }
        }
        sp30 = arg2 - temp_19;
        temp_4 = func_002DE7D0(temp_17, arg2 - temp_19, &saved0, 0);
        temp_3 = arg0->unk4 + ((arg2 - temp_19) * 0x30);
        arg0->unk4 = temp_3;
        func_002DE728(arg1, temp_17, temp_3, 0);
        arg0->unk4 = arg0->unk4 + (temp_19 * 0x30);
        func_002DE780(arg1, temp_17, &saved0);
        return 0;
    }

    temp_2 = (u32)((s32)((temp_17 - temp_2) * 0xAAAAAAABu) >> 4);
    sp30 = temp_2;
    temp_5 = (u32)(temp_2 < arg2);
    temp_4 = temp_5 ? &sp30 : &sp34;
    temp_3 = *(u32 *)temp_4;
    temp_17 = temp_2 + temp_3;
    if (temp_17 == 0) {
        var_16 = 0;
    } else {
        temp_16 = temp_17 * 0x30;
        if (temp_16 != 0) {
            if (temp_16 == 0) {
                var_16 = func_002B1FC0(temp_16, temp_5, &sp30, arg2);
                if (var_16 != 0) {
                } else {
                    var_16 = func_003D2910(temp_16);
                }
            } else {
                if (D_0040E618[-1] != 0) {
                    var_16 = D_0040E618[-1];
                    D_0040E618[-1] = *(u32 *)var_16;
                } else {
                    var_16 = func_00152D28(0, temp_5, D_0040E618[-1], arg2);
                }
            }
        } else {
            var_16 = 0;
        }
    }
    temp_4 = func_002DE728(arg0->unk0, arg1, var_16, 0);
    temp_19 = func_002DE7D0(arg0->unk4, arg1, temp_4, 0);
    temp_4 = func_002DE728(arg0->unk4, arg1, temp_19, 0);
    temp_3 = arg0->unk0;
    if (temp_3 < temp_4) {
        var_3 = temp_3 + 0x30;
        do {
            var_3 += 0x30;
        } while (var_3 < temp_4);
    }
    temp_4 = arg0->unk0;
    temp_3 = (u32)((s32)((arg0->unk8 - temp_4) * 0xAAAAAAABu) >> 4);
    if (temp_3 != 0) {
        if ((temp_3 * 0x30) != 0) {
            func_002B2028(temp_4);
        } else {
            *(u32 *)temp_4 = D_0040E618[-1];
            D_0040E618[-1] = temp_4;
        }
    }
    arg0->unk4 = temp_4;
    arg0->unk0 = var_16;
    arg0->unk8 = (u32)((temp_17 * 0x30) + var_16);
    return 0;
}
