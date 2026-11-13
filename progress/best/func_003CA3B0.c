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

M2C_UNK func_004037D8(void *, s32);                 /* extern */
extern M2C_UNK D_0049B9D0;

void *func_003CA3B0(s32 arg0, s32 arg1) {
    void *temp_16;

    temp_16 = *((arg1 * 0x1C) + (arg0 * 0x70) + &D_0049B9D0);
    func_004037D8(temp_16, temp_16 + 0x100);
    return temp_16 + ((M2C_FIELD(temp_16, s32 *, 0x58) < M2C_FIELD(temp_16, s32 *, 0xD8)) << 7);
}
