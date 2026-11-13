extern void **func_0015E848(void);

void func_002A1350(void) {
    void **p = func_0015E848();
    void *vt = *p;
    void (*f)(void *, void (*)(void *)) = (void (*)(void *, void (*)(void *)))*(u32 *)((char *)vt + 0x5C);
    s16 off = *(s16 *)((char *)vt + 0x58);
    f((char *)p + off, f);
}
