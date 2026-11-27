#include "context.h"

extern void func_001B1FB0(s32, f32 *, f32 *);
extern f32 func_001D5E70(s32, f32, f32);

typedef struct { f32 x, y, z; } Vec3;

void func_001B3920(void *arg0, void *arg1, void *arg2) {
    u8 *a0 = (u8 *)arg0;
    Vec3 *o = (Vec3 *)arg2;
    Vec3 sp0;
    Vec3 sp10;
    Vec3 sp20;
    f32 sp30, sp34, sp38;
    s32 vD8 = (s32)(a0 + 0xD8);
    Vec3 *b0 = (Vec3 *)(a0 + 0xB0);
    f32 one = 1.0f;
    f32 f22, f21, f0;
    f32 t3, t4, t5;
    f32 f11, f12, f13, f10, f7, f2, f8, f9, f1, f6, f4, f3;
    f32 bx, by, bz;

    sp0.x = *(f32 *)(a0 + 0x0) - ((Vec3 *)arg1)->x;
    sp0.y = *(f32 *)(a0 + 0x4) - ((Vec3 *)arg1)->y;
    sp0.z = *(f32 *)(a0 + 0x8) - ((Vec3 *)arg1)->z;

    func_001B1FB0((s32)(a0 + 0xA4), &sp10.x, &sp20.x);

    sp30 = sp0.x * sp10.x + sp0.y * sp10.y + sp0.z * sp10.z;
    sp34 = sp0.x * sp20.x + sp0.y * sp20.y + sp0.z * sp20.z;
    sp38 = sp0.x * b0->x + sp0.y * b0->y + sp0.z * b0->z;

    f22 = func_001D5E70(vD8, -1.0f, one) * *(f32 *)(a0 + 0x54);
    f21 = func_001D5E70(vD8, -1.0f, one) * *(f32 *)(a0 + 0x58);
    f0  = func_001D5E70(vD8, -1.0f, one) * *(f32 *)(a0 + 0x5C);

    t3 = (sp30 + f22) / (*(f32 *)(a0 + 0x48) + one);
    t4 = (sp34 + f21) / (*(f32 *)(a0 + 0x4C) + one);
    t5 = (sp38 + f0)  / (*(f32 *)(a0 + 0x50) + one);

    f11 = sp10.x * t3; f12 = sp10.y * t3; f13 = sp10.z * t3;
    f10 = sp20.x * t4; f7 = sp20.y * t4; f2 = sp20.z * t4;
    f8 = *(f32 *)(a0 + 0x0) - f11;
    f9 = *(f32 *)(a0 + 0x4) - f12;
    f1 = *(f32 *)(a0 + 0x8) - f13;
    f6 = f8 - f10;
    f4 = f9 - f7;
    f3 = f1 - f2;
    bx = b0->x * t5; by = b0->y * t5; bz = b0->z * t5;

    o->x = f6 - bx;
    o->y = f4 - by;
    o->z = f3 - bz;
}
