extern void func_002AF340(void *);

typedef struct Child Child;
struct Child {
    u32 unk0;
    u32 unk4;
    u32 start;
    u32 len;
};

typedef struct Node Node;
struct Node {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    Child **children;
    u32 count;
    Node *next;
};

extern Node *D_00494CD0;

void *func_002AF480(u32 arg0) {
    Node *n = D_00494CD0;

    while (n != 0) {
        u32 t = n->unk0;
        if (t == 0) {
            func_002AF340(n);
            t = n->unk0;
        }
        if (arg0 < t) {
            n = n->next;
            continue;
        }
        if (arg0 >= n->unk4) {
            n = n->next;
            continue;
        }
        if (n != 0) {
            u32 hi = n->count;
            u32 lo = 0;
            if (hi != 0) {
                u32 span = hi;
                for (;;) {
                    u32 mid = span >> 1;
                    Child *c = n->children[mid];
                    u32 start = c->start;
                    if (arg0 >= start) {
                        lo = mid + 1;
                        if (arg0 < start + c->len)
                            return c;
                    } else {
                        hi = mid;
                    }
                    span = lo + hi;
                    if (lo >= hi)
                        return 0;
                }
            }
        }
        return 0;
    }
    return 0;
}
