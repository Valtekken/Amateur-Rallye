extern void *func_003C7880(s16, s32, s32, s32);
extern void GsPutIMR_2(s32);
extern void func_004039B0(s32);
extern void RemoveIntcHandler_2(s32, s32);
extern void SetGsCrt_2(s32, s32, s32);
typedef struct { s16 a, b, c, d; s32 e, f; } Reg;
void func_003C76F0(s32 p0, s32 p1, s32 p2, s32 p3) {
    s16 arg0 = p0, arg1 = p1, arg2 = p2, arg3 = p3;
    Reg *p;
    switch (arg0) {
    case 0:
        p = func_003C7880(arg0, p1 << 16, p2 << 16, p3 << 16);
        *(volatile u64 *)0x12001000 = 0x200;
        p->a = arg1;
        p->b = arg2;
        p->d = (s16)((*(volatile u64 *)0x12001000 >> 16) & 0xFF);
        GsPutIMR_2(0xFF00);
        p->c = (arg3 != 0);
        if (p->e) {
            func_004039B0(2);
            RemoveIntcHandler_2(2, p->f);
            p->e = (p->f = 0);
        }
        SetGsCrt_2(arg1 & 1, arg2 & 0xFF, arg3 & 1);
        return;
    case 1:
        *(volatile u64 *)0x12001000 = 0x100;
        return;
    case 5:
        p = func_003C7880(arg0, p1 << 16, p2 << 16, p3 << 16);
        p->c = (arg3 != 0);
        p->a = arg1;
        p->b = arg2;
        p->d = (s16)((*(volatile u64 *)0x12001000 >> 16) & 0xFF);
        SetGsCrt_2(arg1 & 1, arg2 & 0xFF, arg3 & 1);
        return;
    }
}
