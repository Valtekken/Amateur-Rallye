typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

void SetSyscall_10(s32, s32);
void Copy_6(void*, void*, u32);
void FlushCache_2(u32);
s32 GetEntryAddress_8(s32);
extern s32 D_00441D10[];
extern s32 D_004419A0[];

void func_0040B6B8(void) {
    SetSyscall_10(D_00441D10[0], D_00441D10[1]);
    Copy_6((void*)0x80075000, &D_004419A0, 0x328);
    FlushCache_2(0);
    FlushCache_2(2);
    SetSyscall_10(D_00441D10[2], D_00441D10[3]);
    SetSyscall_10(D_00441D10[4], D_00441D10[5]);
    u32 i = 3;
    s32 *q = &D_00441D10[6];
    do {
        s32 addr = GetEntryAddress_8(q[0]);
        i++;
        SetSyscall_10(q[0], addr);
        q += 2;
    } while (i < 8);
}

s32 _SetTLBEntry_4(void);

s32 func_0040B7A0(s32 arg0) {
    if ((u32)(arg0 - 0xD) < 0x23)
        return _SetTLBEntry_4();
    return -1;
}

s32 GetMemorySize_2(void);
void _InitTLB_2(void);
void func_0040B870(void);

void func_0040B830(void) {
    if (GetMemorySize_2() == 0x02000000)
        func_0040B870();
    else
        _InitTLB_2();
}
