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

M2C_UNK func_003F12D0(M2C_UNK);                     /* extern */
M2C_UNK func_00404EA8(M2C_UNK *);                   /* extern */
s32 func_00406080(M2C_UNK *);                       /* extern */
extern s32 D_0043E710;
extern s32 D_0043E730;
extern M2C_UNK D_0043F8D0;
extern M2C_UNK D_0048B550;

s32 func_003F1DA0(s32 arg0) {
    s32 var_2;

    if (arg0 == 0) {
        if (D_0043E710 > 0) {
            func_00404EA8(&D_0048B550);
        }
loop_5:
        if (D_0043E730 != 0) {
block_4:
            func_003F12D0(0x3C);
            goto loop_5;
        }
        if (func_00406080(&D_0043F8D0) != 0) {
            goto block_4;
        }
        return 0;
    }
    var_2 = 1;
    if (D_0043E730 == 0) {
        var_2 = 1;
        if (func_00406080(&D_0043F8D0) == 0) {
            var_2 = 0;
        }
    }
    return var_2;
}
