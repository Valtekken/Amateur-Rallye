/* identical to func_00234D08 (matched), with its names changed by decompdecomp */
int func_0024C470(int *arg0, int *arg1) {
    int a = arg0[0];
    int b = arg1[0];
    if (a == b) return b;
    int c = arg1[1];
    if (a == c) return c;
    int d = arg0[1];
    if (d == b) return d;
    if (d != c) return 0;
    return d;
}
