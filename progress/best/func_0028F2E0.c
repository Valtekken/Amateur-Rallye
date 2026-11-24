extern s32 func_0028F600(s32);
extern void func_0028F658(void *, void *, s32, void *);

void func_0028F2E0(void *arg0, void *arg1) {
    void *p;
    s32 x;

    *(void **)((char *)arg0 + 0x1C) = arg1;
    p = *(void **)((char *)arg1 + 0x4C);
    if (p != NULL) {
        x = *(s32 *)((char *)p + 8);
        if (*(s32 *)((char *)arg0 + 0x14) == 0) {
            func_0028F600(x - 0x28);
        } else {
            func_0028F658(arg0, arg1, x - 0x28, (char *)arg0 + 0x18);
        }
        *(s32 *)((char *)arg0 + 0xC) = 1;
    }
}
