#include "context.h"

typedef struct {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
} Vec3f001684B8;

extern void func_001683A8(Vec3f001684B8 *out, s32 arg1);
extern void func_003F3E80(f32 len_sq);

void func_001684B8(s32 arg0) {
    Vec3f001684B8 vec;
    f32 len_sq;
    f32 mag;

    func_001683A8(&vec, arg0);

    len_sq = (vec.x * vec.x) + (vec.y * vec.y) + (vec.z * vec.z);
    mag = sqrtf(len_sq);

    if (!(mag == mag)) {
        func_003F3E80(len_sq);
    }
}
