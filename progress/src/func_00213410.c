typedef struct Node {
    struct Node *next;
    struct Node *prev;
    s32 value;
} Node;

extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_001D2488(s32 *, s32 *);

void func_00213410(void *unused, Node **pos, Node *first, Node *last) {
    struct { Node *p; char pad[12]; } result, at;
    Node *new_node;
    s32 *src_value;
    s32 *dst_value;
    Node *iter;

    iter = first;
    if (iter != last) {
        do {
            at.p = *pos;
            new_node = func_002B1FC0(12);
            src_value = &iter->value;
            if (new_node == NULL) {
                new_node = func_003D2910(12);
            }
            dst_value = &new_node->value;
            if (dst_value != NULL) {
                func_001D2488(dst_value, src_value);
            }
            new_node->next = at.p;
            new_node->prev = at.p->prev;
            at.p->prev->next = new_node;
            at.p->prev = new_node;
            result.p = new_node;
            iter = iter->next;
        } while (iter != last);
    }
}
