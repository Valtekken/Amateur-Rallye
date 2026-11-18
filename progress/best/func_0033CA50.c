typedef struct { f32 f0,f1,f2,f3,f4,f5,f6,f7; s32 i8; } Elem;
typedef struct { Elem *first, *last, *cap; } Buff;
extern Elem *func_001CA150(Elem *, Elem *, Elem *, s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_002B2028(void *);
extern void *func_00152D28(s32, void *);
extern u32 D_0040E618[];

static inline void ecopy(Elem *d, Elem *s) {
    d->f0=s->f0; d->f1=s->f1; d->f2=s->f2; d->f3=s->f3;
    d->f4=s->f4; d->f5=s->f5; d->f6=s->f6; d->f7=s->f7;
    d->i8=s->i8;
}
static inline void *alloc_or_fallback(s32 n) {
    void *p = func_002B1FC0(n);
    return p ? p : func_003D2910(n);
}
static inline void *get_free(void) {
    u32 h = D_0040E618[-1];
    if (!h) return func_00152D28(0, (void *)h);
    D_0040E618[-1] = *(u32 *)h;
    return (void *)h;
}

void func_0033CA50(Buff *b, Elem *where, Elem *src) {
    Elem *last = b->last;
    if (last != b->cap) {
        Elem tmp;
        s32 n;
        Elem *d, *s;
        if (last) ecopy(last, last - 1);
        b->last = last + 1;
        n = (last - 1) - where;
        ecopy(&tmp, src);
        if (n > 0) {
            d = last - 1;
            s = last - 2;
            do {
                ecopy(d, s);
                d -= 1;
                s -= 1;
            } while (--n > 0);
        }
        ecopy(where, &tmp);
    } else {
        s32 count = last - b->first;
        s32 newcount = count ? count * 2 : 1;
        s32 newsize = newcount * 0x24;
        Elem *newbuf;
        Elem *ip, *newend;
        if (newsize) newbuf = (Elem *)alloc_or_fallback(newsize);
        else newbuf = (Elem *)get_free();
        ip = func_001CA150(b->first, where, newbuf, 0);
        if (ip) ecopy(ip, src);
        newend = func_001CA150(where, last, ip + 1, 0);
        {
            s32 oc = b->cap - b->first;
            if (oc) {
                if (oc * 0x24) func_002B2028(b->first);
                else {
                    u32 h = D_0040E618[-1];
                    *(u32 *)b->first = h;
                    D_0040E618[-1] = (u32)b->first;
                }
            }
        }
        b->first = newbuf;
        b->last = newend;
        b->cap = newbuf + newcount;
    }
}
