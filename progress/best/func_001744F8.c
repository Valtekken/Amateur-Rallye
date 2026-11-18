extern void func_00188F20(void *);
extern void func_00188F28(void *, s32);
extern void func_00189118(void *, void *, void *);
void func_001744F8(void *arg0) {
    u8 sp[0x10];
    s32 i = 0;
    s32 count;
    void **base;
    void **elem;
    func_00188F20(sp);
    count = (*(s32 *)((u8 *)arg0 + 0x18) - *(s32 *)((u8 *)arg0 + 0x14)) >> 2;
    if (count > 0) {
        do {
            base = *(void ***)((u8 *)arg0 + 0x14);
            elem = &base[i];
            func_00189118(sp, *elem, *(void **)((u8 *)arg0 + 0x50));
            i++;
        } while (i < count);
    }
    func_00188F28(sp, 2);
}
