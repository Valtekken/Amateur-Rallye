extern void *func_002B1FC0(s32, s32, s32 *);
extern void *func_002B2028(void *);
extern void *func_00152D28(s32, u32, void *);
extern u32 func_003D2910(s32);
extern void *func_002DF260(void *, void *);
extern u32 func_002DF380(u32, u32, u32, void *);
extern void func_002DF508(void *, void *);
extern u32 func_002DFDE8(u32, u32, void *);
extern u32 func_002DFE68(u32, u32, void *, u32);
extern u32 D_0040E618[];

typedef struct { void *unk0; void *unk4; s32 unk8; } Vec;

void func_002DFEC8(void *arg0, u32 arg1, u32 arg2, void *arg3) {
    Vec *a;
    s32 sp20;
    u32 sp24;
    u32 var20;
    u32 var21;
    s32 temp5_2;
    u32 temp5;
    s32 temp2;
    s32 temp2_2;
    u32 temp17;
    u32 inner;
    u32 temp22;
    void *var16;
    u32 var2;
    void *temp4;
    s32 temp2_4;
    void *temp4_2;
    s32 temp2_5;
    u32 temp16;
    s32 temp17_2;
    u32 var17;
    u32 temp3;
    void *var16_2;
    s32 var18;
    u32 temp2_6;
    s32 temp2_7;

    a = (Vec *)arg0;
    sp24 = arg2;
    var20 = 0;
    var21 = 0;

    if (arg2 != 0) {
        temp5 = (u32)a->unk4;
        if ((u32)((s32)((u32)a->unk8 - (u32)temp5) >> 5) < arg2) {
            temp2 = (s32)((u32)temp5 - (u32)a->unk0) >> 5;
            temp5_2 = (u32)temp2 < arg2;
            sp20 = temp2;
            temp2_2 = temp2 + ((temp5_2 == 0) ? sp20 : (s32)sp24);
            var21 = (u32)temp2_2 << 5;
            if (temp2_2 != 0) {
                if (var21 != 0) {
                    var20 = (u32)func_002B1FC0(var21, temp5_2, &sp20);
                    if (var20 == 0) {
                        var20 = func_003D2910(var21);
                    }
                } else if (D_0040E618[-1] != 0) {
                    var20 = D_0040E618[-1];
                    D_0040E618[-1] = *(u32 *)D_0040E618[-1];
                } else {
                    var20 = (u32)func_00152D28(0, temp5_2, D_0040E618[-1]);
                }
            } else {
                var20 = 0;
                var21 = 0;
            }
            temp17 = (u32)a->unk4;
            inner = func_002DF380((u32)a->unk0, arg1, var20, 0);
            inner = func_002DFE68(inner, sp24, arg3, 0);
            temp22 = func_002DF380(arg1, temp17, inner, 0);
            var16 = a->unk0;
            if ((u32)var16 < temp17) {
                var2 = ((Vec *)var16)->unk8;
                for (;;) {
                    temp4 = var16;
                    temp2_4 = (s32)((u32)var2 - (u32)temp4) >> 2;
                    if (temp2_4 != 0) {
                        if ((temp2_4 * 4) == 0) {
                            *(u32 *)temp4 = D_0040E618[-1];
                            D_0040E618[-1] = (u32)temp4;
                        } else {
                            var16 = (void *)((u32)var16 + 0x20);
                            func_002B2028(temp4);
                        }
                    } else {
                        var16 = (void *)((u32)var16 + 0x20);
                    }
                    if ((u32)var16 < temp17) {
                        var2 = ((Vec *)var16)->unk8;
                        continue;
                    }
                    break;
                }
            }
            temp4_2 = a->unk0;
            temp2_5 = (s32)((u32)a->unk8 - (u32)temp4_2) >> 5;
            if (temp2_5 != 0) {
                if ((temp2_5 << 5) != 0) {
                    func_002B2028(temp4_2);
                } else {
                    ((Vec *)temp4_2)->unk0 = (void *)D_0040E618[-1];
                    D_0040E618[-1] = (u32)temp4_2;
                }
            }
            a->unk4 = (void *)temp22;
            a->unk8 = (s32)((u32)var20 + var21);
            a->unk0 = (void *)var20;
        } else {
            func_002DF260((void *)&sp20, arg3);
            temp16 = (u32)a->unk4;
            temp17_2 = (s32)((u32)temp16 - (u32)arg1) >> 5;
            if ((u32)sp24 < (u32)temp17_2) {
                var17 = temp16;
                func_002DF380(temp16 - (sp24 << 5), temp16, temp16, 0);
                temp3 = sp24 << 5;
                var16_2 = (void *)((u32)temp16 - temp3);
                a->unk4 = (void *)((u32)a->unk4 + temp3);
                var18 = (s32)((u32)var16_2 - (u32)arg1) >> 5;
                if (var18 > 0) {
                    do {
                        var17 -= 0x20;
                        var16_2 = (void *)((u32)var16_2 - 0x20);
                        func_002DF508((void *)var17, var16_2);
                        var18 -= 1;
                    } while (var18 > 0);
                }
                func_002DFDE8(arg1, arg1 + (sp24 << 5), (void *)&sp20);
            } else {
                func_002DFE68(temp16, sp24 - (u32)temp17_2, (void *)&sp20, 0);
                temp2_6 = (u32)a->unk4 + ((sp24 - (u32)temp17_2) << 5);
                a->unk4 = (void *)temp2_6;
                func_002DF380(arg1, temp16, temp2_6, 0);
                a->unk4 = (void *)((u32)a->unk4 + (temp17_2 << 5));
                func_002DFDE8(arg1, temp16, (void *)&sp20);
            }
            temp2_7 = 0;
            if (temp2_7 != 0) {
                if ((temp2_7 * 4) != 0) {
                    func_002B2028((void *)&sp20);
                } else {
                    *(u32 *)(&sp20) = D_0040E618[-1];
                    D_0040E618[-1] = (u32)(&sp20);
                }
            }
        }
    }
}
