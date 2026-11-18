s32 func_00235F78(void *arg0, void *arg1) {
    s32 *a = arg0;
    s32 *b = arg1;
    if (b[0] == a[0]) {
        a[6] = b[7];
        a[0] = b[1];
        return 1;
    }
    if (b[1] == a[0]) {
        a[6] = b[6];
        a[0] = b[0];
        return 1;
    }
    if (b[0] == a[1]) {
        a[7] = b[7];
        a[1] = b[1];
        return 1;
    }
    if (b[1] != a[1]) {
        return 0;
    }
    a[7] = b[6];
    a[1] = b[0];
    return 1;
}
