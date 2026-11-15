extern void func_003A4BF0(s32, s32);
extern void D_002AD390(s32);

void func_0038FA38(register s32 *arg0, s32 arg1) {
    func_003A4BF0((s32)(arg0 + 3), 2);
    func_003A4BF0((s32)(arg0 + 2), 2);
    if (arg1 & 1) {
        D_002AD390((s32)arg0);
    } else {
    }
}
