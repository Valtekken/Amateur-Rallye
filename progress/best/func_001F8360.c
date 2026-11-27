extern void func_001D2458(void *);
extern void func_001D2D48(void *, s32, s32);
extern void func_001D2488(void *, void *);
extern s32 func_001CE2F8(void *);
extern s32 func_001D24B8(void *, s32, s32, s32);
extern void D_002AD390(void *);

void *func_001F8360(char *arg0, s32 arg1) {
    void *sp0[4], *sp10[4];
    char *p;
    void *r;
    s32 val;

    func_001D2458(sp0);
    func_001D2D48(sp0, 0, 0x7FFFFFFF);
    func_001D2488(sp10, arg0 + 0x14);
    func_001D2D48(sp10, 0, 0x7FFFFFFF);
    val = (s32)sp0[0];
    if (func_001D24B8(sp10, 0, func_001CE2F8(sp10), val) != -1) {
        D_002AD390(sp10[0]);
        D_002AD390(sp0[0]);
        return arg0;
    }
    p = *(char **)arg0;
    while (p != 0) {
        r = func_001F8360(p, arg1);
        if (r != 0) {
            D_002AD390(sp10[0]);
            D_002AD390(sp0[0]);
            return r;
        }
        p = *(char **)(p + 4);
    }
    D_002AD390(sp10[0]);
    D_002AD390(sp0[0]);
    return 0;
}
