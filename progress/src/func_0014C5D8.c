extern void func_0014C6F0(void *);
extern void func_0014CAB8(void *, s32);
extern void func_0014CD38(void *, s32);
extern s32 func_001E3598(s32, s32);
extern s32 func_001E3D10(s32, s32, s32);

void func_0014C5D8(void *arg0, s32 arg1)
{
    s32 t16, t18, t19, t2, t3;

    func_0014C6F0(arg0);
    t19 = func_001E3598(func_001E4280(), arg0 + 0x14);
    t18 = func_001E3650(func_001E4280(), arg0 + 0x24);
    t16 = func_001E3598(func_001E4280(), arg0 + 0x1C);
    t2 = func_001E3598(func_001E4280(), arg0 + 0x20);
    if ((t16 != 0) || (t2 != 0) || (t18 != 0) || (t19 != 0)) {
        *(s32 *)((s8 *)arg0 + 0x3C) = 0;
        *(s32 *)((s8 *)arg0 + 0x44) = 0;
    }
    t3 = *(s32 *)((s8 *)arg0 + 0x2C);
    switch (t3) {
    case 1:
        func_0014CAB8(arg0, arg1);
        break;
    case 2:
        func_0014CD38(arg0, arg1);
        break;
    }
    func_001E3D10(func_001E4280(), arg0 + 0x18, *(s32 *)((s8 *)arg0 + 0x40));
}
