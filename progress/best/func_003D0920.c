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

void *func_003CD828(M2C_UNK *, s32);                /* extern */
M2C_UNK func_003CDDB0(void **, M2C_UNK, M2C_UNK, s32, s8); /* extern */
extern M2C_UNK D_00436208;

void **func_003D0920(void **arg0, s32 arg1, s8 arg2) {
    void *var_4;

    if (M2C_FIELD(&D_00436208, s32 *, 0xC) != 0) {
        var_4 = func_003CD828(&D_00436208, arg2 << 0x18);
    } else {
        var_4 = &D_00436208 + 0x10;
        M2C_FIELD(&D_00436208, s32 *, 8) = (s32) (M2C_FIELD(&D_00436208, s32 *, 8) + 1);
    }
    *arg0 = var_4;
    func_003CDDB0(arg0, 0, 0xFFFFFFFF, arg1, arg2);
    return arg0;
}
