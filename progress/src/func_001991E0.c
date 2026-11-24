extern void func_001D4040(void *, const char *);
extern char D_00471BA0[];
extern char D_00471BB0[];
extern char D_00473958[];

void *func_001991E0(void *arg0) {
    s32 sp0[4];
    s32 sp10[4];
    s32 *p = (s32 *)arg0;
    s32 one = 1;
    s32 two;

    func_001D4040(sp0, D_00471BA0);
    two = 2;
    p[3] = one;
    p[6] = one;
    p[8] = 0;
    p[0] = 0;
    p[4] = 0;
    p[5] = 0;
    p[1] = sp0[0];
    p[2] = (s32)D_00473958;
    p[7] = two;
    func_001D4040(sp10, D_00471BB0);
    p[11] = (p[9] = one);
    p[8] = sp10[0];
    p[10] = 0;
    p[12] = 0;
    p[13] = 0;
    return arg0;
}
