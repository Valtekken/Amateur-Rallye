/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_003D8690();                                /* extern */

void *func_003DE668(void *arg0) {
    s32 temp_3;

    if (func_003D8690() != 0) {
        temp_3 = M2C_FIELD(arg0, s32 *, 0x1C);
        M2C_FIELD(arg0, s32 *, 8) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x18) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x14) = temp_3;
        M2C_FIELD(arg0, s32 *, 0x10) = temp_3;
        M2C_FIELD(arg0, s32 *, 0xC) = temp_3;
        M2C_FIELD(arg0, s32 *, 4) = temp_3;
        return arg0;
    }
    return NULL;
}
