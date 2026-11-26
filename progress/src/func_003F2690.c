extern void func_003F2628(s32);
extern void func_003F25C0(s32);
typedef struct { s32 f[9]; } B;
void func_003F2690(B *p) {
    func_003F2628(1);
    p->f[0] = *(volatile u32 *)0x1000B410;
    p->f[1] = *(volatile u32 *)0x1000B430;
    p->f[2] = *(volatile u32 *)0x1000B420;
    p->f[3] = *(volatile u32 *)0x1000B400;
    while (*(volatile u32 *)0x10002010 & 0xF0) { }
    func_003F25C0(0);
    p->f[4] = *(volatile u32 *)0x1000B010;
    p->f[5] = *(volatile u32 *)0x1000B020;
    p->f[6] = *(volatile u32 *)0x1000B000;
    p->f[7] = *(volatile u32 *)0x10002020;
    p->f[8] = *(volatile u32 *)0x10002010;
}
