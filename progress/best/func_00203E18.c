/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

f32 func_003F2F50();                                /* extern */
f32 func_003F3140(f32);                             /* extern */

void func_00203E18(void *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f21;
    f32 temp_f2;

    temp_f21 = func_003F2F50();
    temp_f0 = func_003F3140(fparg0);
    temp_f2 = -temp_f0;
    M2C_FIELD(arg0, f32 *, 0x20) = temp_f21;
    M2C_FIELD(arg0, f32 *, 0x10) = temp_f21;
    M2C_FIELD(arg0, f32 *, 0) = 1.0f;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 0x1C) = temp_f2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
