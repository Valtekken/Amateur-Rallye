extern void func_003CB2D0(void *, void *, void *);
extern void func_003CB5C8(void *);

void func_003CBAB0(void *arg0, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19, float f20a) {
    float t0, t21, t20, t19n;
    float s12, s13, s14, s15, s16;
    float m[16];

    t0 = -f17 + f18;
    t21 = f20a * f19;
    t20 = (-f18 * f19) + (f17 * f20a);
    t21 = t21 * t0;
    t19n = -f19 + f20a;
    s12 = f12; s13 = f13; s14 = f14; s15 = f15; s16 = f16;
    t21 = t21 / t19n;
    t20 = t20 / t19n;

    func_003CB5C8(arg0);
    *(float *)arg0 = s12;
    *(float *)((char *)arg0 + 0x14) = s12;
    *(int *)((char *)arg0 + 0x28) = 0;
    *(int *)((char *)arg0 + 0x3C) = 0;
    *(float *)((char *)arg0 + 0x2C) = 1.0f;
    *(float *)((char *)arg0 + 0x38) = 1.0f;

    func_003CB5C8(m);
    m[0] = s13;
    m[5] = s14;
    m[10] = t21;
    m[12] = s15;
    m[13] = s16;
    m[14] = t20;
    func_003CB2D0(arg0, m, arg0);
}
