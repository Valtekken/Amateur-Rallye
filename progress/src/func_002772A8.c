extern void D_002AD530(s32);
extern void D_002AD390(void *);
extern void func_00277258(s32, s32);
extern void func_002B2028(void *);
extern s32 func_003F93CC(void *, void *, void *);
extern u32 D_0040E618[];

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 *unk8;
    s32 unkC;
    s32 *b;
    s32 *e;
    s32 *c;
} S;

void func_002772A8(S *arg0, s32 arg1) {
    s32 *b, *e, *inner, *b2;
    s32 n;

    if (arg0->unkC != 0)
        D_002AD530((s32)arg0->unkC);
    arg0->unkC = 0;

    inner = (s32 *)&arg0->b;
    b = (s32 *)arg0->b;
    e = (s32 *)inner[1];
    func_003F93CC(b, e, NULL);
    inner[1] = (s32)((s32)inner[1] - ((s32)e - (s32)b));

    if (arg0->unk8 != 0)
        func_00277258((s32)arg0->unk8, 3);
    arg0->unk8 = 0;

    b2 = (s32 *)arg0->b;
    n = (s32)(inner[2] - (s32)b2) >> 2;
    if (n != 0) {
        if ((n << 2) != 0) {
            func_002B2028(b2);
        } else {
            *b2 = D_0040E618[-1];
            D_0040E618[-1] = (u32)b2;
        }
    }
    if (arg1 & 1)
        D_002AD390(arg0);
}
