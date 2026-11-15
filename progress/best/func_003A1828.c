extern void func_003A1508(void *, void *);
extern void func_003A1758(void *, void *);

void func_003A1828(register void *arg0, register void *arg1) {
    register void *s1 = arg0;
    register void *s0 = arg1;
    func_003A1508(s1, s0);
    func_003A1758((u8 *)s1 + 0xC, (u8 *)s0 + 0xC);
}

s32 func_002AFEB8(s32, s32);
extern void func_003A1828(s32, s32);

void func_003A18A0(register s32 arg0, register s32 arg1) {
    register s32 s0 = arg0;
    register s32 s1 = arg1;
    register s32 s2;
    s2 = func_002AFEB8(0x18, s0);
    if (s2 != 0) {
        func_003A1828(s2, s1);
    }
}

extern void func_003A5DC8(s32, s32);
void func_003A1C78(s32 arg0, s32 arg1, s32 arg2) {
    while (arg0 != arg1) {
        func_003A5DC8(arg0, arg2);
        arg0 += 0x18;
    }
}

extern void func_003AD1B8(s32, s32, s32);
void func_003A9768(s32 arg0, s32 arg1, s32 arg2) {
    func_003AD1B8(arg0, arg1, arg0);
}
