extern void *func_001D6BB0(void);

void func_00206588(void *arg0) {
    void *ctx;
    void *vobj;
    void (*fn)(void *, void *);

    ctx = func_001D6BB0();
    vobj = *(void **)((char *)ctx + 0);
    fn = *(void (**)(void *, void *))((char *)vobj + 0x5C);
    fn((char *)ctx + *(short *)((char *)vobj + 0x58), arg0);
}
