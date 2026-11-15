struct Node {
    struct Node *next;
    struct Node *prev;
};

extern void func_003AD930(void *, void *);
extern void *func_003B1FD0(void *, void *);

void *func_003AD9C8(register void *arg0, register void *arg1, register struct Node **arg2, register void *arg3) {
    struct Node *node = (struct Node *)func_003B1FD0(arg1, arg3);
    node->next = *arg2;
    node->prev = (*arg2)->prev;
    (*arg2)->prev->next = node;
    (*arg2)->prev = node;
    func_003AD930(arg0, node);
    return arg0;
}
