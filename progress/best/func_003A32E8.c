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

s32 func_003A32A8(s32);                             /* extern */
M2C_UNK func_003D2EB8(M2C_UNK *, s32);              /* extern */
extern M2C_UNK D_0040E618;

void func_003A32E8(M2C_UNK *arg0, s32 arg1) {
    M2C_UNK *sp0;
    M2C_UNK **sp4;
    M2C_UNK **temp_2;

    sp0 = arg0;
    if (arg1 != 0) {
        func_003D2EB8(arg0, arg1);
        return;
    }
    temp_2 = &D_0040E618 + (func_003A32A8(arg1) * 4);
    sp4 = temp_2;
    *sp0 = *sp4;
    *temp_2 = sp0;
}
