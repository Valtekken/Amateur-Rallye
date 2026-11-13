extern s32 func_003B21F0(s32, s32, s32);
extern s32 func_003A8160(s32, s32);
extern s32 func_003A4790(void *, void *);
extern s32 func_00327F70(s32, void *);
extern s32 D_002AD408(s32);
extern char D_00487738[];
extern char D_00487708[];

void func_003D7B00(void *arg0, s32 arg1) {
    arg1 |= 4;
    *(u8 *)((u8 *)arg0 + 0x1A) = (u8)arg1;
}

s32 func_003AEF40(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0 = func_003B21F0(arg2, *(s32 *)((u8 *)arg0 + 4), arg1);
    func_003A8160(sp0, *(s32 *)((u8 *)arg0 + 4));
    *(s32 *)((u8 *)arg0 + 4) = *(s32 *)((u8 *)arg0 + 4) - (arg2 - arg1);
    return arg1;
}

void func_003AED50(s32 arg0, void *arg1) {
    *(s32 *)((u8 *)arg1 + 0x28) = 1;
    *(s32 *)((u8 *)arg1 + 0x2C) = 0;
    *(s32 *)((u8 *)arg1 + 0x3C) = 0;
    *(s32 *)((u8 *)arg1 + 0x40) = 0;
    func_003A4790((u8 *)arg1 + 0x34, D_00487738);
    *(f32 *)((u8 *)arg1 + 0x44) = 10.0f;
}

void func_003AECA0(s32 arg0, void *arg1) {
    *(s32 *)((u8 *)arg1 + 0x28) = 0x11;
    *(s32 *)((u8 *)arg1 + 0x2C) = 1;
    *(s32 *)((u8 *)arg1 + 0x3C) = 1;
    *(s32 *)((u8 *)arg1 + 0x40) = 1;
    func_003A4790((u8 *)arg1 + 0x38, D_00487708);
    *(s32 *)((u8 *)arg1 + 0x24) = func_00327F70(D_002AD408(0x10), (u8 *)arg1 + 0x4C);
    *(f32 *)((u8 *)arg1 + 0x44) = 4.0f;
}
