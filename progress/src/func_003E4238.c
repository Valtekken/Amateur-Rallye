#include "context.h"
typedef s32 M2C_UNK;
extern M2C_UNK func_003E1708(void *, M2C_UNK *);
extern M2C_UNK func_003E2D98(void *, s32);
extern s32 func_003E3D90(void *);
extern s32 func_003E4470(void *, s32);
extern M2C_UNK func_003E4F70(void *);
extern M2C_UNK D_00489CC8;
#define F(expr, off) (*(s32 *)((u8 *)(expr) + (off)))
s32 func_003E4238(void *arg0) {
    s32 temp_16;
    s32 temp_17;
    s32 temp_17_2;
    s32 temp_2;

    F(arg0, 0x810) = 0;
    F(arg0, 0x814) = 0;
    temp_17 = F(arg0, 0x12C) * F(arg0, 0x130);
    temp_17_2 = ((F(arg0, 0x174) ^ 3) != 0) ? (temp_17 >> 1) : temp_17;
    do {
loop_2:
        temp_2 = func_003E4470(arg0, temp_17_2);
        if (temp_2 == 1) {
            goto loop_2;
        }
    } while (temp_2 == 3);
    func_003E4F70(arg0);
    temp_16 = temp_2;
    if (func_003E3D90(arg0) == 0) {
        temp_16 = 2;
    }
    while (((*(volatile u32 *)(0x10000000 + 0xD400) >> 8) & 1) != 0) {
    }
    if (temp_16 == 0) {
        func_003E2D98(arg0, F(arg0, 0x810) == 0);
    }
    if ((u32)(temp_16 - 1) < 2U) {
        func_003E1708(arg0, &D_00489CC8);
    }
    return temp_16 == 0;
}
