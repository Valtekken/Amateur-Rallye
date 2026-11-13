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

M2C_UNK func_003E1708(M2C_UNK *, s32);              /* extern */
M2C_UNK func_003E67F0(void *, s32, s32, s32);       /* extern */
M2C_UNK func_003E6900(void *, s32, s32, s32);       /* extern */
extern M2C_UNK D_00489A88;

void func_003E1520(void *arg0) {
    s32 temp_6;
    s32 temp_7;

    temp_6 = M2C_FIELD(arg0, s32 *, 0x118);
    if (M2C_FIELD(arg0, s32 *, 0x120) != 0) {
        func_003E1708(&D_00489A88, temp_6);
    } else {
        temp_7 = temp_6 - 1;
        if (M2C_FIELD(arg0, s32 *, 0x174) == 3) {
            func_003E67F0(arg0, M2C_FIELD(arg0, s32 *, 0x1BC), temp_6 - 1, temp_7);
        } else {
            func_003E6900(arg0, M2C_FIELD(arg0, s32 *, 0x1CC), M2C_FIELD(arg0, s32 *, 0x1DC), temp_7);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
}
