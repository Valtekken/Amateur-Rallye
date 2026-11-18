extern s32 func_003E6328(void *, void *, u32, void *);
extern void func_003E63C8(void *, void *);
extern void func_003E6638(void *);
extern void func_003E6660(void *, void *, void *);
extern void func_003E71C8(void *, void *);
extern u32 D_0043AF68[];

void func_003E67F0(void *arg0, void *arg1) {
    void *t;
    void *t2;
    s64 v;
    u32 val;
    t = *(void **)((char *)arg0 + 0x858);
    func_003E6660((char *)t + 0x10, (char *)t + 0x18, (char *)t + 0x20);
    t2 = *(void **)((char *)arg0 + 0x858);
    v = *(s64 *)((char *)t2 + 0x20);
    v = (((s64)v << 27) >> 32) & 0xF;
    *(s32 *)((char *)arg0 + 0x80) = *(s32 *)((char *)t2 + 0x10);
    val = D_0043AF68[v];
    *(s32 *)((char *)arg0 + 0xCC) = *(s32 *)((char *)arg1 + 0x5C);
    *(u64 *)((char *)arg0 + 0x88) = val;
    *(s32 *)((char *)arg0 + 0xD0) = *(s32 *)((char *)arg1 + 0x60);
    *(s32 *)((char *)arg0 + 0xB4) = *(s32 *)((char *)arg1 + 0x44);
    *(s32 *)((char *)arg0 + 0xB8) = *(s32 *)((char *)arg1 + 0x48);
    *(s32 *)((char *)arg0 + 0xBC) = *(s32 *)((char *)arg1 + 0x4C);
    *(s32 *)((char *)arg0 + 0xC0) = *(s32 *)((char *)arg1 + 0x50);
    *(s32 *)((char *)arg0 + 0xC4) = *(s32 *)((char *)arg1 + 0x54);
    *(s32 *)((char *)arg0 + 0xC8) = *(s32 *)((char *)arg1 + 0x58);
    if (func_003E6328(arg0, arg1, val, t2) != 0) {
        if (*(s32 *)((char *)arg1 + 0x28) == 1) {
            if (*(s32 *)((char *)arg0 + 0xB0) != 0) {
                func_003E71C8(arg0, arg1);
            } else {
                func_003E63C8(arg0, arg1);
            }
            func_003E6638(arg0);
        }
    }
}
