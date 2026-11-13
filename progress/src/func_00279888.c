/* identical to func_0021CA00 (matched), with its names changed by decompdecomp */
extern u32 D_0040E618[];
extern u32 D_0047ABF0[];
extern void func_00279658(void *);
extern void func_00204BD8(void *);
extern void func_002B2028(void *);
extern void D_002AD390(void *);

static inline void vecDrop(u32 *p) {
    u32 *c = p[2];
    u32 *b = p[0];
    s32 n = ((s32)c - (s32)b) >> 2;
    if (n != 0) {
        if ((n << 2) != 0) {
            func_002B2028(b);
        } else {
            u32 tmp = D_0040E618[-1];
            *(u32 *)b = tmp;
            D_0040E618[-1] = (u32)b;
        }
    }
}

void func_00279888(void *arg0, u32 arg1) {
    u32 *obj = (u32 *)arg0;
    u32 destroy = arg1;

    *(u32 *)obj = (u32)D_0047ABF0;
    func_00279658(obj);
    func_00204BD8(obj);
    vecDrop(obj + 7);
    vecDrop(obj + 4);
    vecDrop(obj + 1);
    if (destroy & 1) {
        D_002AD390(obj);
    }
}
