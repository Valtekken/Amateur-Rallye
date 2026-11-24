extern void *D_002AD408(s32);
extern void *func_00262BD8(void*, void*);
extern void func_00262E20(void*, void*);
extern void func_003FA310(void*, void*, s64);
extern void func_001D4040(void*, void*);
extern s32 D_004267AC, D_004267B0;
extern char D_00479BD0[];

void func_00261CC0(void *arg0, void *arg1) {
    void *p;
    s64 mask, nv;
    char sp[0x20];
    s64 *q;

    p = func_00262BD8(D_002AD408(0x70), (char*)arg0+0x14);
    *(void**)((char*)arg0+0xC) = p;
    *(f32*)((char*)p+0x2C) = *(f32*)((char*)arg0+0x18);
    *(s32*)((char*)p+0x8) = 1;
    p = *(void**)((char*)arg0+0xC);
    *(s32*)((char*)p+0x8) = 1;
    *(f32*)((char*)p+0x28) = *(f32*)((char*)arg0+0x1C);
    *(s32*)((char*)p+0x1C) = 1;
    p = *(void**)((char*)arg0+0xC);
    if (*(f32*)((char*)p+0x20) >= 0.05f) D_004267B0--;
    *(s32*)((char*)p+0x8) = 1;
    *(f32*)((char*)p+0x20) = 0.0f;
    func_00262E20(*(void**)((char*)arg0+0xC), arg1);
    p = *(void**)((char*)arg0+0xC);
    if (*(s32*)((char*)p+0x18) == 0) {
        if (*(f32*)((char*)p+0x20) >= 0.05f) D_004267B0++;
        D_004267AC++;
    }
    *(s32*)((char*)p+0x18) = 1;
    mask = ((s64)0xBFFFFFFF << 2) | 3;
    q = (s64*)((char*)*(void**)((char*)arg1+0x50) + 0x70);
    nv = *q & mask;
    *q = nv;
    func_003FA310(sp, &D_00479BD0, nv);
    func_001D4040((char*)arg0+0x10, sp);
    *(s32*)arg1 &= -2;
}
