/* identical to func_001FF6A0 (matched), with its names changed by decompdecomp */
struct S_arg1 { void *unk0; char pad0[0x10]; s32 *unk14; char pad1[8]; s32 unk20; };
struct S_node { char pad[4]; struct S_node *next; };

extern void func_001D4040(void **mark, void *name);
extern void func_001D2488(void **out, s32 *in);
extern s32 func_00293668(void);
extern void func_002933A8(s32 a, void *b);
extern void D_002AD390(void *);
extern s32 func_00295D58(s32 *arg0, void *node);
extern char D_0047B808[];
extern char D_0047B810[];

s32 func_00295C50(s32 *arg0, struct S_arg1 *arg1) {
    s32 sp[6];
    struct S_node *node;

    func_001D4040((void **)&sp[0], &D_0047B808);
    if (arg1->unk20 != sp[0]) return 0;

    sp[4] = *arg1->unk14;
    func_001D2488((void **)&sp[5], arg1->unk14 + 1);

    func_001D4040((void **)&sp[0], &D_0047B810);
    if (sp[4] != sp[0]) {
        D_002AD390((void *)sp[5]);
        return 0;
    }

    {
        s32 temp_16 = func_00293668();
        func_001D4040((void **)&sp[0], (void *)sp[5]);
        func_002933A8(temp_16, (void *)&sp[0]);
        func_001D4040((void **)&sp[0], (void *)sp[5]);
    }

    *arg0 = sp[0];

    node = arg1->unk0;
    if (node != NULL) {
        do {
            if (func_00295D58(arg0, node) == 0) {
                D_002AD390((void *)sp[5]);
                return 0;
            }
            node = node->next;
        } while (node != NULL);
    }

    D_002AD390((void *)sp[5]);
    return 1;
}
