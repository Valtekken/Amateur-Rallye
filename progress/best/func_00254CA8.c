typedef struct { void **begin, **end, **limit; } Vec;
typedef struct N { struct N *next, *prev; void *value; } N;
typedef struct { s32 x, val; } F;
typedef struct { F *f0, *f1; } E;
extern N *func_002B1FC0(s32);
extern N *func_003D2910(s32);
extern s64 func_0024C788(s32 **);
extern void func_001CAD18(Vec *, void **, void **);

void func_00254CA8(s32 a0, char *src, char *v2, char *v3, N **l4, N **l5, N **l6) {
    volatile char pad[0x20];
    s32 i, n, A, B;
    E *p;
    Vec *v;
    void **q;
    Vec *dst;
    void **end;
    void *t20, *t24, *t28, *t2c;
    N **head2;
    N *volatile at;
    N *node;
    s64 r;
    v = (Vec *)(src + 0xC);
    n = v->end - v->begin;
    if (n <= 0) return;
    {
    s32 m1 = -1;
    N **volatile v4 = l4;
    for (i = 0; i < n; i++) {
        q = v->begin;
        q += i;
        p = (E *)*q;
        A = ((s32 *)p->f0)[1];
        B = ((s32 *)p->f1)[1];
        if (A == 0) {
            if (B == 0) { head2 = l6; goto nocall2; }
            goto call5;
        }
        if (B != 0) {
            if (A != B) { head2 = v4; goto nocall2; }
            goto equal;
        }
call5:
        at = *l5;
        node = func_002B1FC0(0xC);
        if (!node) node = func_003D2910(0xC);
        if (&node->value) node->value = p;
        node->next = at;
        node->prev = at->prev;
        at->prev->next = node;
        at->prev = node;
        r = func_0024C788((s32 **)p);
        if (r == m1) {
            t24 = p; dst = (Vec *)(v3 + 0xC); end = dst->end;
            if (end != dst->limit) { if (end) *end = p; dst->end++; goto next; }
            func_001CAD18(dst, end, &t24); goto next;
        }
        t20 = p; dst = (Vec *)(v2 + 0xC); end = dst->end;
        if (end != dst->limit) { if (end) *end = p; dst->end++; goto next; }
        func_001CAD18(dst, end, &t20); goto next;
nocall2:
        at = *head2;
        node = func_002B1FC0(0xC);
        if (!node) node = func_003D2910(0xC);
        if (&node->value) node->value = p;
        node->next = at;
        node->prev = at->prev;
        at->prev->next = node;
        at->prev = node;
        goto next;
equal:
        if (A == m1) {
            t28 = p; dst = (Vec *)(v2 + 0xC); end = dst->end;
            if (end != dst->limit) { if (end) *end = p; dst->end++; goto next; }
            func_001CAD18(dst, end, &t28); goto next;
        }
        t2c = p; dst = (Vec *)(v3 + 0xC); end = dst->end;
        if (end != dst->limit) { if (end) *end = p; dst->end++; goto next; }
        func_001CAD18(dst, end, &t2c);
next: ;
    }
    }
}
