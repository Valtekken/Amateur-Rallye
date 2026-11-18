typedef struct Node { struct Node *next, *prev; s32 value; } Node;
extern s32 func_00251830(s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);

void func_002558C8(void *unused, Node **head, Node **pos) {
    struct { Node *p; char pad[12]; } result, at;
    Node *first = (*head)->next;
    if (first != *head) do {
        s32 val = first->value;
        if (func_00251830(val) != 0) {
            Node *p;
            at.p = *pos;
            p = func_002B1FC0(12);
            if (!p) p = func_003D2910(12);
            if (&p->value) p->value = val;
            p->next = at.p;
            p->prev = at.p->prev;
            at.p->prev->next = p;
            at.p->prev = p;
            result.p = p;
        }
        first = first->next;
    } while (first != *head);
}
