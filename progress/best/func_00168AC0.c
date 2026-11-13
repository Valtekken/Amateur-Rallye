extern void func_001D4040(void *, const char *);
extern char D_0044F108[];
extern char D_00474208[];

void *func_00163B70(void *arg0) {
    s32 sp[4];
    func_001D4040(sp, D_0044F108);
    ((s32*)arg0)[1] = sp[0];
    ((s32*)arg0)[0] = -1;
    ((void**)arg0)[2] = &D_00474208;
    ((f32*)arg0)[6] = 180.0f;
    ((f32*)arg0)[7] = 20.0f;
    ((f32*)arg0)[9] = 80.0f;
    ((f32*)arg0)[10] = 40.0f;
    ((f32*)arg0)[11] = 1.0f;
    ((s32*)arg0)[5] = 0;
    ((s32*)arg0)[3] = 0;
    ((s32*)arg0)[4] = 0;
    ((f32*)arg0)[8] = 1.0f;
    return arg0;
}

extern void func_001683F8(void *);
extern void func_00168448(void *, s32);
extern f32 func_00168520(s32);

void func_00168550(void *arg0, s32 arg1) {
    f32 sp[3];
    f32 w[3];
    f32 t, a, b, c;
    func_001683F8(sp);
    func_00168448(w, arg1);
    t = func_00168520(arg1) * 0.5f;
    a = w[0] * t;
    b = w[1] * t;
    c = w[2] * t;
    ((f32*)arg0)[0] = sp[0] + a;
    ((f32*)arg0)[1] = sp[1] + b;
    ((f32*)arg0)[2] = sp[2] + c;
}

extern void *func_00168350(s32);

void *func_00168AC0(void *arg0, s32 arg1) {
    float *r = (float*)func_00168350(arg1);
    ((float*)arg0)[0] = r[10];
    ((float*)arg0)[1] = r[11];
    ((float*)arg0)[2] = r[12];
    return arg0;
}

void *func_00168B08(void *arg0, s32 arg1) {
    float *r = (float*)func_00168350(arg1);
    ((float*)arg0)[0] = r[13];
    ((float*)arg0)[1] = r[14];
    ((float*)arg0)[2] = r[15];
    return arg0;
}
