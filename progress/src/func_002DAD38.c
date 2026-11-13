typedef struct { s32 tag; f32 f0, f1, f2, f3, f4, f5, f6; } E_sort;
extern void func_002DAA98(E_sort *, E_sort *);

void func_002DAD38(E_sort *p, E_sort *end) {
    E_sort *cur = p;
    for (; cur != end; cur++) {
        E_sort v;
        f32 *s = &cur->f3;
        f32 *d0 = &v.f0;
        f32 *d3 = &v.f3;
        v.tag = cur->tag;
        v.f0 = cur->f0;
        d0[1] = s[-2];
        d0[2] = s[-1];
        d3[0] = s[0];
        d3[1] = s[1];
        d3[2] = s[2];
        v.f6 = s[3];
        func_002DAA98(cur, &v);
    }
}

u64 *func_002DEB80(u64 *start, u64 *end, u64 *value) {
    s32 n = ((s32)end - (s32)start) >> 3;
    s32 i = n;
    u64 key = *value;
    while (i > 0) {
        s32 half = i >> 1;
        u64 *mid = start + half;
        if (*mid < key) {
            start = mid + 1;
            n = n - half - 1;
        } else {
            n = half;
        }
        i = n;
    }
    return start;
}

typedef struct { s32 tag; f32 f0, f1, f2, f3, f4, f5, f6; } E_copy;

void func_002D9C98(E_copy *p, E_copy *end, E_copy *dst) {
    E_copy *d = dst;
    for (; p != end; p++) {
        if (d) {
            f32 *s = &p->f3;
            f32 *dd = &d->f3;
            d->tag = p->tag;
            d->f0 = p->f0;
            dd[-3] = s[-3];
            dd[-2] = s[-2];
            dd[-1] = s[-1];
            dd[0] = s[0];
            dd[1] = s[1];
            dd[2] = s[2];
            dd[3] = s[3];
        }
        d++;
    }
}

typedef void (*Handler)(void);
extern Handler D_00437E58;
extern char D_00439570[], D_00483D00[];
extern Handler func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void *, void *);
extern void func_003D4F40(void *);

void func_002D92E8(int p) {
    void (*raise_error)(void *) = func_003D4F40;
    Handler h;
    do {
        h = D_00437E58;
        if (!h) {
            raise_error(func_003D4938(D_00439570, D_00483D00));
            h = func_002ABA80(1);
        }
        h();
    } while (!func_002B1FC0(p));
}
