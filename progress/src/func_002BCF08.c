extern void func_002BC938(void *, void *);
extern void func_002BEE48(s32, s32);

s32 func_002BCF08(void *arg0, void *arg1) {
    void *y = (u8 *)arg1 + 0x64;
    void *x = (u8 *)arg0 + 0x28;
    *(void **)((u8 *)arg1 + 0x6c) = arg1;
    func_002BC938(y, x);
    func_002BEE48(*(s32 *)((u8 *)arg0 + 0x14), 1);
    return 1;
}
