void func_003DF4B0(s32);
void func_003D7D68(void);
void func_003F2998(void);
void func_0040AF58(void);
void func_0040AFA0(s32, s32, s32, s32, s32, s32);
s32 func_003E1760(s32, s32);

void func_003DF518(s32 arg0) {
    func_003DF4B0(arg0 + 8);
}

void func_003DE2F0(void *arg0) {
    *(s64 *)((u8 *)arg0 + 0x40) = -1;
    *(s32 *)arg0 |= 0x240C;
    func_003D7D68();
    *(s32 *)((u8 *)arg0 + 0x38) = -1;
}

void func_003E09C0(void) {
    func_0040AF58();
    *(vu32 *)0x1000F590 = *(vu32 *)0x1000F520 | 0x10000;
    *(vu32 *)0x1000B000 &= 0xFFFFFEFF;
    *(vu32 *)0x1000B400 &= 0xFFFFFEFF;
    *(vu32 *)0x1000F590 = *(vu32 *)0x1000F520 & 0xFFFEFFFF;
    func_0040AFA0(0x1000B400, 0x1000B000, 0xFFFEFFFF, 0xFFFFFEFF, 0x1000F520, 0x1000F590);
    *(vu32 *)0x1000B020 = 0;
    *(vu32 *)0x1000B420 = 0;
    func_003F2998();
}

void func_003E0C70(void *arg0, s32 arg2) {
    s32 temp = arg2 + 0x13;
    s32 val = (temp > -1) ? temp : (arg2 + 0x22);
    val = (val >> 4) << 4;
    func_003E1760(*(s32 *)((u8 *)arg0 + 0x40), val);
}
