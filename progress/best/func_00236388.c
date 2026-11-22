extern void func_00272EF8(void *);
extern void *D_00426610;
typedef struct { f32 a,b,c,d; s32 e; } Item;
typedef struct { Item *first, *last; } Arr;
typedef struct { Item *base, *cur, *end; } Cont;
extern Cont D_00426618;

s32 func_00236388(Arr *arg0) {
    s32 n = arg0->last - arg0->first;
    s32 cnt, i, off;
    if (n == 0) return -1;
    if (D_00426610 != 0) return -1;
    cnt = D_00426618.cur - D_00426618.base;
    if (n > 0) {
        i = n; off = 0;
        do {
            Item *src = (Item *)((u8 *)arg0->first + off);
            if (D_00426618.cur != D_00426618.end) {
                if (D_00426618.cur != 0) {
                    Item *dst = D_00426618.cur;
                    dst->a = 0; dst->b = 0; dst->c = 0;
                    dst->a = src->a; dst->b = src->b; dst->c = src->c;
                    dst->d = src->d; dst->e = src->e;
                }
                D_00426618.cur++;
            } else {
                func_00272EF8(&D_00426618);
            }
            i--; off += 20;
        } while (i != 0);
    }
    return cnt;
}
