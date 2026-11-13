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

s64 func_003F78B0(u8 *, M2C_UNK, s64, void *);      /* extern */
u8 func_003F9E30(void *);                           /* extern */

u64 func_003DF260(void *arg0, u8 *arg1, s64 arg2) {
    s32 temp_2;
    u8 *temp_2_2;
    u8 var_3;
    void *temp_4;

    if (arg2 == 1) {
        temp_4 = M2C_FIELD(arg0, void **, 0x58);
        temp_2 = M2C_FIELD(temp_4, s32 *, 4) - 1;
        M2C_FIELD(temp_4, s32 *, 4) = temp_2;
        if (temp_2 < 0) {
            var_3 = func_003F9E30(temp_4);
        } else {
            temp_2_2 = M2C_FIELD(temp_4, u8 **, 0);
            var_3 = *temp_2_2;
            M2C_FIELD(temp_4, u8 **, 0) = (u8 *) (temp_2_2 + 1);
        }
        if (var_3 != -1U) {
            *arg1 = var_3;
            return 1U;
        }
        return 0U;
    }
    return (u64) (func_003F78B0(arg1, 1, (s64) (arg2 << 0x20) >> 0x20, M2C_FIELD(arg0, void **, 0x58)) << 0x20) >> 0x20;
}
