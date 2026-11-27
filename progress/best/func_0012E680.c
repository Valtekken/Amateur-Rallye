extern void func_003FA310(char *, const char *, ...);
extern void *func_0021F4B0(void);
extern void func_001D4040(void *, const char *);
extern void *func_0021E9C0(void *, void *);
extern const char D_00449700[], D_00449710[], D_00449720[];

void func_0012E680(s32 arg0, s32 arg1)
{
    char buf[16], key[16];
    s32 flag = arg1 & 1;
    s32 i;
    void *root, *obj, *p;

    for (i = 1; i < 11; i++) {
        func_003FA310(buf, D_00449700, i);
        root = func_0021F4B0();
        func_001D4040(key, buf);
        obj = func_0021E9C0(root, key);
        if (obj != 0) {
            p = *(void **)((char *)obj + 0x4C);
            if (p != 0) *(s64 *)((char *)p + 0x78) = (*(s64 *)((char *)p + 0x78) & -2) | flag;
        }
    }
    root = func_0021F4B0();
    func_001D4040(buf, D_00449710);
    obj = func_0021E9C0(root, buf);
    if (obj != 0) {
        p = *(void **)((char *)obj + 0x4C);
        if (p != 0) *(s64 *)((char *)p + 0x78) = (*(s64 *)((char *)p + 0x78) & -2) | (arg1 & 1);
    }
    root = func_0021F4B0();
    func_001D4040(buf, D_00449720);
    obj = func_0021E9C0(root, buf);
    if (obj != 0) {
        p = *(void **)((char *)obj + 0x4C);
        if (p != 0) *(s64 *)((char *)p + 0x78) = (*(s64 *)((char *)p + 0x78) & -2) | (arg1 & 1);
    }
}
