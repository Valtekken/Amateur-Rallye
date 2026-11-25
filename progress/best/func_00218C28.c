extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32);
extern void func_002B2028(void *);
extern void func_003F93CC(void *, void *, s32);
extern u8 D_0040E618[64];

typedef struct { u16 *begin; u16 *end; u16 *cap; } Arr;
typedef struct { u16 *begin; u16 *end; } Arr2;

Arr *func_00218C28(Arr *a0, Arr2 *a1) {
    s32 n, m, k, oldcap;
    u16 *nb, *src;
    void **head;
    if (a1 == (Arr2 *)a0) return a0;
    n = a1->end - a1->begin;
    m = a0->cap - a0->begin;
    if ((u32)m >= (u32)n) {
        k = a0->end - a0->begin;
        if ((u32)k >= (u32)n) {
            func_003F93CC(a0->begin, a1->begin, n * 2);
            a0->end = a0->begin + n;
        } else {
            func_003F93CC(a0->begin, a1->begin, k * 2);
            src = a1->begin + k;
            func_003F93CC(a0->end, src, (a1->end - src) * 2);
            a0->end = a0->begin + n;
        }
        return a0;
    }
    if (n != 0) {
        nb = func_002B1FC0(n * 2);
        if (nb == NULL) nb = func_003D2910(n * 2);
    } else {
        nb = NULL;
    }
    func_003F93CC(nb, a1->begin, n * 2);
    oldcap = a0->cap - a0->begin;
    if (oldcap != 0) {
        if (oldcap * 2 != 0) {
            func_002B2028(a0->begin);
        } else {
            head = (void **)(D_0040E618 - 4);
            *(void **)a0->begin = *head;
            *head = a0->begin;
        }
    }
    a0->begin = nb;
    a0->cap = nb + n;
    a0->end = a0->begin + n;
    return a0;
}
