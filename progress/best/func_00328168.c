typedef struct { f32 v[4]; } F16;
extern s32 func_00152108(void *, void *, s32, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_00328168(s32 arg0, F16 *arg1, F16 *arg2, F16 *arg3, F16 *arg4, F16 *arg5,
                   f32 p0, f32 p1, f32 p2, f32 p3, f32 p4, f32 p5, f32 p6) {
    F16 sp10, sp20, sp30;
    f32 sp40, sp44, sp48, sp4C, sp54, sp68, sp70, sp74, sp78, sp84, sp88, sp8C;
    f32 sp94, spA8, spB0, spB4, spB8, spBC, spC0, spC4, spC8;
    s32 sp50, sp58, sp5C, sp6C, sp7C, sp90, sp98, sp9C, spA0, spA4, spAC;
    f32 sp0, sp60, sp64, sp80;
    f32 tf29 = p6 * p5, tf30 = p6 - p5, tf21 = -p5;
    f32 tf16 = arg3->v[2], tf17 = arg3->v[3];
    f32 tf20 = (tf21 * (0.5f / p1) * arg3->v[0]) / p0;
    f32 tf21_2 = (tf21 * (0.5f / p2) * arg3->v[1]) / p0;
    sp44 = 0.0f; sp48 = 0.0f; sp4C = 0.0f; sp50 = 0; sp40 = p0; sp54 = p0;
    sp10.v[0] = 0; sp58 = 0; sp5C = 0; sp6C = 0x3F800000;
    sp84 = 0.0f; sp88 = 0.0f; sp8C = 0.0f;
    sp68 = 0.0f; sp70 = 0.0f; sp74 = 0.0f; sp7C = 0;
    sp10.v[1] = p0; sp10.v[2] = sp58; sp10.v[3] = sp5C;
    sp20.v[0] = sp60; sp20.v[1] = sp64; sp20.v[2] = sp68; sp20.v[3] = sp6C;
    sp30.v[0] = sp70; sp30.v[1] = sp74; sp30.v[2] = 1.0f; sp30.v[3] = sp7C;
    spA8 = (tf29 * (p4 - p3)) / tf30;
    spB8 = ((p3 * p6) - (p5 * p4)) / tf30;
    sp80 = p1; sp90 = 0; sp94 = p2; sp98 = 0; sp9C = 0; spA0 = 0; spA4 = 0; spAC = 0;
    spB0 = tf16; spB4 = tf17; spBC = 1.0f;
    sp40 = p1; sp44 = sp84; sp48 = sp88; sp4C = sp8C; sp50 = sp90; sp54 = p2;
    sp58 = sp98; sp5C = sp9C; sp60 = spA0; sp64 = spA4; sp68 = spA8;
    spC0 = tf16; spC4 = tf17; spC8 = 0.5f;
    sp6C = spAC; sp70 = tf16; sp74 = tf17; sp78 = spB8; sp7C = 0x3F800000;
    func_00152108(&sp0, &sp40, arg0, &sp20, tf16, tf17, spB8, 1.0f, tf16, tf17, 0.5f, p0, sp44, sp48, sp4C);
    sp84 = 0.0f; sp88 = 0.0f; sp8C = 0.0f; sp80 = sp84;
    {
        f32 tf9 = 2.0f * p5, tf26 = p0 * p1, tf0 = 2.0f * (tf20 * arg5->v[0]);
        f32 tf3 = 2.0f * (tf20 * arg5->v[2]), tf7 = tf3 - tf0;
        f32 tf1 = 2.0f * (tf21_2 * arg5->v[1]), tf5 = 2.0f * (tf21_2 * arg5->v[3]);
        f32 tf6 = tf5 - tf1, tf25 = p0 * p2;
        arg1->v[4] = sp84; arg1->v[0] = 1.0f; arg1->v[1] = sp84; arg1->v[2] = sp84; arg1->v[3] = sp84;
        arg1->v[5] = sp84; arg1->v[6] = sp88; arg1->v[7] = sp8C;
        arg1->v[8] = sp84; arg1->v[9] = sp84; arg1->v[10] = sp88; arg1->v[11] = sp8C;
        arg1->v[12] = sp84; arg1->v[13] = sp84; arg1->v[14] = sp88; arg1->v[15] = sp8C;
        arg1->v[0] = tf9 / tf7; arg1->v[5] = tf9 / tf6;
        arg1->v[8] = (tf3 + tf0) / tf7; arg1->v[9] = (tf5 + tf1) / tf6;
        arg1->v[10] = (p6 + p5) / tf30; arg1->v[11] = (tf29 * -2.0f) / tf30;
        arg2->v[0] = 1.0f; arg2->v[1] = sp84; arg2->v[2] = sp84; arg2->v[3] = sp84;
        arg2->v[4] = sp84; arg2->v[5] = sp84; arg2->v[6] = sp88; arg2->v[7] = sp8C;
        arg2->v[8] = sp84; arg2->v[9] = sp84; arg2->v[10] = sp88; arg2->v[11] = sp8C;
        arg2->v[12] = sp84; arg2->v[13] = sp84; arg2->v[14] = sp88; arg2->v[15] = sp8C;
        {
            f32 t20_2 = tf20 * ((2.0f * arg4->v[0]) - 1.0f);
            f32 t1_2 = (tf20 * ((2.0f * arg4->v[2]) - 1.0f)) - t20_2;
            f32 t21_3 = tf21_2 * ((2.0f * arg4->v[1]) - 1.0f);
            f32 t0_2 = (tf21_2 * ((2.0f * arg4->v[3]) - 1.0f)) - t21_3;
            arg2->v[0] = tf26 * (t1_2 / tf9);
            arg2->v[5] = tf25 * (t0_2 / tf9);
            arg2->v[10] = (p3 - p4) * spC8;
            arg2->v[12] = spC0 - (tf26 * (t20_2 + (t1_2 * spC8)));
            arg2->v[13] = spC4 - (tf25 * (t21_3 + (t0_2 * spC8)));
            arg2->v[14] = (p4 + p3) * spC8;
            arg2->v[15] = 1.0f;
        }
    }
}
