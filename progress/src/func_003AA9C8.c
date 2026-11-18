extern void func_003AD108(void *);
extern void func_003B0C28(void *, s32, void *);
extern void func_00374AB8(void *, s32);
void func_003AA9C8(register void *arg0, register s32 arg1) {
    char x[0x20];
    func_003AD108(x);
    func_003B0C28(arg0, arg1, x);
    func_00374AB8(x, 2);
}
