s32 func_00235EF0(void *arg0, void *arg1) {
    s32 *a = (s32 *)arg0;
    s32 *b = (s32 *)arg1;
    s32 t3 = b[6];
    s32 t4 = a[6];
    s32 t2;
    if (t3 == t4) {
        a[6] = b[7];
        a[0] = b[1];
        return 1;
    }
    t2 = b[7];
    if (t2 == t4) {
        a[6] = t3;
        a[0] = b[0];
        return 1;
    }
    t4 = a[7];
    if (t3 == t4) {
        a[7] = t2;
        a[1] = b[1];
        return 1;
    }
    if (t2 == t4) {
        a[7] = t3;
        a[1] = b[0];
        return 1;
    }
    return 0;
}

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}
