/* identical to func_001EE3D8 (matched), with its names changed by decompdecomp */
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_001F8020(s32, char *, void *, s32);
extern void func_001F6300(s32 *, void *);
extern void func_003F9698(char *, s32);
extern void func_0020EFD0(void *);
extern void func_002B2028(void *);
extern char D_00477CA0[];
extern char D_00477CB0[];

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    void *unk8;
    s32 padC;
    s32 pad10;
    s32 unk14;
} Node;

typedef struct {
    void *p;
    char pad0[0x1C];
    Node *cur;
    char pad24[0xC];
    void *tmp;
} S;

void func_001F6228(s32 *arg0, s32 arg1) {
    S sp;
    void *p;
    Node *n;

    *arg0 = arg1;
    p = func_002B1FC0(0xC);
    if (p == NULL) p = func_003D2910(0xC);
    sp.p = p;
    ((Node *)p)->next = (Node *)p;
    ((Node *)sp.p)->prev = sp.p;
    func_001F8020(arg1, D_00477CA0, &sp, 0);
    sp.cur = ((Node *)sp.p)->next;
    sp.tmp = sp.p;
    if (sp.cur != (Node *)sp.p) {
        do {
            n = (Node *)sp.cur->unk8;
            func_003F9698(D_00477CB0, n->unk14);
            func_001F6300(arg0, n);
            sp.cur = sp.cur->next;
            sp.tmp = sp.p;
        } while (sp.cur != (Node *)sp.p);
    }
    func_0020EFD0(&sp);
    func_002B2028(sp.p);
}
