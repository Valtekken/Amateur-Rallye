s32 func_003A3690(void *, s32);
extern void func_003A40D0(void *, s32);

void *func_003A16C0(register void *arg0, register s32 arg1, register s32 arg2) {
    register void *s2 = arg0;
    register s32 s1 = arg1;
    register s32 s0 = arg2;

    func_003A3690(s2, s0);
    func_003A40D0(s2, s1);
    
    s32 val = *(s32 *)s2;
    *(s32 *)s2 = val;
    *(s32 *)((u8 *)s2 + 4) = val;
    *(s32 *)((u8 *)s2 + 8) = val + (s1 << 2);
    
    return s2;
}
