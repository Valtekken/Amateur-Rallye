/* identical to func_003B3180 (matched), with its names changed by decompdecomp */
extern void func_003ACFB8(void *);
extern void func_003B0588(s32, s32, void *);
extern void func_003A5AA8(void *, s32);

void func_003AA0E8(register s32 arg0, register s32 arg1) {
    char buf[16];
    func_003ACFB8(buf);
    func_003B0588(arg0, arg1, buf);
    func_003A5AA8(buf, 2);
}
