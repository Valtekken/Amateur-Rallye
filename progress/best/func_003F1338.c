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

s32 func_003F1DA0(M2C_UNK);                         /* extern */
M2C_UNK func_0040AF58();                            /* extern */
M2C_UNK func_0040AFA0();                            /* extern */
extern s32 D_0049D580;

s32 func_003F1338(s32 arg0) {
    s32 temp_16;
    s32 var_2;

    var_2 = 0;
    if (func_003F1DA0(1) == 0) {
        func_0040AF58();
        temp_16 = D_0049D580;
        D_0049D580 = arg0;
        func_0040AFA0();
        var_2 = temp_16;
    }
    return var_2;
}
