extern void func_002B2028(void *);
extern s32 func_003F93CC(void *, void *, void *);
extern u32 D_0040E618[];

typedef struct {
    s32 *b;
    s32 *e;
    s32 unk8;
    s32 *c;
} Elem16;

typedef struct {
    s32 * volatile b;
    s32 * volatile e;
} List;

typedef struct {
    s32 *ob;
    s32 *oe;
    s32 unk8;
    s32 unkC;
    List inner;
} S;

void func_00264580(S *arg0) {
    s32 *ob, *oe, *ie, *cur;
    s32 d1, tmp;
    List *inner = &arg0->inner;

    ob = arg0->ob;
    oe = arg0->oe;
    func_003F93CC(ob, oe, NULL);
    tmp = (s32)arg0->oe;
    tmp = tmp - ((s32)oe - (s32)ob);
    arg0->oe = (s32 *)tmp;

    ie = inner->e;
    cur = arg0->inner.b;
    d1 = (s32)ie - (s32)cur;
    if ((u32)cur < (u32)ie) {
        do {
            Elem16 *vc = (Elem16 *)cur;
            u32 cap = (u32)vc->c;
            s32 *p = vc->e;
            s32 n = (s32)(cap - (u32)p) >> 2;
            if (n != 0) {
                s32 sz = n << 2;
                if (sz != 0) {
                    func_002B2028(p);
                    goto block;
                }
                *p = D_0040E618[-1];
                D_0040E618[-1] = (u32)p;
            }
block:
            cur = (s32 *)((char *)cur + 0x10);
        } while ((u32)cur < (u32)ie);
    }
    inner->e = (s32 *)((s32)inner->e - d1);
}
