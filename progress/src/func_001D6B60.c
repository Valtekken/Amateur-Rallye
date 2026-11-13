void func_001D6B60(void *arg0, void *arg1) {
    void *obj;
    void *vt;
    s16 off;
    void (*fn)(void *, s32, void *);

    obj = *(void **)((u8 *)arg0 + 4);
    if (obj != 0) {
        vt = *(void **)((u8 *)obj);
        off = *(s16 *)((u8 *)vt + 8);
        fn = *(void (**)(void *, s32, void *))((u8 *)vt + 0xC);
        fn((u8 *)obj + off, 3, obj);
    }
    *(void **)((u8 *)arg0 + 4) = arg1;
}
