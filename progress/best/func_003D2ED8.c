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

s32 func_002B1FC0();                                /* extern */
M2C_UNK func_003D2910(u32);                         /* extern */
M2C_UNK func_003D2B48(s32, u32);                    /* extern */
extern M2C_UNK D_00437E18;

void func_003D2ED8(u32 arg0) {
    M2C_UNK **temp_4;
    M2C_UNK *temp_2;
    u32 temp_5;

    if (arg0 >= 0x81U) {
        if (func_002B1FC0() == 0) {
            func_003D2910(arg0);
        }
    } else {
        temp_5 = arg0 + 7;
        temp_4 = (((temp_5 >> 3) - 1) * 4) + &D_00437E18;
        temp_2 = *temp_4;
        if (temp_2 != NULL) {
            *temp_4 = *temp_2;
        } else {
            func_003D2B48(temp_5 & 0xFFFFFFF8, temp_5);
        }
    }
}
