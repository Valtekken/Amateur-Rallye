typedef struct Node { struct Node *next, *prev; s32 value; } Node;
typedef struct { Node *p; char pad[12]; } Holder;
extern s32 func_0024C568(s32, s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);

s32 func_002557E0(void *unused, Node **pos, Node **first) {
    Holder result, at;
    Node *cur, *p;
    s32 v4, v18, r;

    cur = (*pos)->next;
    v4 = (*pos)->prev->value;
    if (cur != *pos) do {
        v18 = cur->value;
        r = func_0024C568(v4, v18);
        if (!r) return 0;
        at.p = *first;
        p = func_002B1FC0(12);
        if (!p) p = func_003D2910(12);
        if (&p->value) p->value = r;
        p->next = at.p;
        p->prev = at.p->prev;
        at.p->prev->next = p;
        at.p->prev = p;
        result.p = p;
        cur = cur->next;
        v4 = v18;
    } while (cur != *pos);
    return 1;
}
