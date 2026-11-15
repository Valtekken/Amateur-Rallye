extern void func_003A50F0(void *, void *);

void *func_003A06F0(register void *arg0, register void *arg1) {
    register void *s1 = arg0;
    register void *s0 = arg1;
    func_003A50F0(s1, s0);
    func_003A50F0((u8 *)s1 + 0xC, (u8 *)s0 + 0xC);
    *(s32 *)((u8 *)s1 + 0x18) = *(s32 *)((u8 *)s0 + 0x18);
    return s1;
}
