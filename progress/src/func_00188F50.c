extern void *D_002AD408(s32);
extern void *func_0018DED0(void *);
extern void func_001E33C8(void *, void *, s32);
extern void *func_001E3820(void *, void *, void *);
extern void func_001E3F80(void *, void *, void *);
extern void *func_0021E9C0(void *, void *);
extern void *func_0021F4B0(void);
extern void D_0040E698;

void func_00188F50(void *arg0, void *arg1) {
    void *v, *ctx, *res;
    s32 sp0;

    (void)arg0;
    if (*(s32 *)((u8 *)arg1 + 0x20) == 0) {
        v = func_0021E9C0(func_0021F4B0(), (u8 *)arg1 + 0x1C);
        *(void **)((u8 *)arg1 + 0x20) = v;
        if (v == 0) return;
    }
    ctx = (void *)func_001E4280();
    if (*(void **)((u8 *)arg1 + 0x20) == 0) {
        *(void **)((u8 *)arg1 + 0x20) = func_0021E9C0(func_0021F4B0(), (u8 *)arg1 + 0x1C);
    }
    v = func_001E3820(ctx, (u8 *)*(void **)((u8 *)arg1 + 0x20) + 0x5C, &D_0040E698);
    if (v == 0) {
        res = func_0018DED0(D_002AD408(0x10));
        if (*(void **)((u8 *)arg1 + 0x20) == 0) {
            *(void **)((u8 *)arg1 + 0x20) = func_0021E9C0(func_0021F4B0(), (u8 *)arg1 + 0x1C);
        }
        sp0 = *(s32 *)((u8 *)*(void **)((u8 *)arg1 + 0x20) + 0x5C);
        func_001E3F80((void *)func_001E4280(), &sp0, res);
        func_001E33C8((void *)func_001E4280(), &sp0, 0);
    }
}
