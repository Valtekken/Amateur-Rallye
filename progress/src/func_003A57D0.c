typedef struct N {
    s32 color;
    struct N *next;
    struct N *l;
    struct N *r;
} N;
typedef struct { N *root; } R;
extern void func_003ACDA0(N *, R *);
extern void func_003ACE60(N *, R *);

void func_003A57D0(register N *z, register R *r) {
    N *w;
    z->color = 0;
    while (z != r->root && z->next->color == 0) {
        if (z->next == z->next->next->l) {
            w = z->next->next->r;
            if (w != 0 && w->color == 0) {
                z->next->color = 1;
                w->color = 1;
                z->next->next->color = 0;
                z = z->next->next;
            } else {
                if (z == z->next->r) {
                    z = z->next;
                    func_003ACDA0(z, r);
                }
                z->next->color = 1;
                z->next->next->color = 0;
                func_003ACE60(z->next->next, r);
            }
        } else {
            w = z->next->next->l;
            if (w != 0 && w->color == 0) {
                z->next->color = 1;
                w->color = 1;
                z->next->next->color = 0;
                z = z->next->next;
            } else {
                if (z == z->next->l) {
                    z = z->next;
                    func_003ACE60(z, r);
                }
                z->next->color = 1;
                z->next->next->color = 0;
                func_003ACDA0(z->next->next, r);
            }
        }
    }
    r->root->color = 1;
}
