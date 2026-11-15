extern void func_003A4BF0(s32, s32);
extern void D_002AD390(s32);
extern void func_003A4BB8(s32);

void func_0038FA38(s32 *arg0, s32 arg1) {
    func_003A4BF0((s32)(arg0 + 2), 2);
    func_003A4BF0((s32)(arg0 + 3), 2);
    if (arg1 & 1) {
        D_002AD390((s32)arg0);
    } else {
    }
}

void *func_0038F9D0(register s32 *arg0) {
    func_003A4BB8((s32)(arg0 + 2));
    func_003A4BB8((s32)(arg0 + 3));
    arg0[4] = 0;
    arg0[5] = 0;
    return arg0;
}
