typedef struct { void *f0; void **f4; void *f8; } Node80;
typedef struct { void *f0; void **f4; } Obj80;
extern void func_001D2458(void *);
extern void func_001D2D48(void *, s32, s32);
extern void func_001D2488(void *, void *);
extern s32 func_001CE2F8(void *);
extern s32 func_001D24B8(void *, s32, s32, void *);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32, void *);
extern void D_002AD390(void *);
extern void func_001F8020(Obj80 *, s32, Obj80 **, s32);

void func_001F8020(Obj80 *arg0, s32 arg1, Obj80 **arg2, s32 arg3) {
    s32 sp0[4], sp10[4], sp20[4];
    Obj80 *sp30;
    Node80 *v;
    Obj80 *node;
    func_001D2458(sp0);
    func_001D2D48(sp0, 0, 0x7FFFFFFF);
    func_001D2488(sp10, (char *)arg0 + 0x14);
    func_001D2D48(sp10, 0, 0x7FFFFFFF);
    if (func_001D24B8(sp10, 0, func_001CE2F8(sp10), sp0) != -1) {
        sp30 = *arg2;
        v = (Node80 *)func_002B1FC0(0xC);
        if (v == 0) v = (Node80 *)func_003D2910(0xC, v);
        if ((char *)v + 8 != 0) v->f8 = arg0;
        v->f0 = sp30;
        v->f4 = sp30->f4;
        *sp30->f4 = (void *)v;
        sp30->f4 = (void **)v;
        *(void **)sp20 = v;
        if (arg3 == 1) {
            D_002AD390(sp10);
            D_002AD390(sp0);
            return;
        }
    }
    node = (Obj80 *)arg0->f0;
    if (node != 0) {
        do {
            func_001F8020(node, arg1, arg2, arg3);
            node = (Obj80 *)node->f4;
        } while (node != 0);
    }
    D_002AD390(sp10);
    D_002AD390(sp0);
}
