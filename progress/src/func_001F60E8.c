extern void *D_002AD408(u32);
extern void func_001D2CD8(void *, s32);
extern void *func_001F60A8(void *);

void *func_001F60E8(void *arg0) {
    void *obj = func_001F60A8(D_002AD408(0x24));
    func_001D2CD8((char *)obj + 0x14, *(s32 *)((char *)arg0 + 0x14));
    *(s32 *)((char *)obj + 0x18) = *(s32 *)((char *)arg0 + 0x18);
    func_001D2CD8((char *)obj + 0x1C, *(s32 *)((char *)arg0 + 0x1C));
    *(s32 *)((char *)obj + 0x20) = *(s32 *)((char *)arg0 + 0x20);
    return obj;
}
