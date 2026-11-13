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

M2C_UNK func_003E67F0(void *, s32, s32, s32);       /* extern */
M2C_UNK func_003E6900(void *, s32, s32, s32);       /* extern */

void func_003E5FE0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 var_5;
    s32 var_5_2;
    s32 var_6;

    if (arg2 != 0) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0x150);
        if (M2C_FIELD(arg0, s32 *, 0x174) == 3) {
            if (temp_2 != 3) {
                var_5 = M2C_FIELD(arg0, s32 *, 0x1B8);
            } else {
                var_5 = M2C_FIELD(arg0, s32 *, 0x1C4);
            }
            func_003E67F0(arg0, var_5, arg1 - 1, arg1);
        } else {
            if (temp_2 != 3) {
                var_5_2 = M2C_FIELD(arg0, s32 *, 0x1C8);
                var_6 = M2C_FIELD(arg0, s32 *, 0x1D8);
            } else {
                var_5_2 = M2C_FIELD(arg0, s32 *, 0x1D4);
                var_6 = M2C_FIELD(arg0, s32 *, 0x1E4);
            }
            func_003E6900(arg0, var_5_2, var_6, arg1 - 1);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0xF8) == 1) {
        M2C_FIELD(arg0, s32 *, 0xF8) = 2;
    }
}
