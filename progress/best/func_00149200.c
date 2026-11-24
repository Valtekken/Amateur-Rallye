extern void* D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern void func_001E2460(void*,void*);
extern void func_001E2C78(void*,const char*,s32);
extern char D_0044C0A8[], D_0044BC38[], D_0044DD18[];

void *func_00149200(char *a) {
    u32 k[8], c[4];
    volatile u32 *p = D_002AD408(0x24), *q;
    u32 v, name0;
    func_001D4040(k, D_0044C0A8);
    v = (u32)D_0044DD18;
    p[2] = 0; p[3] = 0;
    p[1] = 0;
    q = p + 5;
    p[0] = 0;
    p[5] = 0;
    p[4] = v;
    name0 = k[0];
    q[2] = 0; q[1] = 0;
    ((u32*)p)[8] = name0;
    func_001E2460(c, (void*)p);
    func_001E2C78(c, D_0044BC38, *(s32*)(a+12));
    return (void*)p;
}
