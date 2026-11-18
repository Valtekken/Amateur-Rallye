extern void D_002AD390(void *);
extern void func_0026FFC8(void *);

void func_002296D0(void *arg0) {
    void **p = (void **)arg0;
    void *head = p[0];
    void *node = (void *)p[0];
    node = *(void **)node; /* head->next */
    while (node != head) {
        void *f = *(void **)((char *)node + 8);
        if (f != NULL) {
            D_002AD390(f);
        }
        node = *(void **)node;
    }
    func_0026FFC8(arg0);
    head = p[1];
    node = *(void **)head;
    while (node != head) {
        void *f = *(void **)((char *)node + 8);
        if (f != NULL) {
            D_002AD390(f);
        }
        node = *(void **)node;
    }
    func_0026FFC8((char *)arg0 + 4);
}
