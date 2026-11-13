extern void func_001D4040(void *, const char *);
extern char D_0044F108[];
extern char D_00474208[];

void *func_00163B70(void *arg0) {
    s32 sp[4];
    float one = 1.0f;
    func_001D4040(sp, D_0044F108);
    ((s32*)arg0)[1] = sp[0];
    ((s32*)arg0)[0] = -1;
    ((void**)arg0)[2] = &D_00474208;
    ((f32*)arg0)[6] = 180.0f;
    ((f32*)arg0)[7] = 20.0f;
    ((f32*)arg0)[9] = 80.0f;
    ((f32*)arg0)[10] = 40.0f;
    ((f32*)arg0)[11] = one;
    ((s32*)arg0)[5] = 0;
    ((s32*)arg0)[3] = 0;
    ((s32*)arg0)[4] = 0;
    ((f32*)arg0)[8] = one;
    return arg0;
}

typedef struct { f32 x, y, z; } Vec3;
extern void func_001683F8(void *);
extern void func_00168448(void *, s32);
extern f32 func_00168520(s32);

void func_00168550(Vec3 *arg0, s32 arg1) {
    Vec3 sp, out, w;
    float t;
    func_001683F8(&sp);
    func_00168448(&w, arg1);
    t = func_00168520(arg1) * 0.5f;
    out.x = w.x * t;
    out.y = w.y * t;
    out.z = w.z * t;
    arg0->x = sp.x + out.x;
    arg0->y = sp.y + out.y;
    arg0->z = sp.z + out.z;
}

extern void *func_00168350(s32);

void *func_00168AC0(void *arg0, s32 arg1) {
    float *r = func_00168350(arg1);
    float *p = (float*)((char*)r + 0x28);
    ((float*)arg0)[0] = r[10];
    ((float*)arg0)[1] = p[1];
    ((float*)arg0)[2] = p[2];
    return arg0;
}

void *func_00168B08(void *arg0, s32 arg1) {
    float *r = func_00168350(arg1);
    float *p = (float*)((char*)r + 0x34);
    ((float*)arg0)[0] = r[13];
    ((float*)arg0)[1] = p[1];
    ((float*)arg0)[2] = p[2];
    return arg0;
}
