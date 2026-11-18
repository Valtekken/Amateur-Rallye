extern s32 func_003CD828(void *, s32);
extern s32 func_003CD948(s32, s32, s32, s32);
extern s32 func_003FA9B8(s32);
extern s32 D_00436208[];

void **func_003D0A18(void **arg0, s32 arg1) {
    s32 *d = D_00436208;
    void *p;
    if (d[3] != 0) {
        p = func_003CD828(d, 0);
    } else {
        d[2]++;
        p = (void *)&d[4];
    }
    *arg0 = p;
    func_003CD948(arg1, 0, 0xFFFFFFFF, func_003FA9B8(arg1));
    return arg0;
}
