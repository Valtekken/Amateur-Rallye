extern void func_0022D038(void *, s32, void *);

typedef struct N230 {
    void *volatile unk0;
    struct N230 *next;
    u8 pad[8];
    void *unk10;
    s32 unk14;
} N230;

typedef struct O230 {
    u8 pad[0x18];
    s16 off18;
    void *fn1C;
} O230;

typedef struct E230 {
    u8 pad[0x1C];
    s32 idx1C;
    s32 num20;
    s32 v24;
} E230;

typedef struct A230 {
    u8 pad[0x34];
    E230 **array34;
    u8 **p38;
} A230;

typedef struct C230 {
    void *unk0;
    void *unk4;
    A230 *unk8;
} C230;

void func_00230BB0(C230 *arg0, N230 *arg1, s32 *arg2) {
    O230 *obj;
    u8 **basep;
    void *res;
    s32 n, idx, i, f1c, f20, f24;
    N230 *node;

    obj = (O230 *)arg1->unk10;
    res = ((void *(*)(void *))obj->fn1C)((u8 *)arg1 + obj->off18);
    basep = arg0->unk8->p38;
    if (res != 0) {
        n = ((E230 *)res)->num20;
        if (n > 0) {
            idx = ((E230 *)res)->idx1C * 0x34;
            for (i = n; i != 0; i--) {
                E230 *el = (E230 *)((u8 *)*arg0->unk8->array34 + idx);
                f1c = el->idx1C;
                f20 = el->num20;
                f24 = el->v24;
                idx += 0x34;
                func_0022D038(arg0->unk0, *arg2, *basep + f1c * 0xC);
                (*arg2)++;
                func_0022D038(arg0->unk0, *arg2, *basep + f20 * 0xC);
                (*arg2)++;
                func_0022D038(arg0->unk0, *arg2, *basep + f24 * 0xC);
                (*arg2)++;
            }
        }
    }
    node = arg1->unk0;
    if (node != 0) {
        do {
            func_00230BB0(arg0, node, arg2);
            node = node->next;
        } while (node != 0);
    }
}
