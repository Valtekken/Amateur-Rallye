extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern const char D_00479FB8[];
extern void D_0047A088;

void *func_0027DDB0(void *arg0) {
    s32 k[4];
    void *obj = D_002AD408(0xC);
    func_001D4040(k, D_00479FB8);
    *(s32 *)obj = k[0];
    *(void **)((u8 *)obj + 4) = &D_0047A088;
    *(s32 *)((u8 *)obj + 8) = *(s32 *)((u8 *)arg0 + 8);
    return obj;
}
