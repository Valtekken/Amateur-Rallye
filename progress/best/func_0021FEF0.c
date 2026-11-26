extern void *func_001D6BB0(void);
extern void **func_00201350(void);

typedef struct Node { void *val; struct Node *next; } Node;

void func_0021FEF0(u8 *arg0, s32 arg1, void *arg2) {
    void **s20;
    u8 *h;
    s32 off48;
    void (**fn1)(void *, void *);
    void **tbl;
    Node *p, *cur;
    s20 = *(void ***)func_001D6BB0();
    h = *(u8 **)s20;
    off48 = *(s16 *)(h + 0x48);
    h += 0x48;
    fn1 = (void (**)(void *, void *))(h + 4);
    tbl = func_00201350();
    (*fn1)((u8 *)s20 + off48, tbl[arg1]);
    p = (Node *)(arg0 + arg1 * 0xC);
    cur = p->next;
    while (cur != p) {
        void *val = cur->val;
        if (val != 0) {
            if (((*(u32 *)val >> 1) & 1) == 0) {
                u8 *o = *(u8 **)s20;
                s32 off = *(s16 *)(o + 0x30);
                void (**fn2)(void *, void *, void *) = (void (**)(void *, void *, void *))(o + 0x34);
                (*fn2)((u8 *)s20 + off, val, arg2);
            }
        }
        cur = cur->next;
    }
}
