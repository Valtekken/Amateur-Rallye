typedef struct { u32 *begin; u32 *end; u32 *cap; } Vec;

extern u32 D_0040E618[];
extern u32 func_00152D28(u32,u32,u32*);
extern u32 func_00155D80(u32*,u32*,u32*);
extern u32 func_001C94C0(u32*,u32*,u32*);
extern u32 func_001C94F8(u32*,s32,u32*);
extern u32 func_002B1FC0(u32,u32,u32*);
extern u32 func_002B2028(u32);
extern u32 func_003D2910(u32);

void func_001C9528(Vec *v, u32 *p, s32 n, u32 *q) {
    u32 *begin = v->begin;
    u32 *end = v->end;
    u32 *cap = v->cap;
    s32 count, need, tot;
    u32 nsz;
    u32 *nbuf, *d;

    if ((u32)n == 0) return;

    count = (s32)((u32)end - (u32)p) >> 2;
    need = n - count;
    nsz = (u32)(need << 2);
    tot = (s32)((u32)end - (u32)begin) >> 2;

    if (tot < (s32)nsz) {
        nbuf = func_002B1FC0(nsz, 0, &nsz);
        if (!nbuf) nbuf = func_003D2910(nsz);
    } else {
        if (D_0040E618[-1]) {
            nbuf = D_0040E618[-1];
            D_0040E618[-1] = *(u32*)nbuf;
        } else {
            nbuf = func_00152D28(0, 0, &D_0040E618[-1]);
        }
    }
    d = func_00155D80(begin, p, nbuf);
    d = func_001C94F8(d, n, q);
    d = func_00155D80(p, end, d);
    tot = (s32)((u32)cap - (u32)begin) >> 2;
    if (tot != 0) {
        u32 sz = (u32)(tot << 2);
        if (sz != 0) {
            func_002B2028((u32)begin);
        } else {
            *(u32*)begin = D_0040E618[-1];
            D_0040E618[-1] = (u32)begin;
        }
    }
    v->begin = nbuf;
    v->end = d;
    v->cap = nbuf + (nsz >> 2);
}
