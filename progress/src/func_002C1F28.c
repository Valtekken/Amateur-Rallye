extern void func_002C1CC8(void *);
extern s32 func_002C1E40(s32, void *);
extern void func_002C1C58(void *);
extern s32 D_0043C000;
extern char D_004813D8[], D_004813E8[], D_004813F8[];

s32 func_002C1F28(void *arg0) {
    s32 old = D_0043C000;
    D_0043C000 = 1;
    func_002C1CC8(arg0);
    *(s32 *)arg0 = func_002C1E40(0x91768, D_004813D8);
    *(s32 *)((u8 *)arg0 + 4) = 0x91768;
    *(s32 *)((u8 *)arg0 + 8) = func_002C1E40(0x80000, D_004813E8);
    *(s32 *)((u8 *)arg0 + 0xC) = func_002C1E40(0x30000, D_004813F8);
    *(s32 *)((u8 *)arg0 + 0x10) = 0x30000;
    D_0043C000 = old;
    func_002C1C58(arg0);
    return 0;
}
