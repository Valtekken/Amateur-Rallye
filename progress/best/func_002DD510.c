#include "context.h"

struct UnkA950 {
    s32 pad0[0x294C / 4];
    s32 unk294C;
    s32 unk2950;
    s32 pad2[8];
    f32 unk2974;
};
extern struct UnkA950 D_0042A950;
extern s32 D_0042DE08;
extern u64 D_0042DE20[8];

extern f32 func_0015AD18(void);
extern f32 func_003F3230(f32);
extern void func_003280D0(void *, void *, void *, void *, void *, void *, void *,
                          f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_00342D38(s32, s32);

static f32 convf(s32 x) {
    if (x >= 0) return (f32)x;
    return 2.0f * (f32)((s32)(((u32)x & 1u) | ((u32)x >> 1)));
}

static f32 bits_f32(u32 b) { union { u32 u; f32 f; } u; u.u = b; return u.f; }

void func_002DD510(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 fparg0) {
    f32 t;
    f32 f7, f5v;
    f32 f1, f2;
    f32 f9, f6, f8, f4v, f1x, f12;
    f32 f0v, f2v, f3v;
    s32 i9, i6, i0, i1, i2;
    u64 v4, v2;
    f32 buf[8];
    f32 sp24, sp28, a;
    void *a0ptr;

    t = func_003F3230(func_0015AD18() * fparg0 * 0.5f);

    if (D_0042A950.unk294C >= 0) f7 = (f32)D_0042A950.unk294C;
    else f7 = convf(D_0042A950.unk294C) * 2.0f;

    if (D_0042A950.unk2950 >= 0) f5v = (f32)D_0042A950.unk2950;
    else f5v = convf(D_0042A950.unk2950) * 2.0f;

    if (D_0042A950.unk294C >= 0) {
        f1 = (f32)D_0042A950.unk294C;
        f2 = (f32)arg1 / 640.0f;
    } else {
        f1 = convf(D_0042A950.unk294C) * 2.0f;
        f2 = 0.0f;
    }
    f9 = f2 * f1;

    if (D_0042A950.unk2950 >= 0) {
        f1 = (f32)arg3 / 480.0f;
        f2 = (f32)D_0042A950.unk2950;
    } else {
        f1 = 480.0f;
        f2 = convf(D_0042A950.unk2950);
    }
    f6 = f1 * f2;

    if (D_0042A950.unk294C >= 0) {
        f1 = (f32)arg4 / 640.0f;
        f2 = (f32)D_0042A950.unk294C;
    } else {
        f1 = 640.0f;
        f2 = convf(D_0042A950.unk294C);
    }
    f8 = f1 * f2;

    if (D_0042A950.unk2950 >= 0) {
        f4v = (f32)arg2 / 480.0f;
        f1x = (f32)D_0042A950.unk2950;
    } else {
        f4v = (f32)arg2 / 480.0f;
        f1x = convf(D_0042A950.unk2950) * 2.0f;
    }
    f12 = f4v * f1x;

    f0v = f9 + f8;
    f2v = f6 + f12;
    f3v = f8 - f7;
    f2v -= 1.0f;
    f0v -= 1.0f;
    f12 *= 0.5f;
    f3v *= 0.5f;
    f1 = f9 + 2048.0f;
    f0v = f6 + 2048.0f;
    f3v = f3v * 0.5f;
    f4v = f4v * 0.5f;
    f1 = f1 + f3v;
    f0v = f0v + f4v;

    i9 = (s32)f9;
    i6 = (s32)f6;
    i0 = (s32)f0v;
    i1 = (s32)f1;
    i2 = (s32)f2v;

    v4 = D_0042DE20[4];
    v2 = D_0042DE20[2];
    v4 = (v4 & ~0x7FFu) | ((u64)(i9 & 0x7FFu));
    v2 = (v2 & ~0x7FFu) | ((u64)(i9 & 0x7FFu));
    v4 = (v4 & ~0x7FF00000000ULL) | ((u64)(i6 & 0x7FFu) << 32);
    v2 = (v2 & ~0x7FF00000000ULL) | ((u64)(i6 & 0x7FFu) << 32);
    v4 = (v4 & ~0x7FF0000ULL) | ((u64)(i0 & 0x7FFu) << 16);
    v2 = (v2 & ~0x7FF000000000000ULL) | ((u64)(i2 & 0x7FFu) << 32) | ((u64)(i0 & 0x7FFu) << 16);
    v4 = (v4 & ~0x7FF0000ULL) | ((u64)(i1 & 0x7FFu) << 16);
    v2 = (v2 & ~0x7FF000000000000ULL) | ((u64)(i1 & 0x7FFu) << 16);
    D_0042DE20[4] = v4;
    D_0042DE20[2] = v2;
    D_0042DE08 += 1;

    buf[0] = f8;
    buf[1] = f12;
    buf[2] = f1;
    buf[3] = f0v;
    buf[4] = 0.0f;
    buf[5] = 0.0f;
    buf[6] = 1.0f;

    if (arg5 != 0) {
        buf[7] = 1.0f;
        if (D_0042A950.unk2950 >= 0) sp24 = (f32)D_0042A950.unk2950;
        else sp24 = convf(D_0042A950.unk2950) * 2.0f;
        if (D_0042A950.unk294C >= 0) sp28 = (f32)D_0042A950.unk294C;
        else sp28 = convf(D_0042A950.unk294C) * 2.0f;
        sp24 = (-480.0f / sp24) * D_0042A950.unk2974;
        sp28 = 640.0f / sp28;
        a0ptr = *(void**)((char*)arg0 + 0x18);
        func_003280D0(a0ptr, buf, &buf[0], &buf[2], &D_0042DE20[0], &D_0042DE08, &D_0042A950,
                      1.0f, t, 1.0f, D_0042A950.unk2974,
                      bits_f32(0x48FFFF00u), bits_f32(0x3E000000u), bits_f32(0x3E800000u), bits_f32(0x44800000u));
    } else {
        buf[6] = -0.5f;
        buf[7] = 0.5f;
        buf[8] = 0.5f;
        a = ((f32)arg4 / 480.0f) * f5v;
        a = a / D_0042A950.unk2974;
        a = a * 0.5f;
        a = a / t;
        a0ptr = *(void**)((char*)arg0 + 0x18);
        func_003280D0(a0ptr, buf, &buf[0], &buf[2], &D_0042DE20[0], &D_0042DE08, &D_0042A950,
                      a, t, 1.0f, 0.0f,
                      bits_f32(0x487FFF00u), bits_f32(0x3E800000u), bits_f32(0x3E000000u), bits_f32(0x44800000u));
    }
    func_00342D38(*(s32*)((char*)arg0 + 0x14), *(s32*)((char*)arg0 + 0x18));
}
