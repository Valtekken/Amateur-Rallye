extern void D_002AD390(void *);
extern void *func_00152D28(s32);
extern void func_001D2488(void *, void *);
extern void func_001D2CD8(void *, void *);
extern void *func_001EAE10(void *, void *, void *, s32);
extern void *func_002B1FC0(s32);
extern void func_002B2028(void *);
extern void *func_003D2910(s32);
extern u32 D_0040E618[];

void func_001EAE78(void *arg0, void *arg1, void *arg2) {
    void *unk4;
    void *unk8;
    void *sp0;
    void *sp4;
    void *temp_17;
    s32 var_16;
    void *var_18;
    void *var_17;
    s32 temp_2;
    s32 temp_4;
    s32 var_20;
    void *var_19;
    void *temp_2_3;
    void *temp_17_2;
    void *temp_21;
    void *var_16_2;
    void *temp_4_3;
    s32 temp_2_4;

    unk4 = *(void **)((char *)arg0 + 4);
    unk8 = *(void **)((char *)arg0 + 8);
    if (unk4 != unk8) {
        if (unk4 != 0) {
            *(s32 *)((char *)unk4 + 0) = *(s32 *)((char *)unk4 - 8);
            func_001D2488((char *)unk4 + 4, (char *)unk4 - 4);
        }
        *(void **)((char *)arg0 + 4) = (char *)unk4 + 8;
        sp0 = *(void **)arg2;
        func_001D2488(&sp4, (char *)arg2 + 4);
        temp_17 = *(void **)((char *)arg0 + 4) - 0x10;
        var_16 = (s32)((char *)temp_17 - (char *)arg1) >> 3;
        var_18 = *(void **)((char *)arg0 + 4) - 8;
        if (var_16 > 0) {
            var_17 = (char *)temp_17 - 8;
            do {
                var_18 = (char *)var_18 - 8;
                var_16 = var_16 - 1;
                *(void **)var_18 = *(void **)var_17;
                func_001D2CD8((char *)var_18 + 4, (char *)var_17 + 4);
                var_17 = (char *)var_17 - 8;
            } while (var_16 > 0);
        }
        *(void **)arg1 = sp0;
        func_001D2CD8((char *)arg1 + 4, sp4);
        D_002AD390(sp4);
        return;
    }

    temp_2 = (s32)((char *)unk4 - (char *)*(void **)((char *)arg0 + 0)) >> 3;
    temp_4 = (temp_2 != 0) ? (temp_2 * 2) : 1;
    var_20 = temp_4 * 8;
    if (temp_4 != 0) {
        if (var_20 != 0) {
            var_19 = func_002B1FC0(var_20);
            if (var_19 == 0) {
                var_19 = func_003D2910(var_20);
            }
        } else if (D_0040E618[-1] != 0) {
            var_19 = (void *)D_0040E618[-1];
            D_0040E618[-1] = *(u32 *)D_0040E618[-1];
        } else {
            var_19 = func_00152D28(0);
        }
    } else {
        var_19 = 0;
        var_20 = 0;
    }

    temp_2_3 = func_001EAE10(*(void **)((char *)arg0 + 0), arg1, var_19, 0);
    if (temp_2_3 != 0) {
        *(void **)temp_2_3 = *(void **)arg2;
        func_001D2488((char *)temp_2_3 + 4, (char *)arg2 + 4);
    }
    temp_17_2 = *(void **)((char *)arg0 + 4);
    temp_21 = func_001EAE10(arg1, temp_17_2, (char *)temp_2_3 + 8, 0);
    var_16_2 = *(void **)((char *)arg0 + 0);
    if ((u32)var_16_2 < (u32)temp_17_2) {
        do {
            D_002AD390(*(void **)((char *)var_16_2 + 4));
            var_16_2 = (char *)var_16_2 + 8;
        } while ((u32)var_16_2 < (u32)temp_17_2);
    }
    temp_4_3 = *(void **)((char *)arg0 + 0);
    temp_2_4 = (s32)((char *)*(void **)((char *)arg0 + 8) - (char *)temp_4_3) >> 3;
    if (temp_2_4 != 0) {
        if ((temp_2_4 * 8) != 0) {
            func_002B2028(temp_4_3);
        } else {
            *(void **)temp_4_3 = (void *)D_0040E618[-1];
            D_0040E618[-1] = (u32)temp_4_3;
        }
    }
    *(void **)((char *)arg0 + 4) = temp_21;
    *(void **)((char *)arg0 + 8) = (char *)var_19 + var_20;
    *(void **)((char *)arg0 + 0) = var_19;
}
