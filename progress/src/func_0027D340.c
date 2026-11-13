extern void D_002AD390(void *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];

typedef struct { void *b; void *e; void *c; } Vec;
typedef struct { Vec outer; Vec inner; } S;

void func_0027D340(S *arg0, s32 arg1) {
    void *ib, *oe, *cur, *ob;
    s32 n, m, sz, sz2, sz3, cnt;
    s32 flag;

    ib = arg0->inner.b;
    n = (s32)((u32)arg0->inner.c - (u32)ib) >> 2;
    if (n != 0) {
        sz = n << 2;
        if (sz != 0) {
            flag = arg1 & 1;
            func_002B2028(ib);
            goto block_4;
        }
        *(void **)ib = (void *)D_0040E618[-1];
        D_0040E618[-1] = (u32)ib;
        goto block_4;
    }
block_4:
    flag = arg1 & 1;
    oe = arg0->outer.e;
    cur = arg0->outer.b;
    if ((u32)cur < (u32)oe) {
        do {
            Vec *vc = (Vec *)cur;
            u32 ec = (u32)vc->c;
            void *eb = vc->b;
            m = (s32)(ec - (u32)eb) >> 2;
            if (m != 0) {
                sz2 = m << 2;
                if (sz2 != 0) {
                    func_002B2028(eb);
                    goto block_13;
                }
                *(void **)eb = (void *)D_0040E618[-1];
                D_0040E618[-1] = (u32)eb;
            }
block_13:
            cur = (Vec *)((char *)cur + 12);
        } while ((u32)cur < (u32)oe);
    }
    u32 oc = (u32)arg0->outer.c;
    ob = arg0->outer.b;
    cnt = (s32)((oc - (u32)ob) * 0xAAAAAAABu) >> 2;
    if (cnt != 0) {
        sz3 = cnt * 12;
        if (sz3 != 0) {
            func_002B2028(ob);
        } else {
            *(void **)ob = (void *)D_0040E618[-1];
            D_0040E618[-1] = (u32)ob;
        }
    }
    if (flag != 0)
        D_002AD390(arg0);
}
