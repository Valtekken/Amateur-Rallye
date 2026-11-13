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

M2C_UNK func_003A88A0(M2C_UNK *);                   /* extern */
M2C_UNK func_003A88D0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_003A8930(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_003A8990(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_0042FD60;

void func_003A3078(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    M2C_UNK sp10;

    sp0 = arg0;
    sp4 = arg1;
    if (sp4 == 0xFFFF) {
        if (sp0 != 0) {
            func_003A88A0(&sp10);
            func_003A88D0(&D_0042FD60, &sp10);
            func_003A8930(&sp10, 2);
            return;
        }
        func_003A8990(&D_0042FD60, 2);
    }
}
