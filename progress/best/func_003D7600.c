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

s32 func_003D7600(void *arg0) {
    s32 var_2;
    void *temp_3;

    var_2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        var_2 = 0;
        if (!(((s32) M2C_FIELD(arg0, s32 *, 0) >> 1) & 1)) {
            temp_3 = M2C_FIELD(arg0, void **, 0x50);
            var_2 = M2C_FIELD(temp_3, s32 (**)(void *, void *), 0x64)(arg0 + M2C_FIELD(temp_3, s16 *, 0x60), arg0);
        }
    }
    return var_2;
}
