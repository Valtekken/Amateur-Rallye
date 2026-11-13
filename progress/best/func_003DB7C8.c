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

s32 func_003DB208(s32, s32, M2C_UNK);               /* extern */
extern M2C_UNK D_0043A970;

s32 func_003DB7C8(s32 arg0, s32 arg1) {
    s32 var_16;
    s32 var_4;

    var_4 = arg0;
    var_16 = arg1;
    if (var_16 >= 7) {
        do {
            var_16 -= 6;
            var_4 = func_003DB208(var_4, 0x3D09, 0);
        } while (var_16 >= 7);
    }
    if (var_16 == 0) {
        return var_4;
    }
    return func_003DB208(var_4, *(((var_16 - 1) * 4) + &D_0043A970), 0);
}
