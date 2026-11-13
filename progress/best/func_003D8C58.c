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

M2C_UNK func_003D7DE0(void *);                      /* extern */
M2C_UNK func_003D7E18(void *);                      /* extern */

s32 func_003D8C58(s32 arg0, void *arg1) {
    s32 temp_2;
    s32 var_2;
    s32 var_2_2;
    void *temp_16;

    temp_16 = M2C_FIELD(arg1, void **, 4);
    var_2 = -1;
    if (temp_16 == arg0) {
        temp_2 = M2C_FIELD(temp_16, s32 *, 0);
        if (M2C_FIELD(arg1, s32 *, 8) >= 0) {
            if (!(temp_2 & 0x100)) {
                var_2_2 = M2C_FIELD(temp_16, s32 *, 0xC);
            } else {
                func_003D7DE0(temp_16);
                var_2_2 = M2C_FIELD(temp_16, s32 *, 0xC);
            }
        } else {
            if (!(temp_2 & 0x100)) {
                func_003D7E18(temp_16);
            }
            var_2_2 = M2C_FIELD(temp_16, s32 *, 8);
        }
        M2C_FIELD(temp_16, s32 *, 4) = (s32) (var_2_2 + M2C_FIELD(arg1, s32 *, 8));
        var_2 = 0;
    }
    return var_2;
}
