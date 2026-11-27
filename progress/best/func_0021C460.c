typedef struct {
    s32 a;
    f32 b, c, d, e, f, g, h, i;
} Item;

extern void func_0021C370(Item *, Item *);

static inline void cp(volatile Item *dst, Item *src) {
    dst->a = src->a;
    dst->b = src->b;
    dst->c = src->c;
    dst->d = src->d;
    dst->e = src->e;
    dst->f = src->f;
    dst->g = src->g;
    dst->h = src->h;
    dst->i = src->i;
}

void func_0021C460(Item *first, Item *last) {
    Item *p;
    if (first == last) return;
    for (p = first + 1; p != last; p++) {
        volatile Item tmp, copy;
        int cmp;
        cp(&tmp, p);
        cmp = tmp.i < first->i;
        if (cmp) {
            int n = p - first;
            Item *q = p;
            if (n > 0) do {
                cp(q, q - 1);
                --q;
                --n;
            } while (n > 0);
            cp(first, (Item *)&tmp);
        } else {
            cp(&copy, (Item *)&tmp);
            func_0021C370(p, (Item *)&copy);
        }
    }
}
