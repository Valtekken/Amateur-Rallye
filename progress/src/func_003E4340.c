#include "context.h"
typedef s32 M2C_UNK;
extern M2C_UNK func_003E16D0(void *, M2C_UNK *, s32);
extern M2C_UNK func_003E1708(void *, M2C_UNK *, s32);
extern s32 func_003E4128(void *);
extern s32 func_003E5240(void *, M2C_UNK);
extern M2C_UNK func_003E5348(void *, M2C_UNK);
extern M2C_UNK func_003E5588(void);
extern s32 func_003E5608(void *);
extern M2C_UNK D_00489CE8;
extern M2C_UNK D_00489D10;
#define F(expr, off) (*(s32 *)((u8 *)(expr) + (off)))
s32 func_003E4340(void *arg0, s32 dummy, s32 *arg2, s32 *arg3, void *arg4)
{
    s32 temp_19;
    s32 temp_2;
    s32 temp_2_2;

    F(arg0, 0x11C) = 0;
    func_003E5588();
    temp_2 = func_003E5240(arg0, 0x20);
    if ((u32)(temp_2 - 0x101) >= 0xAFU) {
        func_003E16D0(arg0, &D_00489CE8, temp_2);
        return 2;
    }
    func_003E5348(arg0, 0x20);
    temp_19 = func_003E5608(arg0);
    temp_2_2 = func_003E4128(arg0);
    *arg3 = temp_2_2;
    if (F(arg0, 0x11C) != 0) {
        func_003E1708(arg0, &D_00489D10, temp_2_2);
        return 1;
    }
    *arg2 = (((((temp_19 << 7) + (temp_2 & 0xFF)) - 1) * F(arg0, 0x12C)) + temp_2_2) - 1;
    *arg3 = 1;
    F(arg0, 0x1B0) = 1;
    F(arg4, 0x14) = 0;
    F(arg4, 0x10) = 0;
    F(arg4, 4) = 0;
    F(arg4, 0) = 0;
    F(arg4, 0x1C) = 0;
    F(arg4, 0x18) = 0;
    F(arg4, 0xC) = 0;
    F(arg4, 8) = 0;
    return 0;
}
