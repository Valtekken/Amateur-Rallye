extern s32 func_003A0BD8(s32, s32);
extern s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

void func_003ADFE8(register s32 arg0, register char *arg1) {
    *(s32 *)(arg1 + 0x28) = 2;
    *(s32 *)(arg1 + 0x2C) = 1;
    *(s32 *)(arg1 + 0x3C) = 1;
    *(s32 *)(arg1 + 0x40) = 0;
    *(f32 *)(arg1 + 0x44) = 0.3f;
}

extern char D_004874D0[];
extern void func_003A4790(void *, void *);

void func_003AE040(register s32 arg0, register char *arg1) {
    *(s32 *)(arg1 + 0x28) = 0x14;
    *(s32 *)(arg1 + 0x2C) = 1;
    *(s32 *)(arg1 + 0x3C) = 1;
    *(s32 *)(arg1 + 0x40) = 0;
    *(f32 *)(arg1 + 0x44) = 0.3f;
    func_003A4790(arg1 + 0x38, D_004874D0);
}

extern s32 D_002AD408(s32);
extern s32 func_00327F30(s32, void *);

void func_003AE250(register s32 arg0, register char *arg1) {
    *(s32 *)(arg1 + 0x28) = 1;
    *(s32 *)(arg1 + 0x2C) = 0;
    *(s32 *)(arg1 + 0x3C) = 0;
    *(s32 *)(arg1 + 0x40) = 0;
    *(f32 *)(arg1 + 0x44) = 0.3f;
    *(s32 *)(arg1 + 0x24) = func_00327F30(D_002AD408(0x10), arg1 + 0x4C);
}
