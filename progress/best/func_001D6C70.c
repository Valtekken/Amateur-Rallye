extern void func_001D6D88(void*);
extern void func_003F93CC(s32, s32, s32);

void func_001D6D20(void *arg0) {
    void *v;
    s32 *begin;
    s32 *end;
    v = *(void**)((char*)arg0 + 4);
    func_001D6D88(*(void**)((char*)arg0 + 8));
    begin = *(s32**)v;
    end = *(s32**)((char*)v + 4);
    func_003F93CC((s32)begin, (s32)end, 0);
    *(s32**)((char*)v + 4) = (s32*)((char*)end - ((char*)end - (char*)begin));
}

extern void D_002AD390(void*);
extern void func_002B2028(void*);
extern u32 D_0040E618[];

void func_001D6C70(void *arg0, s32 arg1) {
    void *v;
    void **vv;
    void *base;
    void *end;
    s32 n;
    D_002AD390(*(void**)((char*)arg0 + 8));
    D_002AD390(*(void**)((char*)arg0 + 0xC));
    v = *(void**)((char*)arg0 + 4);
    if (v) {
        vv = (void**)v;
        base = vv[0];
        end = vv[1];
        n = ((char*)end - (char*)base) >> 2;
        if (n != 0) {
            if ((n << 2) != 0) {
                func_002B2028(base);
            } else {
                *(u32*)base = D_0040E618[-1];
                D_0040E618[-1] = (u32)base;
            }
        }
        D_002AD390(v);
    }
    if (arg1 & 1) D_002AD390(arg0);
}

extern void *D_002AD408(s32);
extern void func_001D6D20(void*);
extern int D_004761E0;
extern int D_004763B8;

void *func_001D6BF8(void *arg0) {
    void **p8;
    void **pC;
    void **p4;
    p8 = D_002AD408(4);
    *(void**)((char*)arg0 + 8) = p8;
    *p8 = &D_004761E0;
    pC = D_002AD408(4);
    *(void**)((char*)arg0 + 0xC) = pC;
    *pC = &D_004763B8;
    p4 = D_002AD408(0xC);
    *(void**)((char*)arg0 + 4) = p4;
    p4[0] = 0; p4[1] = 0; p4[2] = 0;
    func_001D6D20(arg0);
    return arg0;
}
