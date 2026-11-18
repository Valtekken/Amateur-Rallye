extern void D_002AD390(void *);
extern void func_0011DF88(u32, s32);
extern void func_0021E4F0(u32);
extern void func_002B2028(u32);
extern u32 D_0040E618[];
extern u32 D_0044D4E8[];
extern u32 D_0044DCD8[];

typedef struct { u32 p0, p1, vtable, unkC, begin, end, cap; } Obj;

void func_00121698(Obj *arg0, u32 arg1) {
    u32 *pv;
    u32 i, p, n;

    arg0->vtable = (u32)&D_0044D4E8;
    if (arg0->unkC) func_0011DF88(arg0->unkC, 3);

    pv = (u32 *)((u8 *)arg0 + 0x10);
    i = 0;
    if (((s32)(pv[1] - arg0->begin) >> 3) != 0) {
        do {
            u32 off = i * 8;
            i++;
            func_0021E4F0(*(u32 *)(arg0->begin + off));
        } while (i < (u32)((s32)(pv[1] - arg0->begin) >> 3));
    }

    for (p = arg0->begin; p < pv[1]; p += 8) {}

    n = (s32)(*(volatile u32*)&pv[2] - pv[0]) >> 3;
    if (n != 0) {
        u32 sz = n << 3;
        if (sz != 0)
            func_002B2028(pv[0]);
        else {
            u32 fl = D_0040E618[-1];
            *(u32 *)pv[0] = fl;
            D_0040E618[-1] = pv[0];
        }
    }

    arg0->vtable = (u32)&D_0044DCD8;
    if (arg1 & 1) D_002AD390(arg0);
}
