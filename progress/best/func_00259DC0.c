typedef struct { f32 x, y, z, w; } V;
extern s32 func_0023E8C0(void *, f32 *, void *, void *, void *, f32, f32);
extern f32 D_00479C98;
extern f32 D_00479C9C;
#define F(p,o) (*(f32*)((char*)(p)+(o)))
#define P(p,o) (*(void**)((char*)(p)+(o)))

void *func_00259DC0(void *arg0, void *arg2, f32 fparg0) {
    volatile V v0, v1, v2, v3, v4;
    void *t3 = (char *)arg2 + 0xC;
    void *t8 = P(arg2,0x50);
    f32 f13 = F(arg2,0xC);
    void *t6 = (char *)t8 + 0x11C;
    f32 f10 = F(t3,8);
    f32 f12 = -fparg0 * F(t8,0x24);
    f32 f7 = F(t3,4);
    f32 f5 = f10 * f12;
    f32 f3 = f13 * f12;
    f32 f12b = f7 * f12;
    v1.z = f5; v1.x = f3; v1.y = f12b;
    f32 f8 = F(t8,0x11C) + f3;
    f32 f9 = F(t6,4) + f12b;
    f32 f5b = F(t6,8) + f5;
    v0.x = f8; v0.y = f9; v0.z = f5b;
    f32 f1 = (f8 * f13) + (f9 * f7) + (f5b * f10);
    if (f1 < (D_00479C98 * D_00479C9C)) {
        f32 f0 = f10 * f1;
        f32 f6 = F(arg2,0x20);
        f32 f2 = f13 * f1;
        f32 f3b = f7 * f1;
        v1.z = f0; v1.x = f2; v1.y = f3b;
        v0.z = f5b - f0; v0.x = f8 - f2; v0.y = f9 - f3b;
        f32 f0b = F(t8,0x20);
        f32 f1b = f10 * f0b;
        f32 f2b = f13 * f0b;
        f32 f0c = f7 * f0b;
        f32 f3c = f1b * D_00479C9C;
        f32 f4 = f2b * D_00479C9C;
        f32 f1c = f0c * D_00479C9C;
        f32 f2c = f3c * f7;
        f32 f0d = f4 * f7;
        f32 f3d = f1c * f7;
        v4.z = f1b; v4.x = f2b; v4.y = f0c;
        v3.z = f3c; v3.x = f4; v3.y = f1c;
        v2.z = f2c; v2.x = f0d; v2.y = f3d;
        v1.z = f2c * f6; v1.x = f0d * f6; v1.y = f3d * f6;
        func_0023E8C0(arg2, (f32*)&v1, t6, arg2, t8, f12b, f13);
    }
    F(arg0,0) = v0.x; F(arg0,4) = v0.y; F(arg0,8) = v0.z;
    return arg0;
}
