/* machine draft (m2c) for ee-gcc-2.95.2 -O0 -G0 -O1, tried by autopilot */
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

M2C_UNK D_002AD530(void *);                         /* extern */
void *D_002AD5A8(M2C_UNK);                          /* extern */

void func_001A15F8(void *arg0) {
    void *temp_2;
    void *temp_4;

    temp_4 = M2C_FIELD(arg0, void **, 4);
    if (temp_4 != NULL) {
        D_002AD530(temp_4);
    }
    temp_2 = D_002AD5A8(0x13E800);
    M2C_FIELD(arg0, void **, 4) = temp_2;
    M2C_FIELD(temp_2, s8 *, 0) = 0;
    M2C_FIELD(temp_2, s8 *, 1) = 0;
}
