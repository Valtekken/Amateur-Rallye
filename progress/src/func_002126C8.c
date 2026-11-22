typedef struct { u32 lo, hi; } Value;
typedef struct Node { int color; struct Node *parent, *left, *right; Value value; } Node;
typedef struct { Node *head; u32 count; } Tree;
extern void *func_002B1FC0(u32), *func_003D2910(u32);

static inline Node *make(const u32 *v) {
    Node *p = func_002B1FC0(0x18);
    if (!p) p = func_003D2910(0x18);
    if (&p->value) __builtin_memcpy(&p->value, v, 8);
    return p;
}
static inline void left(Node *x, Node **root) {
    Node *y = x->right;
    x->right = y->left;
    if (y->left) y->left->parent = x;
    y->parent = x->parent;
    if (x == *root) *root = y;
    else if (x == x->parent->left) x->parent->left = y;
    else x->parent->right = y;
    y->left = x;
    x->parent = y;
}
static inline void right(Node *x, Node **root) {
    Node *y = x->left;
    x->left = y->right;
    if (y->right) y->right->parent = x;
    y->parent = x->parent;
    if (x == *root) *root = y;
    else if (x == x->parent->right) x->parent->right = y;
    else x->parent->left = y;
    y->right = x;
    x->parent = y;
}
static inline void rebalance(Node *x, Node **root) {
    x->color = 0;
    while (x != *root && x->parent->color == 0) {
        if (x->parent == x->parent->parent->left) {
            Node *y = x->parent->parent->right;
            if (y && y->color == 0) {
                x->parent->color = 1; y->color = 1;
                x->parent->parent->color = 0;
                x = x->parent->parent;
            } else {
                if (x == x->parent->right) { x = x->parent; left(x, root); }
                x->parent->color = 1;
                x->parent->parent->color = 0;
                right(x->parent->parent, root);
            }
        } else {
            Node *y = x->parent->parent->left;
            if (y && y->color == 0) {
                x->parent->color = 1; y->color = 1;
                x->parent->parent->color = 0;
                x = x->parent->parent;
            } else {
                if (x == x->parent->left) { x = x->parent; right(x, root); }
                x->parent->color = 1;
                x->parent->parent->color = 0;
                left(x->parent->parent, root);
            }
        }
    }
    (*root)->color = 1;
}

Node **func_002126C8(Node **out, Tree *t, s32 hint, Node *parent, u32 *v) {
    Node *n;
    if (parent == t->head || hint || v[0] < *(u32 *)((char *)parent + 0x10)) {
        n = make(v);
        parent->left = n;
        if (parent == t->head) { parent->parent = n; t->head->right = n; }
        else if (parent == t->head->left) t->head->left = n;
    } else {
        n = make(v);
        parent->right = n;
        if (parent == t->head->right) t->head->right = n;
    }
    n->parent = parent;
    n->left = 0;
    n->right = 0;
    rebalance(n, &t->head->parent);
    t->count++;
    *out = n;
    return out;
}
