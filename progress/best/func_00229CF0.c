void func_0022A190(void *a0, void *a1, void *a2, void *a3, s32 a4);

void func_0022A998(void **arg0) {
    void *head = *arg0;
    void *cur = *(void**)head;
    do {
        cur = *(void**)cur;
    } while (cur != head);
}

void func_0022A150(void *arg0) {
    void *t0 = *(void**)arg0;
    void *t1 = *(void**)t0;
    void *a3 = *(void**)t1;
    void *a1 = *(void**)((char*)t1 + 8);
    void *t2 = *(void**)a3;
    void *a2 = *(void**)((char*)a3 + 8);
    a3 = *(void**)((char*)t2 + 8);
    func_0022A190(arg0, a1, a2, a3, 0);
}

s32 func_00229988(void *arg0, void *arg1, s32 arg2);

s32 func_00229CF0(void *arg0, void *arg1) {
    s32 r1 = func_00229988(arg0, arg1, -1);
    s32 r2 = func_00229988(arg0, arg1, 1);
    if (r1 == 0 && r2 == 1) return 1;
    return 0;
}
