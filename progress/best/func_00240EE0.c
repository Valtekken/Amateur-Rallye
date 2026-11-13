struct S_arg0 {
    u8 _pad0[0xC];
    s32 *unkC;
    s32 unk10;
    u8 _pad14[4];
    s32 *unk18;
    s32 unk1C;
};

extern s32 func_0024C520(s32, s32);

s32 func_00240EE0(struct S_arg0 *arg0) {
    s32 temp_23 = (arg0->unk1C - (s32)arg0->unk18) >> 2;
    s32 var_20 = 0;

    if (temp_23 > 0) {
        do {
            s32 temp_21 = arg0->unk18[var_20];
            s32 temp_18 = ((s32)arg0->unk10 - (s32)arg0->unkC) >> 2;
            s32 var_16 = 0;

            if (temp_18 > 0) {
                s32 var_17 = 0;

                do {
                    if (func_0024C520(arg0->unk18[var_20 + var_17], temp_21) != 0)
                        var_16 = 1;
                    var_17 += 1;
                } while (var_17 < temp_18);
            }

            if (var_16 == 0) return 0;
            var_20 += 1;
        } while (var_20 < temp_23);
    }
    return 1;
}
