s32 func_003A0690(void *, s32);
extern void func_003AA8A8(void *, s32);

void *func_003A1470(register void *arg0, register s32 arg1, register s32 arg2) {
    register void *s2 = arg0;
    register s32 s1 = arg1;
    register s32 s0 = arg2;

    func_003AA8A8(s2, s0);
    func_003A0690(s2, s1);
    *(s32 *)s2 = *(s32 *)s2;
    *(s32 *)((u8 *)s2 + 4) = *(s32 *)s2;
    *(s32 *)((u8 *)s2 + 8) = *(s32 *)s2 + (s1 * 0x1C);
    return s2;
}
