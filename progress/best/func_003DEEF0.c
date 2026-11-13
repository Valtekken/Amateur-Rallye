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

s64 func_004034A8(s32, s32, s64);                   /* extern */

s32 func_003DEEF0(void *arg0, s32 arg1, s64 arg2) {
    s32 temp_19;
    s32 var_18;
    s64 temp_2;
    s64 temp_2_2;
    s64 var_16;

    var_18 = arg1;
    var_16 = arg2;
loop_3:
    if (var_16 > 0) {
        temp_2 = func_004034A8(M2C_FIELD(arg0, s32 *, 0x38), var_18, (s64) (var_16 << 0x20) >> 0x20);
        if (temp_2 != -1) {
            var_16 -= temp_2;
            var_18 += (s64) (temp_2 << 0x20) >> 0x20;
            goto loop_3;
        }
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x20);
    }
    temp_2_2 = M2C_FIELD(arg0, s64 *, 0x40);
    temp_19 = arg2 - var_16;
    if (temp_2_2 >= 0) {
        M2C_FIELD(arg0, s64 *, 0x40) = (s64) (temp_2_2 + temp_19);
    }
    return temp_19;
}
