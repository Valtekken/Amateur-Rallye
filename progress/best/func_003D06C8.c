extern void func_003CA3B0(s32, s32);
extern s32 func_003CDC40(s32, s32, s32, s32, u32);
extern void func_003CDDB0(s32, s32, s32, s32);
extern s32 func_003FA9B8(s32);
extern s32 func_003CD948(s32, s32, s32, s32, s32);
extern u8 D_0049B9D0[];

s32 func_003CA410(s32 arg0, s32 arg1) {
    s32* entry = (s32*)(&D_0049B9D0[arg0 * 0x70 + arg1 * 0x1C]);
    if (entry[4] != 0) {
        func_003CA3B0(arg0, arg0);
        return entry[22];  // 0x58 / 4
    }
    return 0;
}

void func_003D06C8(void** arg0, s32 arg1) {
    s32 vtable = *(s32*)*arg0;
    func_003CDC40(vtable, 0, arg1, 0, 0xFFFFFFFFu);
}

void func_003D0700(s8 arg1) {
    func_003CDDB0(0, 0xFFFFFFFF, 1, arg1);
}

void func_003D0730(s32 arg0, s32 arg1) {
    func_003CD948(arg0, 0, 0xFFFFFFFF, arg1, func_003FA9B8(arg1));
}
