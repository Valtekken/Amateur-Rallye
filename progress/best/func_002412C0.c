extern void func_002410A0(void *, s32);
extern void func_00241210(void *);
extern void func_0024C2B0(s32);
extern s32 func_0023F778(void *);
extern void func_00251618(s32, s32);
void func_002412C0(void *arg0) {
    s32 i = 0;
    s32 count;
    s32 r;
    void **base;
    void **elem;
    func_002410A0(arg0, 1);
    func_00241210(arg0);
    count = (*(s32 *)((u8 *)arg0 + 0x10) - *(s32 *)((u8 *)arg0 + 0xC)) >> 2;
    while (i < count) {
        base = *(void ***)((u8 *)arg0 + 0xC);
        elem = &base[i];
        func_0024C2B0((s32)*elem);
        i++;
    }
    i = 0;
    r = func_0023F778(arg0);
    count = (*(s32 *)((u8 *)arg0 + 0x1C) - *(s32 *)((u8 *)arg0 + 0x18)) >> 2;
    while (i < count) {
        base = *(void ***)((u8 *)arg0 + 0x18);
        elem = &base[i];
        func_00251618((s32)*elem, r);
        i++;
    }
}
