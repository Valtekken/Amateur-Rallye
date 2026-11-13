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

M2C_UNK func_002AD758(void *);                      /* extern */
void *func_002B1FC0(M2C_UNK);                       /* extern */
M2C_UNK func_003F94D0(void *, M2C_UNK, M2C_UNK);    /* extern */

void *func_002AD7B8(void) {
    void *temp_2;

    temp_2 = func_002B1FC0(0x18);
    if (temp_2 == NULL) {
        func_002AD758(temp_2);
    }
    func_003F94D0(temp_2, 0, 0x18);
    M2C_FIELD(temp_2, void **, 4) = (void *) (temp_2 + 0x10);
    return temp_2;
}
