typedef struct E { int a; float b,c,d; float e,f,g,h; float key; } E;

extern void func_0021B988(E *, int, int, E *, float *);
extern void func_0021BB60(int, int);
extern void func_0021BC58(E *, E *);

void func_0021BE18(E *a0, E *a1, E *a2) {
    E tmp;
    E tmp2;
    E *it;
    E *cur;
    int count;

    func_0021BB60(0, 0);
    if (a1 < a2) {
        count = ((int)((char *)a1 - (char *)a0) * (int)0x38E38E39) >> 2;
        it = a1;
        cur = a1;
        do {
            if (cur->key < a0->key) {
                tmp.a = cur->a;
                tmp.b = cur->b;
                tmp.c = cur->c;
                tmp.d = cur->d;
                tmp.e = cur->e;
                tmp.f = cur->f;
                tmp.g = cur->g;
                tmp.h = cur->h;
                tmp.key = cur->key;

                cur->a = a0->a;
                cur->b = a0->b;
                cur->c = a0->c;
                cur->d = a0->d;
                cur->e = a0->e;
                cur->f = a0->f;
                cur->g = a0->g;
                cur->h = a0->h;
                cur->key = a0->key;

                tmp2.a = tmp.a;
                tmp2.b = tmp.b;
                tmp2.c = tmp.c;
                tmp2.d = tmp.d;
                tmp2.e = tmp.e;
                tmp2.f = tmp.f;
                tmp2.g = tmp.g;
                tmp2.h = tmp.h;
                tmp2.key = tmp.key;

                func_0021B988(a0, 0, count, &tmp2, &tmp.b);
            }
            it = (E *)((char *)it + 0x24);
            cur = (E *)((char *)cur + 0x24);
        } while (it < a2);
    }
    func_0021BC58(a0, a1);
}
