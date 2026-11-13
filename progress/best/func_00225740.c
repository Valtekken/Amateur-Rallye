extern void D_002AD390(void *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];

void func_00225740(void *arg0, s32 arg1) {
    void **begin = *(void ***)(((char *)arg0) + 0);
    void **end = *(void ***)(((char *)arg0) + 4);
    void **p = begin;
    while (p != end) {
        void *o = *p;
        if (o != 0) {
            void *sub = (char *)o + 4;
            s32 a = *(s32 *)((char *)o + 4);
            s32 b = *(s32 *)((char *)sub + 4);
            if (a < b) {
                for (s32 *q = (s32 *)a; q < (s32 *)b; q++) {
                    (void)q;
                }
            }
            void *buf = *(void **)sub;
            s32 sz = *(s32 *)((char *)sub + 8);
            sz = (sz - (s32)buf) >> 2;
            if (sz != 0) {
                s32 bytes = sz << 2;
                if (bytes == 0) {
                    *(void **)buf = (void *)D_0040E618[-1];
                    D_0040E618[-1] = (u32)buf;
                } else {
                    func_002B2028(buf);
                }
            }
            D_002AD390(o);
        }
        p++;
    }
    void *buf0 = *(void **)((char *)arg0 + 0);
    void *buf8 = *(void **)((char *)arg0 + 8);
    s32 cnt = ((s32)buf8 - (s32)buf0) >> 2;
    if (cnt != 0) {
        s32 bytes = cnt << 2;
        if (bytes == 0) {
            *(void **)buf0 = (void *)D_0040E618[-1];
            D_0040E618[-1] = (u32)buf0;
        } else {
            func_002B2028(buf0);
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
