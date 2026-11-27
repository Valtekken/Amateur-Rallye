typedef struct { f32 f0,f4,f8,fC,f10,f14; } A0;

extern void func_00168448(void *);
extern f32 func_003F3E80(f32);

f32 func_0016ADA0(A0 *arg0, void *arg1) {
    f32 sp0, sp4, sp8;
    f32 sp10, sp14, sp18;
    f32 var_f21 = 0.0f;

    func_00168448((void *)&sp0); // sp is stack base? Actually $sp; passing &sp0 approximates
    // But func may use full stack frame; passing &sp0 may be okay if layout matches

    /* temp_f11 = arg1->unkA4 */
    f32 *t16 = (f32 *)((char *)arg1 + 0xA4);
    f32 tf11 = t16[0];
    f32 tf10 = t16[1];
    f32 tf9 = t16[2];

    f32 tf0 = arg0->f0;
    f32 tf3 = arg0->f4;
    f32 tf2 = arg0->f8;

    sp10 = tf11;
    sp14 = tf10;
    sp18 = tf9;

    f32 temp_f1 = (tf0*tf0)+(tf3*tf3)+(tf2*tf2);
    arg0->f0 = tf11;
    f32 temp_f5 = (tf11*tf11)+(tf10*tf10)+(tf9*tf9);
    arg0->f4 = tf10;
    f32 temp_f2_2 = tf2*tf9;
    arg0->f8 = tf9;
    f32 temp_f20 = (temp_f5 - temp_f1) / 1.34f;
    f32 temp_f22 = fabsf((tf0*tf11)+(tf3*tf10)+temp_f2_2);
    f32 temp_f0_2 = tf0*tf11;

    if (temp_f20 > 0.05f) {
        f32 tf0sq = sp0*sp0;
        f32 temp_f12 = (sp0*sp0)+(sp4*sp4)+(sp8*sp8);
        if (!(temp_f12 <= 1.1920929e-7f)) {
            f32 sq = func_003F3E80(temp_f12);
            f32 temp_f1_2 = 1.0f / sq;
            sp0 *= temp_f1_2;
            sp8 *= temp_f1_2;
            sp4 *= temp_f1_2;
        } else {
            sp0 = 0.0f;
            sp4 = 0.0f;
            sp8 = 0.0f;
        }
        arg0->f14 = temp_f20; // offset 0x14? Actually arg0 has f14 at 0x14 yes
        f32 temp_f1_3 = (sp0*sp10)+(sp4*sp14)+(sp8*sp18);
        f32 temp_f20_2 = fabsf(temp_f20);
        if (temp_f1_3 < -0.6f) {
            var_f21 = 0.0f - (temp_f20_2 * temp_f22 * fabsf((temp_f1_3 + 0.6f) / 0.4f));
        } else {
            var_f21 = 0.0f + (temp_f20_2 * temp_f22);
        }
    } else if (temp_f20 < -0.05f) {
        f32 temp_f0_3 = fabsf(temp_f20);
        arg0->f14 = temp_f20;
        var_f21 = (temp_f0_3 * temp_f22) + 0.0f;
    } else if (temp_f5 > 0.0001f) {
        f32 temp_f0_4 = (sp0*tf11)+(sp4*tf10)+(sp8*tf9);
        if (!(temp_f0_4 < -0.6f)) {
            f32 temp_f0_5 = arg0->f14 * 1.3f;
            f32 temp_f1_4 = fabsf(temp_f0_5);
            arg0->f14 = temp_f0_5;
            var_f21 = (temp_f1_4 * temp_f22) + 0.0f;
        } else {
            f32 temp_f1_5 = arg0->f14 * 0.9f;
            f32 temp_f0_6 = fabsf(temp_f1_5);
            arg0->f14 = temp_f1_5;
            var_f21 = 0.0f - (temp_f0_6 * temp_f22 * fabsf((temp_f0_4 + 0.6f) / 0.39999998f));
        }
    }
    return var_f21;
}
