extern void D_002AD390(void *);
extern void func_00292F28(void *);
extern void func_002B2028(void *);
extern s32 func_003F93CC(void *, void *, s32);
extern void *D_0040E618[];

void func_00293190(s32 *arg0) {
    s32 **b = (s32 **)arg0[0];
    while (b != (s32 **)arg0[1]) {
        s32 *p = *b;
        if (p != 0) {
            func_00292F28(p);
            s32 *blk = (s32 *)p[0];
            s32 n = (p[2] - (s32)blk) >> 2;
            if (n != 0) {
                s32 bytes = n << 2;
                if (bytes != 0) {
                    func_002B2028(blk);
                } else {
                    blk[0] = (s32)D_0040E618[-1];
                    D_0040E618[-1] = (void *)blk;
                }
            }
            D_002AD390(p);
        }
        ++b;
    }
    s32 *begin = (s32 *)arg0[0];
    s32 *end = (s32 *)arg0[1];
    func_003F93CC(begin, end, 0);
    s32 delta = (s32)end - (s32)begin;
    arg0[1] = arg0[1] - delta;
}
