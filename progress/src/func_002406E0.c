extern s32 func_002405A8(void *);
extern s32 func_002502D0(s32, s32);
extern s32 func_002503D0(s32, void *);

typedef struct {
    s32 f0, f4;
    char _8[0x10];
    s32 f18, f1C;
} Item;

typedef struct {
    char _0[0xC];
    Item **b;
    Item **e;
} A;

s32 func_002406E0(A *arg0) {
    s32 n, i;
    Item *it;

    n = ((s32)arg0->e - (s32)arg0->b) >> 2;
    i = 0;
    if (n > 0) {
        do {
            it = *(Item **)((char *)arg0->b + (i << 2));
            if (func_002503D0(it->f18, it) == 0) return 0;
            if (func_002503D0(it->f1C, it) == 0) return 0;
            if (func_002502D0(it->f18, it->f0) == 0) return 0;
            if (func_002502D0(it->f18, it->f4) == 0) return 0;
            if (func_002502D0(it->f1C, it->f0) == 0) return 0;
            if (func_002502D0(it->f1C, it->f4) == 0) return 0;
            ++i;
        } while (i < n);
    }
    return func_002405A8(arg0) != 0;
}
