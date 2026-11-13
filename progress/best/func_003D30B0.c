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

s32 func_003DA6B8(s32);                             /* extern */
extern M2C_UNK D_0048BD29;

s32 func_003D30B0(s32 arg0) {
    s32 temp_2;

loop_1:
    temp_2 = func_003DA6B8(arg0);
    if (temp_2 != -1) {
        if (*(temp_2 + &D_0048BD29) & 8) {
            goto loop_1;
        }
    }
    return temp_2;
}
