extern s32 func_00168380(void *);
extern void *func_00168378(void *);
extern f32 func_0016D078(s32);
extern f32 func_003F3978(f32, f32);
extern f32 fabsf(f32);

typedef struct {
    f32 f[0x29];  // 0x0 to 0xA0
} ArgStruct;

f32 func_00168BA0(void *arg0, f32 fparg0) {
    ArgStruct *p = (ArgStruct *)arg0;
    f32 f24 = fparg0;
    f32 f22, f20, f21, f23, f3, f0, f1, f2, f12, f13;
    s32 r;

    r = func_00168380(arg0);
    if (r != -1) {
        f22 = p->f[0x9C/4];
    } else {
        f22 = ((ArgStruct *)func_00168378(arg0))->f[0x10/4];
    }
    r = func_00168380(arg0);
    if (r != -1) {
        f20 = ((ArgStruct *)func_00168378(arg0))->f[0x8/4];
    } else {
        f20 = 2.4f;
    }
    f0 = fabsf(f24);
    f3 = p->f[0xA0/4];
    f23 = ((ArgStruct *)func_00168378(arg0))->f[0x1C/4];
    f21 = f20 + p->f[0x48/4];
    f20 = f22 + p->f[0x4C/4];
    if (f3 < f0) {
        f0 = f3;
    }
    f12 = (f3 - f0) / f3;
    f13 = p->f[0x58/4];
    f12 = func_003F3978(f12, f13);
    f20 = f21 + (f20 - f21) * f12;
    f0 = func_0016D078(*(s32 *)&p->f[0x38/4]);
    f20 = f20 + f0;
    f20 = f20 + f23;
    return f20;
}
