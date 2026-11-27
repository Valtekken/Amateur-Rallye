extern void func_001FEC80(void *arg0, void *arg1, void *arg2, void *arg3);

void *func_001FEC50(void *arg0, void *arg1, void *arg2) {
    int sp[4];

    func_001FEC80(arg0, arg1, arg2, sp);
    return arg0;
}
