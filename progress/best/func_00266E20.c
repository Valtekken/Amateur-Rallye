#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef union { s32 i; f32 f; } Fi;

void func_00266E20(void *arg0, void *arg1) {
    volatile Fi sp0;
    volatile f32 sp4, sp8, spC;
    volatile f32 sp10, sp14, sp18, sp1C;
    volatile f32 sp20, sp24, sp28, sp2C;
    volatile f32 sp30, sp34, sp38;
    f32 z, temp_f0, temp_f0_2, temp_f0_3, temp_f10, temp_f11, temp_f12;
    f32 temp_f1, temp_f1_2, temp_f1_3, temp_f2, temp_f2_2, temp_f2_3;
    f32 temp_f3, temp_f4, temp_f5, temp_f6, temp_f7;
    void *temp_2, *temp_3, *temp_6, *temp_7, *temp_8;

    sp0.i = 0;
    temp_2 = arg0 + 0xAC;
    M2C_FIELD(arg1, f32 *, 0) = M2C_FIELD(arg0, f32 *, 0x11C);
    temp_6 = arg0 + 0x18C;
    z = sp0.f;
    temp_3 = arg0 + 0x1A4;
    temp_8 = arg0 + 0x198;
    temp_7 = arg0 + 0x1B0;
    M2C_FIELD(arg1, f32 *, 4) = M2C_FIELD(arg0, f32 *, 0x120);
    M2C_FIELD(arg1, f32 *, 8) = M2C_FIELD(arg0, f32 *, 0x124);
    temp_f6 = M2C_FIELD(arg0, f32 *, 0x128);
    temp_f7 = M2C_FIELD(arg0, f32 *, 0x12C);
    temp_f5 = M2C_FIELD(arg0, f32 *, 0x130);
    sp4 = temp_f6;
    sp8 = temp_f7;
    spC = temp_f5;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xAC);
    temp_f12 = M2C_FIELD(temp_2, f32 *, 0xC);
    temp_f10 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f11 = M2C_FIELD(temp_2, f32 *, 8);
    temp_f3 = ((((temp_f0 * z) - (temp_f6 * temp_f10)) - (temp_f7 * temp_f11)) - (temp_f5 * temp_f12)) * 0.5f;
    temp_f2 = (((temp_f10 * z) + (temp_f6 * temp_f0) + (temp_f7 * temp_f12)) - (temp_f5 * temp_f11)) * 0.5f;
    temp_f4 = (((temp_f12 * z) + (temp_f5 * temp_f0) + (temp_f6 * temp_f11)) - (temp_f7 * temp_f10)) * 0.5f;
    temp_f1 = (((temp_f11 * z) + (temp_f7 * temp_f0) + (temp_f5 * temp_f10)) - (temp_f6 * temp_f12)) * 0.5f;
    M2C_FIELD(arg1, f32 *, 0xC) = temp_f3;
    M2C_FIELD(arg1, f32 *, 0x10) = temp_f2;
    M2C_FIELD(arg1, f32 *, 0x18) = temp_f4;
    M2C_FIELD(arg1, f32 *, 0x14) = temp_f1;
    sp20 = temp_f3;
    sp24 = temp_f2;
    sp28 = temp_f1;
    sp2C = temp_f4;
    sp10 = temp_f3;
    sp14 = temp_f2;
    sp18 = temp_f1;
    sp1C = temp_f4;
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x1A4) + M2C_FIELD(arg0, f32 *, 0x18C);
    temp_f2_2 = M2C_FIELD(temp_3, f32 *, 8) + M2C_FIELD(temp_6, f32 *, 8);
    temp_f0_2 = M2C_FIELD(temp_6, f32 *, 4) + M2C_FIELD(temp_3, f32 *, 4);
    sp20 = temp_f1_2;
    M2C_FIELD(arg1, f32 *, 0x1C) = temp_f1_2;
    M2C_FIELD(arg1, f32 *, 0x24) = temp_f2_2;
    sp28 = temp_f2_2;
    M2C_FIELD(arg1, f32 *, 0x20) = temp_f0_2;
    sp24 = temp_f0_2;
    temp_f0_3 = M2C_FIELD(arg0, f32 *, 0x198) + M2C_FIELD(arg0, f32 *, 0x1B0);
    temp_f1_3 = M2C_FIELD(temp_7, f32 *, 8) + M2C_FIELD(temp_8, f32 *, 8);
    temp_f2_3 = M2C_FIELD(temp_7, f32 *, 4) + M2C_FIELD(temp_8, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 0x30) = temp_f1_3;
    sp38 = temp_f1_3;
    M2C_FIELD(arg1, f32 *, 0x28) = temp_f0_3;
    M2C_FIELD(arg1, f32 *, 0x2C) = temp_f2_3;
    sp30 = temp_f0_3;
    sp34 = temp_f2_3;
}
