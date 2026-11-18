#define I(p,o) (*(int*)((char*)(p)+(o)))
extern int func_003E1078(void*);
int func_003E0D28(void *p, unsigned b, int w, int h) {
    int n = w * h;
    w *= 16;
    void *q = *(void**)((char*)p + 64);
    h *= 16;
    b = (b & 0x0FFFFFFF) | 0x20000000;
    I(q, 0xE0) = h;
    I(q, 0xD8) = b;
    I(q, 0xE4) = n;
    I(q, 0xDC) = w;
    I(q, 0xB0) = 0;
    return func_003E1078(p);
}
