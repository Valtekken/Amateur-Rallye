extern void D_002AD390(void *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];
extern u32 D_00472EE0;
extern u32 D_004737B0;

typedef struct { void *b; void *e; void *c; } Vec;
typedef struct { Vec outer; Vec inner; } S;

void func_001BB5A0(S *obj, s32 arg1) {
    volatile u64 pad16[4];
    u32 ib, oe, cur, ob;
    s32 n, m, sz, sz2, sz3, cnt;
    s32 flag;

    obj->inner.b = (void *)D_00472EE0;

    ib = (u32)obj->inner.b;
    n = (s32)((u32)obj->inner.c - ib) >> 2;
    if (n != 0) {
        sz = n << 2;
        if (sz != 0) {
            flag = arg1 & 1;
            func_002B2028((void *)ib);
            goto block_4;
        }
        *(u32 *)ib = D_0040E618[-1];
        D_0040E618[-1] = ib;
        goto block_4;
    }
block_4:
    flag = arg1 & 1;
    oe = (u32)obj->outer.e;
    cur = (u32)obj->outer.b;
    if (cur < oe) {
        do {
            Vec *vc = (Vec *)cur;
            u32 ec = (u32)vc->c;
            u32 eb = (u32)vc->b;
            m = (s32)(ec - eb) >> 2;
            if (m != 0) {
                sz2 = m << 2;
                if (sz2 != 0) {
                    func_002B2028((void *)eb);
                    goto block_13;
                }
                *(u32 *)eb = D_0040E618[-1];
                D_0040E618[-1] = eb;
            }
block_13:
            cur = (u32)((char *)cur + 12);
        } while (cur < oe);
    }
    u32 oc = (u32)obj->outer.c;
    ob = (u32)obj->outer.b;
    cnt = (s32)((oc - ob) * 0xAAAAAAABu) >> 2;
    if (cnt != 0) {
        sz3 = cnt * 12;
        if (sz3 != 0) {
            func_002B2028((void *)ob);
        } else {
            *(u32 *)ob = D_0040E618[-1];
            D_0040E618[-1] = ob;
        }
    }
    obj->inner.b = (void *)D_004737B0;
    if (flag != 0)
        D_002AD390(obj);
}
