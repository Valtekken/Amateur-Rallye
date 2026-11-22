extern s32 func_0023E538(void *);
extern s32 func_0023E668(void *, f32 *);
extern s32 func_0023E6A0(void *, f32 *);
extern s32 func_0023E968(void *);
extern f32 fabsf(f32);

void func_0025E788(void *dummy, void *arg1, f32 fparg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f3;
    f32 var_f2;
    s32 var_2;
    void *temp_2;
    char dummy_pad[16];

    temp_f1 = fabsf(fparg0);
    temp_f0 = fabsf(*(f32 *)((char *)arg1 + 0x1C));
    var_f2 = temp_f1;
    if (temp_f0 < temp_f1) {
        var_f2 = temp_f0;
    }
    var_2 = -1;
    if (fparg0 > 0.0f) {
        var_2 = 1;
    }
    temp_f20 = var_f2 * (f32)var_2;
    func_0023E538(arg1);
    temp_2 = (char *)arg1 + 0xC;
    temp_f0_2 = *(f32 *)((char *)arg1 + 0xC) * temp_f20;
    temp_f3 = *(f32 *)((char *)temp_2 + 8) * temp_f20;
    temp_f1_2 = *(f32 *)((char *)temp_2 + 4) * temp_f20;
    sp0 = temp_f0_2;
    sp8 = temp_f3;
    sp4 = temp_f1_2;
    if (*(s32 *)((char *)*(void **)((char *)arg1 + 0x4C) + 0x1C8) != 0) {
        sp10 = temp_f0_2;
        sp14 = temp_f1_2;
        sp18 = temp_f3;
        func_0023E668(arg1, &sp10);
    }
    if (*(s32 *)((char *)*(void **)((char *)arg1 + 0x50) + 0x1C8) != 0) {
        sp10 = -sp0;
        sp14 = -sp4;
        sp18 = -sp8;
        func_0023E6A0(arg1, &sp10);
    }
    func_0023E968(arg1);
    func_0023E538(arg1);
}
