extern int func_003F9698(const char *, ...);
extern char D_00477FA0[];
extern char D_00477FB8[];
extern char D_00477FF8[];

typedef struct Elem {
    struct Elem *next;
    s32 pad;
    char *str;
} Elem;
typedef struct Node {
    char *name;
    Elem *a;
    Elem *b;
} Node;
typedef struct Ctx {
    Node *start;
    Node *end;
} Ctx;

static inline void count_elems(Elem *head, u32 *cnt) {
    *cnt = 0;
    Elem *p = head->next;
    if (p == head) return;
    do { p = p->next; *cnt = *cnt + 1; } while (p != head);
}

void func_001F8C10(Ctx *arg0) {
    Node *node;
    u32 n0, n1, n2;

    for (node = arg0->start; node != arg0->end; node = (Node *)((char *)node + 0xC)) {
        func_003F9698(D_00477FA0, node->name);
        count_elems(node->a, &n0);
        count_elems(node->b, &n1);
        if (n0 != n1) {
            func_003F9698(D_00477FB8, n0);
            return;
        }
        {
            Elem *ea = node->a->next;
            Elem *eb = node->b->next;
            u32 i = 0;
            do {
                count_elems(node->a, &n2);
                if (i >= n2) break;
                func_003F9698(D_00477FF8, ea->str, eb->str);
                i++;
                ea = ea->next;
                eb = eb->next;
            } while (1);
        }
    }
}
