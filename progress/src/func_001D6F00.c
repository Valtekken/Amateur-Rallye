void func_001D7000(void *arg0);

void *func_001D6F00(void *arg0) {
    volatile char pad[0x10];
    ((s32 *)arg0)[0] = 0;
    ((s32 *)arg0)[1] = 0;
    ((s32 *)arg0)[2] = 0;
    func_001D7000(arg0);
    return arg0;
}
