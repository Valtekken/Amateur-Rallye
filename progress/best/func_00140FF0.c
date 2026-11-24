extern void func_001D4040(void*, const char*);
extern void *D_002AD408(s32);
extern void func_001E2460(void*, void*);
extern void func_001E2C78(void*, const char*, s32);
extern char D_0044BC20[];
extern char D_0044BC38[];
extern char D_0044DD18[];

void *func_00140FF0(void *arg0) {
    s32 k[8];
    s32 r[4];
    void *p = D_002AD408(0x24);
    func_001D4040(k, D_0044BC20);
    *(s32*)((char*)p+0x8) = 0;
    *(s32*)((char*)p+0xC) = 0;
    *(s32*)((char*)p+0x4) = 0;
    *(s32*)((char*)p+0x0) = 0;
    *(s32*)((char*)p+0x14) = 0;
    *(s32*)((char*)p+0x10) = (s32)D_0044DD18;
    *(s32*)((char*)p+0x1C) = 0;
    *(s32*)((char*)p+0x18) = 0;
    *(s32*)((char*)p+0x20) = *(s32*)k;
    func_001E2460(r, p);
    func_001E2C78(r, D_0044BC38, *(s32*)((char*)arg0+0xC));
    return p;
}
