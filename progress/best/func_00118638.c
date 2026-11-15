typedef struct { f32 x, y, z, w; } Vec4;
typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    Vec4 v;
} Obj;

extern void func_001D2CD8(void *, s32);
extern void D_002AD390(s32);

void func_00118638(Obj *arg0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 *a8, Vec4 a9) {
    Vec4 *v;
    arg0->f0 = a1;
    arg0->f4 = a2;
    arg0->f8 = a3;
    arg0->fC = a4;
    arg0->f10 = a5;
    arg0->f14 = a6;
    arg0->f18 = a7;
    func_001D2CD8(&arg0->f1C, *a8);
    arg0->v.x = a9.x;
    v = &arg0->v;
    v->y = a9.y;
    v->z = a9.z;
    v->w = a9.w;
    D_002AD390(*a8);
}
