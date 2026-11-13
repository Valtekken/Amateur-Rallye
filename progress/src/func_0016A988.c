extern void *func_00168350(s32);

void *func_00168B08(void *arg0, s32 arg1) {
    float *r = func_00168350(arg1);
    float *p = r + 13;
    ((float*)arg0)[0] = r[13];
    ((float*)arg0)[1] = p[1];
    ((float*)arg0)[2] = p[2];
    return arg0;
}

extern void D_002AD390(char *);
extern void func_001D29D0(char *, const char *, s32, s32);
extern void func_001D4040(void *, const char *);
extern char D_0044F7E0[];
extern char D_0044F7F8[];

void func_00168CA0(s32 arg0, s32 arg1, s32 arg2) {
    char *k0 = 0, *k1 = 0;
    D_002AD390(0);
    D_002AD390(k1);
    k0 = 0; k1 = 0;
    func_001D29D0(k0, D_0044F7E0, arg2 + 1, 3);
    func_001D29D0(k0, D_0044F7F8, arg2 + 1, 3);
    func_001D4040((void *)(arg0 + 0x50), k0);
    func_001D4040((void *)(arg0 + 0x54), k1);
    D_002AD390(k1);
    D_002AD390(k0);
}

extern void *func_00168378(void *);
extern void func_0015ACE0(f32, f32, f32);
extern float fabsf(float);

float func_0016A4D8(s32 arg0, register void *arg1, register float a3, register float a4) {
    register float f23, f20, f22, f21, f0;
    void *p;
    f23 = a3;
    f20 = a4;
    p = func_00168378(arg1);
    f21 = *(float *)((char *)p + 0x5C);
    p = func_00168378(arg1);
    f22 = *(float *)((char *)p + 0x60);
    p = func_00168378(arg1);
    f0 = *(float *)((char *)p + 0x64);
    if (f21 < fabsf(f20) && f22 < f23) {
        func_0015ACE0(f23 * f0, 0.0f, 1.0f);
        return f23 * f0;
    }
    return 0.0f;
}

extern void func_00168448(void *, s32);
extern f32 func_00167DB8(s32, void *, s32);
extern f32 func_00168BA0(s32, f32);

float func_0016A988(s32 a0, s32 a1, s32 a2) {
    f32 sp[4];
    func_00168448(sp, a1);
    return func_00168BA0(a1, func_00167DB8(a1, sp, a2));
}
