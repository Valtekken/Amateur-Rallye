typedef struct { char bytes[32]; } B;

static inline void bp(B *d, B *s) {
    char *x = (char *)s + 4;
    char *y = (char *)d + 4;
    *(int *)(y - 4) = *(int *)(x - 4);
    *(float *)(y) = *(float *)(x);
    *(float *)(y + 4) = *(float *)(x + 4);
    *(float *)(y + 8) = *(float *)(x + 8);
    *(float *)(y + 12) = *(float *)(x + 12);
    *(float *)(y + 16) = *(float *)(x + 16);
    *(float *)(y + 20) = *(float *)(x + 20);
    *(float *)(y + 24) = *(float *)(x + 24);
}

B *func_001C6100(B *a, B *b, B *c) {
    while (a != b) {
        if (c) bp(c, a);
        a++;
        c++;
    }
    return c;
}
