extern void *func_002015D8(void);

void func_0016DFD8(void) {
    void *r = func_002015D8();
    void *q = *(void **)((char *)r + 8);
    void *v = *(void **)q;
    s16 off = *(s16 *)((char *)v + 0x80);
    f64 (*fn)(void *) = *(f64 (**)(void *))((char *)v + 0x84);
    fn((char *)q + off);
}
