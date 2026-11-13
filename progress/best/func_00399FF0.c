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

s32 func_002AFEB8(M2C_UNK, s32);                    /* extern */

s32 func_00399FF0(s32 arg0, s32 arg1) {
    s32 temp_2;

    temp_2 = func_002AFEB8(8, arg0);
    if (temp_2 != 0) {
        M2C_ERROR(/* unknown instruction: ldl $a2, 0x7($a1) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, ($a1) */);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0x7($a0) */);
        M2C_ERROR(/* unknown instruction: sdr $a2, ($a0) */);
    }
    return temp_2;
}
