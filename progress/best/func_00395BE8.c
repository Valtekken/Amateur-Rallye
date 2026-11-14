typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);
extern s32 func_001D9598(s32, s32, s32, CopyTag);
extern void func_00395B68(void*, void*);
extern s32 func_003A3EB0(s32);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

s32 func_00395C80(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_001D9598(a, b, c, (CopyTag){0});
}

s32 func_00399580(register s32 arg0) {
    return arg0 ? func_003A3EB0(arg0 * 8) : 0;
}

void* func_00395BE8(void* a, s32 n, void* b, s8 tag) {
    void* p = a;
    while (n) {
        func_00395B68(p, b);
        n--;
        p = (u8*)p + 8;
    }
    return p;
}
