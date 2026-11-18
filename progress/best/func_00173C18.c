extern void func_00178260(void *);
extern void func_002698B8(void *);
void func_00173C18(void *arg0) {
    s32 i, n1, n2;
    void **base;
    u32 off;
    void *e;
    n1 = (*(s32 *)((u8 *)arg0 + 0x24) - *(s32 *)((u8 *)arg0 + 0x20)) >> 2;
    if (n1 > 0) {
        i = 0;
        do {
            base = *(void ***)((u8 *)arg0 + 0x20);
            off = i << 2;
            e = *(void **)((u8 *)base + off);
            func_002698B8(*(void **)((u8 *)e + 0x18));
            i++;
        } while (i < n1);
    }
    n2 = (*(s32 *)((u8 *)arg0 + 0x18) - *(s32 *)((u8 *)arg0 + 0x14)) >> 2;
    if (n2 > 0) {
        i = 0;
        do {
            base = *(void ***)((u8 *)arg0 + 0x14);
            off = i << 2;
            e = *(void **)((u8 *)base + off);
            func_00178260(e);
            i++;
        } while (i < n2);
    }
}
