#include "context.h"

typedef struct { f32 x, y, z; } Vec3;

extern u8 D_0040E698[8];
extern void *func_001E3820(s32, void *, s32);
extern void func_001A9498(f32 *, void *, s32, f32);
extern void func_001A9E08(f32 *, void *, void *);
extern void func_001A9FD0(f32 *, void *, void *);
extern void func_001AA2E0(f32 *, void *, void *, void *);
extern void func_001AA308(void *, void *);
extern void func_001AA438(void *, f32);
extern void func_001AA3B8(void *);

void func_001A80E8(void *arg0, void *arg1) {
    u8 *a0 = (u8 *)arg0;
    u8 *a1 = (u8 *)arg1;
    void *t;
    void *q;
    void *p;
    Vec3 *va8;
    Vec3 *pv;
    Vec3 a, b;
    f32 dx, dz, distSq;
    Vec3 *vE0, *vEC, *vF8;
    Vec3 tmp;
    s32 n;

    t = func_001E3820(func_001E4280(), a0 + 0x5C, (s32)&D_0040E698);
    if (t == NULL) return;

    q = *(void **)((u8 *)t + 0x8);
    va8 = (Vec3 *)((u8 *)q + 0xA8);
    p = *(void **)(a1 + 0x50);
    pv = (Vec3 *)((u8 *)p + 0x50);

    a.x = va8->x; a.y = va8->y; a.z = va8->z;
    b.x = pv->x;  b.y = pv->y;  b.z = pv->z;

    dx = a.x - b.x;
    dz = a.z - b.z;
    a.y = 0.0f;
    b.y = 0.0f;
    distSq = dx * dx + a.y + dz * dz;

    if (*(s32 *)(a0 + 0x2C) != 0) {
        func_001AA438(arg0, distSq);
    }

    if (*(s32 *)(a0 + 0x60) != 0) {
        vE0  = (Vec3 *)(a0 + 0xE0);
        vEC  = (Vec3 *)(a0 + 0xEC);
        vF8  = (Vec3 *)(a0 + 0xF8);

        n = *(s32 *)(a0 + 0x12C) + 1;
        *(s32 *)(a0 + 0x12C) = n;
        n = n % *(s32 *)(a0 + 0x120);
        *(s32 *)(a0 + 0x12C) = n;

        func_001A9498(&tmp.x, arg0, n, *(f32 *)(a0 + 0x68));
        vE0->x = tmp.x; vE0->y = tmp.y; vE0->z = tmp.z;

        func_001A9E08(&tmp.x, arg0, vE0);
        vEC->x = tmp.x; vEC->y = tmp.y; vEC->z = tmp.z;

        func_001A9FD0(&tmp.x, arg0, vEC);
        vF8->x = tmp.x; vF8->y = tmp.y; vF8->z = tmp.z;

        func_001AA2E0(&tmp.x, arg0, vEC, vF8);
        *(f32 *)(a0 + 0x104) = tmp.x; *(f32 *)(a0 + 0x108) = tmp.y; *(f32 *)(a0 + 0x10C) = tmp.z;

        *(f32 *)(a0 + 0xB0) = vE0->x; *(f32 *)(a0 + 0xB4) = vE0->y; *(f32 *)(a0 + 0xB8) = vE0->z;
        *(f32 *)(a0 + 0xBC) = vEC->x; *(f32 *)(a0 + 0xC0) = vEC->y; *(f32 *)(a0 + 0xC4) = vEC->z;
        *(f32 *)(a0 + 0xC8) = vF8->x; *(f32 *)(a0 + 0xCC) = vF8->y; *(f32 *)(a0 + 0xD0) = vF8->z;
        *(f32 *)(a0 + 0xD4) = *(f32 *)(a0 + 0x104); *(f32 *)(a0 + 0xD8) = *(f32 *)(a0 + 0x108); *(f32 *)(a0 + 0xDC) = *(f32 *)(a0 + 0x10C);

        func_001AA308(arg0, arg1);
        func_001AA3B8(arg0);
    }
}
