void func_003B9520(void *arg0) {
    s32 n = *(s32 *)((char *)arg0 + 0x14) - 1;
    *(s32 *)((char *)arg0 + 0x14) = n;
    if (n == 0 && arg0 != 0) {
        void *vt = *(void **)((char *)arg0 + 0x10);
        s16 off = *(s16 *)((char *)vt + 8);
        void (*f)(void *, s32, void *) = *(void (**)(void *, s32, void *))((char *)vt + 0xC);
        f((char *)arg0 + off, 3, arg0);
    }
}
