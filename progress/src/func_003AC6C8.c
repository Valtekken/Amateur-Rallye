s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    register s32 r = func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

typedef struct { f32 x, y, z; } Vec3;

f32 func_003AC6C8(register Vec3 *a, register Vec3 *b) {
    return (a->x - b->x) * (a->x - b->x) + (a->y - b->y) * (a->y - b->y) + (a->z - b->z) * (a->z - b->z);
}

void func_003A4AB8(s32, s32);

void func_003AC758(register s32 arg0, register s32 arg1, f32 x) {
    func_003A4AB8(arg0, arg1);
    *(f32 *)((s8 *)arg0 + 0xC) = x;
    *(f32 *)((s8 *)arg0 + 0x10) = x * x;
}

s32 func_003AC7C0(register s32 a, register s32 b) {
    a = b;
    return 0;
}
