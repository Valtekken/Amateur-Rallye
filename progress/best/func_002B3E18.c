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

M2C_UNK func_003F9698(M2C_UNK *, s32);              /* extern */
extern M2C_UNK D_0047E618;
extern M2C_UNK D_0047E648;
extern M2C_UNK D_0047E670;
extern M2C_UNK D_0047E698;

void func_002B3E18(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    if (sp4 != 0) {
        func_003F9698(&D_0047E618, sp8);
        func_003F9698(&D_0047E648, sp0);
        func_003F9698(&D_0047E670, sp4);
        return;
    }
    func_003F9698(&D_0047E698, M2C_FIELD(arg0, s32 *, 0x18) + 0x20);
}
