extern void func_00167CA8(void *, s32, s32);
extern void func_00167DB8(s32, s32, void *);

void func_00167D68(s32 arg0, s32 arg1, s32 arg2) {
    s32 buf[4];
    func_00167CA8(buf, arg0, arg1);
    func_00167DB8(arg0, arg2, buf);
}
