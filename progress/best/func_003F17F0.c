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

extern s32 D_0043E724;
extern M2C_UNK (*D_0049D584)(s32, M2C_UNK);
extern s32 D_0049D588;

void func_003F17F0(void) {
    if (D_0049D584 != NULL) {
        if (D_0043E724 == 0) {
            D_0049D584(D_0049D588, D_0049D584);
        }
    }
}
