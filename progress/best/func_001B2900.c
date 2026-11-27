typedef struct { f32 x; f32 y; f32 z; } V3;

typedef struct {
    char _0[0x10];
    f32 f10;
    f32 f14;
    f32 f18;
    char _1C[0x50];
    f32 f6C;
    f32 f70;
    f32 f74;
    f32 f78;
    char _7C[0x28];
    char a4[0x0C];
    f32 fB0;
    f32 fB4;
    f32 fB8;
} V;

extern void func_001B1FB0(void *, f32 *, f32 *, f32, f32, f32);
extern f32 func_001D5E70(void *, f32, f32);
extern f32 func_003F3E80(f32);

V3 *func_001B2900(V3 *arg0, V *arg1) {
    f32 sp10, sp14, sp18;
    f32 sp20[3];
    f32 sp30[3];
    f32 sp40, sp44;
    f32 sp50, sp54;
    f32 sp60, sp64;
    f32 sp70, sp74, sp78;
    f32 sp80, sp84, sp88;
    f32 sp90, sp94, sp98;
    f32 spA0, spA4, spA8;

    char *p = (char *)arg1;
    void *t2 = (void *)(p + 0xB0);
    void *t17 = (void *)(p + 0x10);
    void *t18 = (void *)(p + 0xD8);

    /* temp_f4, temp_f3, temp_f5 */
    f32 tf4 = arg1->fB0;
    f32 tf3 = *(f32 *)((char *)t2 + 4);
    f32 tf5 = *(f32 *)((char *)t2 + 8);

    sp10 = arg1->f10 - tf4;
    sp14 = *(f32 *)((char *)t17 + 4) - tf3;
    sp18 = *(f32 *)((char *)t17 + 8) - tf5;

    func_001B1FB0((void *)(p + 0xA4), sp20, sp30, tf4, tf3, tf5);

    f32 temp_f2 = (sp10 * sp30[0]) + (sp14 * sp30[1]) + (sp18 * sp30[2]);
    sp40 = (sp10 * sp20[0]) + (sp14 * sp20[1]) + (sp18 * sp20[2]);
    sp44 = temp_f2;

    f32 temp_f20 = func_001D5E70(t18, -1.0f, 1.0f) * arg1->f74;
    f32 temp_f0 = func_001D5E70(t18, -1.0f, 1.0f) * arg1->f78;
    f32 temp_f2_2 = temp_f2 + temp_f0;
    f32 temp_f1 = (sp40 + temp_f20) / (arg1->f6C + 1.0f);
    sp50 = temp_f20;
    f32 temp_f2_3 = temp_f2_2 / (arg1->f70 + 1.0f);
    sp54 = temp_f0;
    f32 temp_f5_2 = sp20[0] * temp_f1;
    sp60 = temp_f1;
    f32 temp_f9 = sp20[2] * temp_f1;
    f32 temp_f8 = sp20[1] * temp_f1;
    sp64 = temp_f2_3;
    sp90 = temp_f5_2;
    f32 temp_f6 = sp30[0] * temp_f2_3;
    sp98 = temp_f9;
    f32 temp_f3_2 = sp30[1] * temp_f2_3;
    sp94 = temp_f8;
    f32 temp_f7 = sp30[2] * temp_f2_3;
    f32 temp_f0_2 = arg1->f10 - temp_f5_2;
    f32 temp_f1_2 = *(f32 *)((char *)t17 + 4) - temp_f8;
    spA4 = temp_f3_2;
    f32 temp_f2_4 = *(f32 *)((char *)t17 + 8) - temp_f9;
    sp80 = temp_f0_2;
    f32 temp_f5_3 = temp_f0_2 - temp_f6;
    spA0 = temp_f6;
    f32 temp_f3_3 = temp_f1_2 - temp_f3_2;
    sp84 = temp_f1_2;
    f32 var_f0 = temp_f2_4 - temp_f7;
    sp88 = temp_f2_4;
    spA8 = temp_f7;
    sp70 = temp_f5_3;
    sp74 = temp_f3_3;
    f32 temp_f12 = (temp_f5_3 * temp_f5_3) + (temp_f3_3 * temp_f3_3) + (var_f0 * var_f0);
    sp78 = var_f0;
    if (temp_f12 <= 1.1920929e-7f) {
        sp70 = 0.0f;
        sp74 = 0.0f;
        sp78 = 0.0f;
    } else {
        f32 sqrtlen = __builtin_sqrtf(temp_f12);
        if (sqrtlen != sqrtlen) {
            sqrtlen = func_003F3E80(temp_f12);
        }
        f32 temp_f1_3 = 1.0f / sqrtlen;
        sp70 = sp70 * temp_f1_3;
        sp78 = sp78 * temp_f1_3;
        sp74 = sp74 * temp_f1_3;
    }
    arg0->x = sp70;
    arg0->y = sp74;
    arg0->z = sp78;
    return arg0;
}
