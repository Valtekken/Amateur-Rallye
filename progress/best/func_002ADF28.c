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

s64 *func_002ADE20(u16, s32 *, M2C_UNK);            /* extern */
void *func_002AFB50(s32);                           /* extern */

void *func_002ADF28(s32 *arg1, s32 arg2) {
    u16 temp_4;
    void *temp_2;

    temp_2 = func_002AFB50(arg2);
    if (temp_2 != NULL) {
        temp_4 = M2C_FIELD(temp_2, u16 *, 0x298);
        if (M2C_FIELD((arg1 + temp_4), s8 *, 0x29C) != 0) {
            M2C_FIELD(temp_2, s32 *, 0) = (s32) ((s64) (*func_002ADE20(temp_4, arg1, 0) << 0x20) >> 0x20);
        } else {
            M2C_FIELD(temp_2, s32 *, 0) = (s32) *arg1;
        }
        M2C_FIELD(temp_2, s32 *, 0) = (s32) (M2C_FIELD(temp_2, s32 *, 0) + M2C_FIELD(temp_2, s32 *, 8));
        return temp_2;
    }
    return NULL;
}
