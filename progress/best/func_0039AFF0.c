extern void func_003A6BE0(void *);
extern void func_003A6C08(void **, void *);

void func_0039AFF0(void **arg0) {
    void **head = arg0;
    void **cur = (void **) *head;
    while (cur != head) {
        void *node = cur;
        cur = (void **) *cur;
        func_003A6BE0((char *)node + 8);
        func_003A6C08(head, node);
    }
    *head = cur;
    ((void **) *head)[0] = head;
    ((void **) *head)[1] = head;
}
