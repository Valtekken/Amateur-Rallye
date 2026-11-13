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

extern void *D_0043A908;

s32 func_003D89F8(void) {
    s32 var_17;
    u32 var_3;
    void *var_16;

    var_16 = D_0043A908;
    var_17 = 0;
    if (var_16 != NULL) {
        var_3 = M2C_FIELD(var_16, u32 *, 0x14);
loop_2:
        if ((u32) M2C_FIELD(var_16, u32 *, 0x10) < var_3) {
            var_17 = (~M2C_FIELD(M2C_FIELD(var_16, void **, 0x50), s32 (**)(void *, M2C_UNK), 0x14)(var_16, -1) == 0) ? -1 : var_17;
        }
        var_16 = M2C_FIELD(var_16, void **, 0x34);
        if (var_16 != NULL) {
            var_3 = M2C_FIELD(var_16, u32 *, 0x14);
            goto loop_2;
        }
    }
    return var_17;
}
