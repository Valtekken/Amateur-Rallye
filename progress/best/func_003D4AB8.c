extern void func_003D4D70(void *);
extern void func_003D5050(void **);
extern s32 func_003D8550(s32, void *, s32);

void **func_003D4AB8(void **a, s32 b) {
    u8 *p = (u8 *)*a;
    s32 ok;
    char buf[0x400];
    if (p[0x1A]) ok = 0;
    else { void *t = *(void **)(p + 4); if (t) func_003D4D70(t); ok = 1; }
    if (ok) {
        char *q = *(char **)*a;
        s32 r;
        for (;;) {
            r = func_003D8550(b, buf, 0x400);
            if (r == 0) break;
            {
                char *v = *(char **)(q + 0x50);
                if ((*(s32 (**)(void *, void *, s32))(v + 0x34))(q, buf, r) != r) {
                    ((u8 *)*a)[0x1A] |= 4;
                    break;
                }
            }
        }
        if (*(s64 *)((char *)*a + 0x10) & 0x6000) func_003D5050(a);
    }
    return a;
}
