/* identical to func_001CA150 (matched), with its names changed by decompdecomp */
typedef struct { char bytes[36]; } B;

static inline void bp(B *d, B *s) {
    char *x = (char *)s + 12;
    char *y = (char *)d + 12;
    *(float *)(y - 12) = *(float *)(x - 12);
    *(float *)(y - 8) = *(float *)(x - 8);
    *(float *)(y - 4) = *(float *)(x - 4);
    *(float *)(y) = *(float *)(x);
    *(float *)(y + 4) = *(float *)(x + 4);
    *(float *)(y + 8) = *(float *)(x + 8);
    *(float *)(y + 12) = *(float *)(x + 12);
    *(float *)(y + 16) = *(float *)(x + 16);
    *(int *)(y + 20) = *(int *)(x + 20);
}

B *func_0033C9C8(B *a, B *b, B *c) {
    while (a != b) {
        if (c) bp(c, a);
        a++;
        c++;
    }
    return c;
}
