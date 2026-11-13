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

s32 func_003DE6B8(u32, s32);                        /* extern */
s32 *func_003F73E0();                               /* extern */

s32 func_003DEA80(void *arg0) {
    s32 var_17;
    s32 var_2;
    s64 temp_5_2;
    u32 temp_5;
    u32 temp_6;

    temp_6 = M2C_FIELD(arg0, u32 *, 0x14);
    temp_5 = M2C_FIELD(arg0, u32 *, 0x10);
    var_17 = 0;
    if ((temp_5 >= temp_6) || (var_2 = -1, (func_003DE6B8(temp_5, temp_6 - temp_5) == 0))) {
        temp_5_2 = M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 8);
        if (temp_5_2 != 0) {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s32 (**)(void *, u64, M2C_UNK), 0x7C)(arg0, (u64) (temp_5_2 << 0x20) >> 0x20, 1) != -1) {
                M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 4);
            } else {
                var_17 = ((*func_003F73E0() ^ 0x1D) == 0) ? 0 : -1;
            }
        }
        if (var_17 != -1) {
            M2C_FIELD(arg0, s64 *, 0x40) = -1;
        }
        var_2 = var_17;
    }
    return var_2;
}
