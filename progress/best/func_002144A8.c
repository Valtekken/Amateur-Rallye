extern void func_002142F0(void *, s32, s32, void *);

typedef struct { u32 d[4]; } S16;

void func_002144A8(void *arg0, void *arg1) {
    S16 tmp;
    char *e = (char *)arg1;
    S16 *q;
    s32 k;
    char *src;
    if (((e - (char *)arg0) >> 4) < 2) return;
    k = e - (char *)arg0;
    src = (char *)arg0;
    q = (S16 *)(e - 16);
    do {
        k -= 16;
        tmp = *q;
        e -= 16;
        *q = *(S16 *)src;
        func_002142F0(src, 0, k >> 4, &tmp);
        q = (S16 *)((char *)q - 16);
    } while (((e - (char *)arg0) >> 4) >= 2);
}
