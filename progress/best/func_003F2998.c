typedef struct { s64 a, b; } V128;

extern void func_003F2930(int);
extern V128 D_00440180[];
extern V128 D_004401D0[];

void func_003F2998(void) {
    func_003F2930(1);
    *(volatile int *)0x10002010 = 0x40000000;
    while (*(volatile int *)0x10002010 < 0) { }
    *(volatile int *)0x10002000 = 0;
    while (*(volatile int *)0x10002010 < 0) { }
    *(V128 *)0x10007010 = D_00440180[0];
    *(V128 *)0x10007010 = D_00440180[1];
    *(V128 *)0x10007010 = D_00440180[2];
    *(V128 *)0x10007010 = D_00440180[3];
    *(V128 *)0x10007010 = D_00440180[4];
    *(V128 *)0x10007010 = D_00440180[4];
    *(V128 *)0x10007010 = D_00440180[4];
    *(V128 *)0x10007010 = D_00440180[4];
    *(volatile int *)0x10002000 = 0x50000000;
    while (*(volatile int *)0x10002010 < 0) { }
    *(volatile int *)0x10002000 = 0x58000000;
    while (*(volatile int *)0x10002010 < 0) { }
    *(V128 *)0x10007010 = D_004401D0[0];
    *(V128 *)0x10007010 = D_004401D0[1];
    *(volatile int *)0x10002000 = 0x60000000;
    while (*(volatile int *)0x10002010 < 0) { }
    *(volatile int *)0x10002000 = 0x90000000;
    while (*(volatile int *)0x10002010 < 0) { }
    *(volatile int *)0x10002010 = 0x40000000;
    while (*(volatile int *)0x10002010 < 0) { }
    *(volatile int *)0x10002000 = 0;
    while (*(volatile int *)0x10002010 < 0) { }
}
