extern void *func_001D6BB0(void);

void func_00206588(void *arg0) {
    void *ctx;
    void *vobj;
    void *obj;
    s32 (*fn)(void *, void *);

    ctx = func_001D6BB0();
    vobj = *(void **)ctx;
    obj = *(void **)vobj;
    fn = *(s32 (**)(void *, void *))((char *)obj + 0x5C);
    fn((char *)vobj + *(s16 *)((char *)obj + 0x58), arg0);
}
