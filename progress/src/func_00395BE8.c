typedef struct {s8 value;} Tag; extern void func_00395B68(void*, void*);
void *func_00395BE8(void *a, s32 n, void *b, Tag tag) {
    void *p = a;
    while (n) {
        func_00395B68(p, b);
        n--;
        p = (u8*)p + 8;
    }
    return p;
}
