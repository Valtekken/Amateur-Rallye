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

M2C_UNK func_003E1708(M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_00489D50;

s32 func_003E4660(void *arg0, void *arg1, s32 *arg2, void *arg3, s32 *arg4) {
    s32 temp_10;
    s32 temp_2;
    s32 var_9;

    var_9 = 1;
    temp_10 = M2C_FIELD(arg0, s32 *, 0x810) * 0x140;
    M2C_FIELD((temp_10 + arg0), s32 *, 0x6CC) = 1;
    M2C_FIELD(arg0, s32 *, 0x1B0) = 1;
    if (M2C_FIELD(arg0, s32 *, 0x150) == 2) {
        M2C_FIELD(arg1, s32 *, 0) = 0;
        M2C_FIELD(arg1, s32 *, 0x14) = 0;
        M2C_FIELD(arg1, s32 *, 0x10) = 0;
        M2C_FIELD(arg1, s32 *, 4) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x174) != 3) {
        *arg2 = 1;
        temp_2 = M2C_FIELD(arg0, s32 *, 0x174) == 2;
        M2C_FIELD(arg3, s32 *, 0) = temp_2;
        M2C_FIELD(arg3, s32 *, 4) = temp_2;
    } else {
        *arg2 = 2;
    }
    if (M2C_FIELD(arg0, s32 *, 0x150) == 1) {
        func_003E1708(&D_00489D50, 2, 1, temp_10);
        var_9 = 0;
    }
    *arg4 &= ~1;
    return var_9;
}
