/* identical to func_0027DD60 (matched), with its names changed by decompdecomp */
extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern const char D_0047C528[];
extern void D_0047A088;

void *func_002AA0F8(void) {
    s32 k[4];
    void *obj = D_002AD408(0xC);
    func_001D4040(k, D_0047C528);
    *(s32 *)obj = k[0];
    *(void **)((u8 *)obj + 4) = &D_0047A088;
    return obj;
}
