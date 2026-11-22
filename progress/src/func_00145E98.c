extern void func_001D4040(void *, const char *);
extern char D_0044BEF0[], D_0044BF00[];
extern char D_0044CB40[];
void *func_00145E98(void *arg0) {
    u32 tmp[4];
    s32 *p = arg0;
    func_001D4040(tmp, D_0044BEF0);
    p[0] = -1;
    p[3] = 0;
    p[5] = (p[4] = 0);
    p[1] = (s32)tmp[0];
    p[0] = -1;
    p[2] = (s32)D_0044CB40;
    func_001D4040(p + 5, D_0044BF00);
    return p;
}
