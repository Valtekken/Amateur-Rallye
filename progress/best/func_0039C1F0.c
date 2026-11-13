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

M2C_UNK func_0039C160(s32, s32, s8);                /* extern */
u32 func_003A3CC8(s32);                             /* extern */
M2C_UNK func_003AA508(s32, u32, M2C_UNK);           /* extern */

void func_0039C1F0(s32 arg0, u32 arg1, s8 arg2) {
    u32 sp0;
    s8 sp4;

    sp0 = arg1;
    sp4 = arg2;
    if (func_003A3CC8(arg0) < sp0) {
        func_0039C160(arg0, sp0 - func_003A3CC8(arg0), sp4);
        return;
    }
    func_003AA508(arg0, sp0, 0xFFFFFFFF);
}
