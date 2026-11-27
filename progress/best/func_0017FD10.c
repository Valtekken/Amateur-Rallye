extern void *D_00473E10;
extern void *D_0044DCD8;
extern s32 D_0040E618[];
extern void D_002AD530(void *);
extern void func_002B2028(void *);
extern void D_002AD390(void *);

void func_0017FD10(void *arg0, s32 arg1) {
    void *p;
    s32 *v;

    *(void **)((char *)arg0 + 8) = &D_00473E10;

    p = *(void **)((char *)arg0 + 0x1C);
    if (p != 0) D_002AD530(p);
    p = *(void **)((char *)arg0 + 0x20);
    if (p != 0) D_002AD530(p);
    p = *(void **)((char *)arg0 + 0x24);
    if (p != 0) D_002AD530(p);
    p = *(void **)((char *)arg0 + 0x28);
    if (p != 0) D_002AD530(p);
    p = *(void **)((char *)arg0 + 0x2C);
    if (p != 0) D_002AD530(p);
    p = *(void **)((char *)arg0 + 0x44);
    if (p != 0) D_002AD530(p);
    p = *(void **)((char *)arg0 + 0x30);
    if (p != 0) D_002AD530(p);
    p = *(void **)((char *)arg0 + 0x34);
    if (p != 0) D_002AD530(p);

    v = (s32 *)((char *)arg0 + 0xC);
    if ((u32)v[0] < (u32)v[1]) {
        s32 it = v[0] + 8;
        while ((u32)it < (u32)v[1]) {
            it += 8;
        }
    }

    {
        void *begin = (void *)v[0];
        s32 capCount = (v[2] - (s32)begin) >> 3;
        if (capCount != 0) {
            if ((capCount * 8) != 0) {
                func_002B2028(begin);
            } else {
                *(s32 *)begin = D_0040E618[-1];
                D_0040E618[-1] = (s32)begin;
            }
        }
    }

    *(void **)((char *)arg0 + 8) = &D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
