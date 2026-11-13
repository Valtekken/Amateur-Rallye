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

M2C_UNK func_003F2998();                            /* extern */
M2C_UNK func_0040AF58();                            /* extern */
M2C_UNK func_0040AFA0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_003E09C0(void) {
    func_0040AF58();
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
    *(s32 *)0x1000B000 &= 0xFFFFFEFF;
    *(s32 *)0x1000B400 &= 0xFFFFFEFF;
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
    func_0040AFA0(0x1000B400, 0x1000B000, 0xFFFEFFFF, 0xFFFFFEFF, 0x1000F520, 0x1000F590);
    *(s32 *)0x1000B020 = 0;
    *(s32 *)0x1000B420 = 0;
    func_003F2998();
}
