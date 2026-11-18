extern void func_002B2028(void *);

typedef struct node_s {
    struct node_s *next;
    struct node_s *prev;
} node_t;

void func_002CA0D0(node_t **arg0) {
    node_t *head = *arg0;
    node_t *cur = head->next;
    node_t *tofree;
    node_t *tmp;

    if (cur != head) {
        tofree = cur;
        do {
            cur = cur->next;
            func_002B2028(tofree);
            tofree = cur;
        } while (cur != *arg0);
    }
    (*arg0)->next = *arg0;
    tmp = *arg0;
    tmp->prev = tmp;
}
