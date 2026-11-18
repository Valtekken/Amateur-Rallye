extern void func_001B12C8(void*);
extern void func_001B1380(void*);
extern void func_001B1408(void*, s32);
void func_001B1280(void *arg0, s32 arg1) {
    func_001B12C8(arg0);
    func_001B1380(arg0);
    func_001B1408(arg0, arg1);
}

extern void func_001D4040(void*, const char*);
extern char D_00472CC0[];
extern char D_00473B90[];
void func_001B1030(void *arg0) {
    s32 sp[4];
    func_001D4040(sp, D_00472CC0);
    *(s32*)arg0 = -1;
    *(s32*)((u8*)arg0+4) = sp[0];
    *(s32**)((u8*)arg0+8) = (s32*)D_00473B90;
    *(s32*)((u8*)arg0+0xC) = 0;
    *(s32*)((u8*)arg0+0x10) = 0;
    *(s32*)((u8*)arg0+0x30) = 0;
    *(s32*)((u8*)arg0+0x34) = 0;
    *(s32*)((u8*)arg0+0x38) = 0;
    *(s32*)((u8*)arg0+0x3C) = 0;
    *(s32*)((u8*)arg0+0x40) = 0;
    *(f32*)((u8*)arg0+0x44) = 1.0f;
    *(f32*)((u8*)arg0+0x48) = 1.0f;
    *(s32*)((u8*)arg0+0x4C) = 0;
    *(s32*)((u8*)arg0+0x50) = 0;
    *(f32*)((u8*)arg0+0x54) = 1.0f;
    *(f32*)((u8*)arg0+0x58) = 2.0f;
}
