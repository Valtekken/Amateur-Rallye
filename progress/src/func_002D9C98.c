typedef struct { char bytes[32]; } B;

static inline void bp(B *d, B *s) {
    char *x = (char *)s + 16;
    char *y = (char *)d + 16;
    *(int *)(y - 16) = *(int *)(x - 16);
    *(float *)(y - 12) = *(float *)(x - 12);
    *(float *)(y - 8) = *(float *)(x - 8);
    *(float *)(y - 4) = *(float *)(x - 4);
    *(float *)(y) = *(float *)(x);
    *(float *)(y + 4) = *(float *)(x + 4);
    *(float *)(y + 8) = *(float *)(x + 8);
    *(float *)(y + 12) = *(float *)(x + 12);
}

B *func_002D9C98(B *a, B *b, B *c) {
    while (a != b) {
        if (c) bp(c, a);
        a++;
        c++;
    }
    return c;
}
