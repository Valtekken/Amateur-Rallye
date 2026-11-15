/* identical to func_00395BE8 (matched), with its names changed by decompdecomp */
typedef struct {s8 value;} Tag; extern void func_00399FF0(void*, void*);
void *func_0039A408(void *a, s32 n, void *b, Tag tag) {
    void *p = a;
    while (n) {
        func_00399FF0(p, b);
        n--;
        p = (u8*)p + 8;
    }
    return p;
}
