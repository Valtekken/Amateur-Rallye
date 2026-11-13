/* machine draft (m2c) for ee-gcc-2.95.2 -O0 -G0, tried by autopilot */
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

M2C_UNK func_003AC5A0(void *, void *);              /* extern */

u16 *func_003A65D8(u16 *arg0, u16 *arg1) {
    *arg0 = *arg1;
    func_003AC5A0(arg0 + 4, arg1 + 4);
    return arg0;
}
