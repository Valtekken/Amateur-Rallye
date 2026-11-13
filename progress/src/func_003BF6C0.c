typedef struct VtAdj {
    s16 adjust;
    s16 pad;
    void (*fn)(void *, int);
} VtAdj;

extern void D_002AD390(void *);

void func_003BF6C0(void **arg0, s32 arg1) {
    void *p = *arg0;
    if (p != NULL) {
        *arg0 = NULL;
        s32 ref = *(s32 *)p;
        ref--;
        *(s32 *)p = ref;
        if (ref == 0) {
            char *base = *(char **)((char *)p + 4);
            VtAdj *e = (VtAdj *)(base + 8);
            e->fn((char *)p + e->adjust, 3);
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
