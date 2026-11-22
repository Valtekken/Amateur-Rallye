extern void func_003F9698(const char *, ...);
extern const char D_00475EB8[], D_00475ED0[], D_00475EE0[], D_00475EE8[], D_00475EF0[];
typedef struct Node { int pad; struct Node *next; } Node;
void func_001D4660(void *arg0) {
    Node **table = (Node **)((char *)arg0 + 4);
    int i;
    func_003F9698(D_00475EB8);
    for (i = 0; i < 0xFA1; i++) {
        Node *p = table[i];
        if (p) {
            int k;
            func_003F9698(D_00475ED0, i);
            k = 1;
            do { p = p->next; k++; } while (p);
            func_003F9698(D_00475EE0, k);
            p = table[i];
            if (p) {
                do {
                    func_003F9698(D_00475EE8, (char *)p + 8);
                    p = p->next;
                } while (p);
            }
            func_003F9698(D_00475EF0);
        }
    }
}
