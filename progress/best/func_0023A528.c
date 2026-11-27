extern void D_002AD390(void *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];

typedef struct { void *b; void *e; void *c; } Vec;

typedef struct {
    void *unk0;   /* +0x0 */
    Vec v1;       /* +0x4 */
    Vec v2;       /* +0x10 (Vec elements) */
    Vec v3;       /* +0x1C */
} S;

void func_0023A528(S *arg0, s32 arg1)
{
    void *ib, *cur, *end;
    s32 n, flag;
    Vec *v1, *v2;
    void *ob;
    void *vb;
    s32 n2;

    /* free v3 at +0x1C */
    ib = arg0->v3.b;
    n = ((s32)((u32)arg0->v3.c - (u32)ib)) >> 2;
    if (n != 0)
    {
        s32 sz = n << 2;
        if (sz != 0)
            func_002B2028(ib);
        else
        {
            *(void **)ib = (void *)D_0040E618[-1];
            D_0040E618[-1] = (u32)ib;
        }
    }

    flag = arg1 & 1;

    /* free each inner Vec in v2 at +0x10 */
    v2 = &arg0->v2;
    cur = v2->b;
    end = v2->e;
    if ((u32)cur < (u32)end)
    {
        do
        {
            Vec *inner = (Vec *)cur;
            void *eb;
            s32 m;
            m = ((s32)((u32)inner->c - (u32)inner->b)) >> 2;
            eb = inner->b;
            if (m != 0)
            {
                s32 sz2 = m << 2;
                if (sz2 != 0)
                    func_002B2028(eb);
                else
                {
                    *(void **)eb = (void *)D_0040E618[-1];
                    D_0040E618[-1] = (u32)eb;
                }
            }
            cur = (char *)cur + 12;
        } while ((u32)cur < (u32)end);
    }

    /* free v2 buffer at +0x10 */
    ob = v2->b;
    {
        u32 oc = (u32)v2->c;
        s32 cnt = ((s32)(((oc - (u32)ob) * 0xAAAAAAABu)) >> 2);
        if (cnt != 0)
        {
            s32 sz3 = cnt * 12;
            if (sz3 != 0)
                func_002B2028(ob);
            else
            {
                *(void **)ob = (void *)D_0040E618[-1];
                D_0040E618[-1] = (u32)ob;
            }
        }
    }

    /* free v1 at +0x4 */
    v1 = &arg0->v1;
    vb = v1->b;
    n2 = ((s32)((u32)v1->c - (u32)vb)) >> 2;
    if (n2 != 0)
    {
        s32 sz4 = n2 << 2;
        if (sz4 != 0)
            func_002B2028(vb);
        else
        {
            *(void **)vb = (void *)D_0040E618[-1];
            D_0040E618[-1] = (u32)vb;
        }
    }

    if (flag != 0)
        D_002AD390(arg0);
}
