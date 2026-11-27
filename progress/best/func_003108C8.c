extern void func_00310C00(void *);
extern void func_0031BEF0(void *);
extern void func_0031E310(void *);
extern void func_00327D08(void *);
extern char D_004767A8[];
extern char D_004854F0[];
#define W(off, val) (*(s32 *)((char *)arg0 + (off)) = (val))

void *func_003108C8(void *arg0) {
    s32 max = 0x7FFFFFFF;
    void *d1 = &D_004854F0;
    s32 three = 3;
    void *d2 = &D_004767A8;
    char *p80 = (char *)arg0 + 0x80;
    W(0xC, three);
    *(void **)((char *)arg0 + 0x4) = d1;
    W(0x18, max);
    W(0x0, 0);
    W(0x8, 0);
    W(0x10, 0);
    W(0x14, 0);
    { char *in = (char *)arg0 + 0x20; *(s32 *)(in+0)=0; *(s32 *)(in+0xC)=0; *(s32 *)(in+0x4)=0; *(s32 *)(in+0x8)=0; }
    W(0x38, 0);
    func_00327D08(arg0);

    *(void **)((char *)arg0 + 0x44) = d2;
    W(0x40, 0);
    W(0x4C, three);
    *(void **)((char *)arg0 + 0x44) = d1;
    W(0x58, max);
    W(0x48, 0);
    W(0x50, 0);
    W(0x54, 0);
    W(0x60, 0);
    { char *in = (char *)arg0 + 0x60; *(s32 *)(in+0xC)=0; *(s32 *)(in+0x4)=0; *(s32 *)(in+0x8)=0; }
    W(0x78, 0);
    func_00327D08((char *)arg0 + 0x40);

    *(void **)(p80 + 0x4) = d2;
    W(0x80, 0);
    W(0x8C, three);
    *(void **)(p80 + 0x4) = d1;
    W(0x98, max);
    W(0x88, 0);
    W(0x90, 0);
    W(0x94, 0);
    W(0xA0, 0);
    { char *in = (char *)arg0 + 0xA0; *(s32 *)(in+0xC)=0; *(s32 *)(in+0x4)=0; *(s32 *)(in+0x8)=0; }
    W(0xB8, 0);
    func_00327D08(p80);

    W(0xC0, 0);
    func_0031BEF0(p80);
    func_0031E310(p80);
    func_00310C00(arg0);
    W(0xD0, 0);
    W(0xD8, 0);
    W(0xD4, 0);
    return arg0;
}
