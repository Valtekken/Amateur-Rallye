extern void D_002AD390(void *);
extern void D_002AD530(void *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];
extern u32 D_0044C7C0[];
extern u32 D_0044DCD8[];

typedef struct {
    u32 m0[2];
    u32 vtable;
    void *begin;
    void *end;
    void *cap;
    u32 pad[3];
    u32 unk28;
    u32 pad2[6];
    u32 unk44;
} Obj;

void func_0014CFB8(Obj *arg0, s32 arg1) {
    u8 *b, *e, *p;
    u32 n;

    arg0->vtable = (u32)&D_0044C7C0;
    if (arg0->unk44)
        D_002AD530((void *)arg0->unk44);
    if (arg0->unk28)
        func_002B2028((void *)arg0->unk28);

    b = arg0->begin;
    e = arg0->end;
    n = (u32)(e - b);
    if (b < e)
        for (p = b + 4; p < e; p += 4);
    arg0->end = e - n;

    b = arg0->begin;
    e = arg0->end;
    if (b < e)
        for (p = b + 4; p < e; p += 4);

    n = ((u32)arg0->cap - (u32)arg0->begin) >> 2;
    if (n) {
        u32 sz = n << 2;
        if (sz)
            func_002B2028(arg0->begin);
        else {
            u32 fl = D_0040E618[-1];
            *(u32 *)arg0->begin = fl;
            D_0040E618[-1] = (u32)arg0->begin;
        }
    }

    arg0->vtable = (u32)&D_0044DCD8;
    if (arg1 & 1)
        D_002AD390(arg0);
}
