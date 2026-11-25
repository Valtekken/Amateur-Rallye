extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern void func_001DF2B0(void*,void*,s32);
extern void *func_00294088(void*,void*,s32);
extern char D_0047B980[], D_0044DD18[];

void *func_00293F98(void *arg0, void *arg1) {
    u32 k[8];
    u32 *p = D_002AD408(0x24), *q;
    u32 v, name0;
    s32 i = 0;
    func_001D4040(k, D_0047B980);
    v = (u32)D_0044DD18;
    p[2] = 0; p[3] = 0;
    p[1] = 0;
    q = p + 5;
    p[0] = 0; p[5] = 0; p[4] = v;
    name0 = k[0];
    q[2] = 0; q[1] = 0;
    p[8] = name0;
    for (;;) {
        void *item = func_00294088(arg0, arg1, i);
        if (item == 0) {
            if (p != 0) {
                void **vt = (void **)p[4];
                void (*fn)(void *, s32) = (void (*)(void *, s32))vt[3];
                fn((u8 *)p + ((s16 *)vt)[4], 3);
            }
            return 0;
        }
        func_001DF2B0(p, item, 0);
        i++;
        if (i >= 4) return p;
    }
}
