extern void func_003B0EE0(void *);
extern void func_003B3CA0(s32, s32, void *);
extern void func_003A34D0(void *, s32);

void func_003B3180(register s32 arg0, register s32 arg1) {
    char buf[16];
    func_003B0EE0(buf);
    func_003B3CA0(arg0, arg1, buf);
    func_003A34D0(buf, 2);
}
