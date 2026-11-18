extern void func_001D4040(void *, const char *);
extern void *func_0026B7C8(s32, s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern s32 func_00151930(void *);
extern s32 D_002AD408;
extern char D_00449100[];
extern int D_0044D168;
extern struct { s32 a,b,c,d; } D_0040E658;

void *func_0012AE30(void *arg0) {
    char buf[0x30];
    void *v;
    func_001D4040(buf, D_00449100);
    *(s32*)arg0 = -1;
    *(s32*)((char*)arg0+4) = *(s32*)buf;
    *(void**)((char*)arg0+8) = (void*)&D_0044D168;
    *(s32*)((char*)arg0+0xC) = 0;
    *(s32*)((char*)arg0+0x10) = 0;
    *(s32*)((char*)arg0+0x18) = 0;
    *(s32*)((char*)arg0+0x14) = 0;
    *(s32*)((char*)arg0+0x1C) = 0;
    *(s32*)((char*)arg0+0x20) = 0;
    *(void**)((char*)arg0+0x24) = func_0026B7C8(D_002AD408, 0);
    *(s32*)((char*)arg0+0x30) = 1;
    *(s32*)((char*)arg0+0x28) = 1;
    *(s32*)((char*)arg0+0x2C) = 1;
    *(s32*)((char*)arg0+0x34) = 0;
    *(s32*)((char*)arg0+0x3C) = 0;
    *(s32*)((char*)arg0+0x38) = 0;
    if (D_0040E658.c == 0) {
        v = (char*)&D_0040E658 + 0x10;
        D_0040E658.b = D_0040E658.b + 1;
    } else {
        v = (void*)func_00151930(&D_0040E658);
    }
    *(void**)((char*)arg0+0x40) = v;
    *(s32*)((char*)arg0+0x48) = 0;
    *(void**)((char*)arg0+0x4C) = 0;
    {
        void *t = func_002B1FC0(0x14);
        if (t == 0) t = func_003D2910(0x14);
        *(void**)((char*)arg0+0x4C) = t;
    }
    *(s32*)((char*)arg0+0x54) = 0;
    *(s32*)((char*)arg0+0x50) = 0;
    *(s32*)((char*)arg0+0x4C) = 0; /* placeholder for unk0 store */
    *(s32*)((char*)arg0+0x68) = 1;
    *(s32*)((char*)arg0+0x58) = 0;
    *(s32*)((char*)arg0+0x5C) = 0;
    *(s32*)((char*)arg0+0x60) = 0;
    *(s32*)((char*)arg0+0x64) = 0;
    *(s32*)((char*)arg0+0x6C) = 0;
    *(s32*)((char*)arg0+0x70) = 0;
    *(s32*)((char*)arg0+0x74) = 0;
    *(s32*)((char*)arg0+0x78) = 0;
    *(s32*)((char*)arg0+0x7C) = 0;
    *(s32*)((char*)arg0+0x80) = 0;
    return arg0;
}
