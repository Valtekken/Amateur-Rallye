#include "context.h"

extern void *func_001F7EC8(void *);
extern void func_0021D5B0(void *, void *, f32);
extern void *D_004789A0[];

void *func_001F32E8(void *arg0)
{
    s32 sp[3];

    func_001F7EC8(arg0);
    *(void **)((u8 *)arg0 + 0x10) = D_004789A0;
    sp[0] = 0;
    sp[1] = 0;
    sp[2] = 0;
    func_0021D5B0((u8 *)arg0 + 0x1C, sp, -1.0f);
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    return arg0;
}
