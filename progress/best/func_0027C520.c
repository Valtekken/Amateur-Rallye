/* machine draft (m2c) for ee-gcc-2.95.2 -Os -G0, tried by autopilot */
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

void *func_0027C520(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f7;
    void *temp_3;
    void *temp_6;
    void *temp_7;

    temp_3 = arg1 + 0xBC;
    temp_6 = arg1 + 0x94;
    temp_f3 = M2C_FIELD(temp_6, f32 *, 4);
    temp_f1 = M2C_FIELD(arg1, f32 *, 0x94);
    temp_7 = arg1 + 0xA0;
    temp_f7 = M2C_FIELD(temp_6, f32 *, 8);
    temp_f4 = (M2C_FIELD(temp_3, f32 *, 0xC) * temp_f1) + (M2C_FIELD(temp_3, f32 *, 0x10) * temp_f3) + (M2C_FIELD(temp_3, f32 *, 0x14) * temp_f7);
    temp_f2 = (M2C_FIELD(temp_3, f32 *, 0x18) * temp_f1) + (M2C_FIELD(temp_3, f32 *, 0x1C) * temp_f3) + (M2C_FIELD(temp_3, f32 *, 0x20) * temp_f7);
    temp_f0 = (M2C_FIELD(arg1, f32 *, 0xBC) * temp_f1) + (M2C_FIELD(temp_3, f32 *, 4) * temp_f3) + (M2C_FIELD(temp_3, f32 *, 8) * temp_f7);
    sp4 = temp_f4;
    sp8 = temp_f2;
    sp0 = temp_f0;
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0xA0) - temp_f0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(temp_7, f32 *, 8) - temp_f2);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(temp_7, f32 *, 4) - temp_f4);
    return arg0;
}
