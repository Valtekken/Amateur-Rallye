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

void *func_003DB0C0(s32);                           /* extern */
M2C_UNK func_003DB120(void *);                      /* extern */
M2C_UNK func_003DB148(void *, void *);              /* extern */

void *func_003DB190(void *arg0, s32 arg1) {
    void *temp_2;
    void *var_2;

    if (arg0 == NULL) {
        return func_003DB0C0(arg1);
    }
    var_2 = arg0;
    if (M2C_FIELD(arg0, s32 *, 4) < arg1) {
        temp_2 = func_003DB0C0(arg1);
        func_003DB148(temp_2, arg0);
        func_003DB120(arg0);
        var_2 = temp_2;
    }
    return var_2;
}
