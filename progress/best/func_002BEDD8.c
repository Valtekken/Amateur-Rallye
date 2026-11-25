extern void SignalSema_2(s32);
void func_002BEDD8(s32 *arg0, s32 arg1) {
    s32 n = arg1;
    if (*arg0 == -1) return;
    n = n - 1;
    if (n == -1) return;
    do {
        n = n - 1;
        SignalSema_2(*arg0);
    } while (n != -1);
}
