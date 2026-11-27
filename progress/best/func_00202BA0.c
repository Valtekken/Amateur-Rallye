typedef struct Inner { s32 *begin, *end, *cap; } Inner;
typedef struct Outer { Inner *begin, *end, *cap; } Outer;
extern void func_00202A50(void);
extern void func_001570B0(void *, s32 *, s32, void *);
extern void func_002B2028(void *);
extern void func_003F93CC(s32 *, s32 *, s32);
extern void func_001551C0(void *, s32 *, s32, s32 *);
extern s32 D_0040E618[];

void func_00202BA0(Outer *a, u32 n)
{
    Inner *p;
    s32 *q;
    Inner tmp;
    s32 n_old;
    s32 sp20v;
    s32 *sp20;

    func_00202A50();

    tmp.begin = 0; tmp.end = 0; tmp.cap = 0;

    n_old = (s32)((u32)((char *)a->end - (char *)a->begin) * 0xAAAAAAABu) >> 2;

    if (n < (u32)n_old) {
        Inner *elem = a->begin + n;
        Inner *end2 = a->end;
        s32 sub = (char *)end2 - (char *)elem;
        if (elem < end2) {
            p = elem;
            do {
                q = p->begin;
                {
                    s32 size = p->end - q;
                    if (size != 0) {
                        if (size * 4 != 0) func_002B2028(q);
                        else { *q = D_0040E618[-1]; D_0040E618[-1] = (s32)q; }
                    }
                }
                p += 1;
            } while (p < end2);
        }
        a->end = (Inner *)((char *)a->end - sub);
    } else {
        func_001570B0(a, (s32 *)a->end, (s32)(n - (u32)n_old), &tmp);
    }

    /* release tmp */
    {
        s32 *tb = tmp.begin, *te = tmp.end;
        s32 size = te - tb;
        if (size != 0) {
            if (size * 4 != 0) func_002B2028(tb);
            else { *tb = D_0040E618[-1]; D_0040E618[-1] = (s32)tb; }
        }
    }

    if ((s32)n > 0) {
        s32 i;
        sp20v = 0; sp20 = &sp20v;
        for (i = 0; i < (s32)n; i++) {
            Inner *pp = a->begin + i;
            s32 *ib = pp->begin, *ie = pp->end;
            s32 inner_n = ie - ib;
            s32 *t16 = ib + n;
            sp20v = 0;
            if (n < (u32)inner_n) {
                func_003F93CC(t16, ie, 0);
                pp->end = (s32 *)((char *)pp->end - ((char *)ie - (char *)t16));
            } else {
                func_001551C0(pp, ie, (s32)(n - (u32)inner_n), sp20);
            }
        }
    }
}
