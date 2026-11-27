extern void func_002DA188(void *, s32, s32 *, f32 *, f32 *);
extern void func_002DA338(s32, s32);
extern void func_002DA418(void *, u32);

void func_002DA5A8(void *arg0, u32 arg1, u32 arg2) {
    char pad[128];
    s32 sp0;
    f32 sp4;
    f32 sp10;
    f32 sp1C;
    s32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    u32 sp40;
    s32 sp44;
    f32 *var_8;
    f32 *var_9;
    f32 temp_f2;
    f32 temp_f4;
    s32 var_2;
    u32 var_19;
    void *temp_23;
    void *temp_30;
    void *var_16;

    sp40 = arg2;
    var_19 = arg1;
    func_002DA338(0, 0);
    if (arg1 < sp40) {
        var_9 = &sp4;
        sp44 = arg1 - (u32)arg0;
        var_8 = &sp10;
        temp_30 = (f32 *)((u32)arg0 + 4);
        temp_23 = (void *)((u32)arg0 + 0x10);
        var_16 = (void *)((u32)arg1 + 0x10);
        do {
            temp_f4 = ((f32 *)var_16)[7];
            var_2 = 1;
            if (!((f32 *)&temp_f4 < (f32 *)arg0 + 7) ) {
                var_2 = 0;
            }
            if (var_2 != 0) {
                sp0 = ((s32 *)var_16)[-1];
                sp4 = ((f32 *)var_16)[7];
                temp_f2 = ((s32 *)var_16)[-2];
                var_9[0] = (f32)((s32 *)var_16)[-2];
                var_9[1] = (f32)((s32 *)var_16)[-1];
                sp10 = temp_f2;
                var_8[0] = (f32)((s32 *)var_16)[-1];
                var_8[1] = (f32)((s32 *)var_16)[0];
                sp1C = temp_f4;
                ((s32 *)var_16)[-1] = ((s32 *)arg0)[0];
                ((f32 *)var_16)[7] = (f32)((f32 *)arg0)[1];
                ((s32 *)var_16)[-2] = (s32)((f32 *)arg0 + 1);
                ((s32 *)var_16)[-1] = (s32)((f32 *)arg0 + 2);
                ((s32 *)var_16)[0] = (s32)((f32 *)arg0 + 2);
                ((s32 *)var_16)[1] = (s32)((f32 *)arg0 + 3);
                ((s32 *)var_16)[2] = (s32)((f32 *)arg0 + 4);
                sp20 = sp0;
                ((f32 *)var_16)[7] = (f32)((f32 *)arg0)[7];
                sp24 = sp4;
                // sp28 = sp8; sp2C = spC - MMI, skip
                sp30 = temp_f2;
                // sp30.unk4 = sp14; sp30.unk8 = sp18 - MMI, skip
                var_19 += 0x20;
                var_16 = (void *)((u32)var_16 + 0x20);
            }
        } while (var_19 < sp40);
    }
    func_002DA418(arg0, arg1);
}
