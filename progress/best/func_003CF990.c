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

M2C_UNK func_003CE0D0(void **, s32, M2C_UNK);       /* extern */

s32 func_003CF990(void **arg0) {
    s32 temp_17;
    void *temp_4;
    void *var_3;

    temp_4 = *arg0;
    var_3 = temp_4 - 0x10;
    if ((u32) M2C_FIELD(temp_4, u32 *, -8) >= 2U) {
        func_003CE0D0(arg0, M2C_FIELD(temp_4, s32 *, -0x10), 1);
        var_3 = *arg0 - 0x10;
    }
    M2C_FIELD(var_3, s32 *, 0xC) = 1;
    temp_17 = M2C_FIELD(*arg0, s32 *, -0x10);
    if ((u32) M2C_FIELD(var_3, u32 *, 8) >= 2U) {
        func_003CE0D0(arg0, temp_17, 1);
    }
    M2C_FIELD(*arg0, s32 *, -4) = 1;
    return *arg0 + temp_17;
}
