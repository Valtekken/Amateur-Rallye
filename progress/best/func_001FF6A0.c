struct S_arg1 {
    void *unk0;
    char pad0[0x14];
    s32 *unk14;
    char pad1[8];
    s32 unk20;
};

struct S_node {
    struct S_node *next;
};

extern void func_001D4040(void **mark, void *name);
extern void func_001D2488(void **out, s32 *in);
extern s32 func_001FDE60(void);
extern void func_001FDCD8(s32 a, void *b);
extern void D_002AD390(void *);
extern s32 func_001FF7A8(s32 *arg0, void *node);
extern char D_004783A0[];
extern char D_004783A8[];

s32 func_001FF6A0(s32 *arg0, struct S_arg1 *arg1) {
    void *sp_mark;
    s32 sp10;
    void *sp14;
    struct S_node *node;

    func_001D4040(&sp_mark, &D_004783A0);
    if (arg1->unk20 != (s32)(u32)sp_mark) return 0;

    func_001D2488(&sp14, arg1->unk14 + 1);
    sp10 = *arg1->unk14;

    func_001D4040(&sp_mark, &D_004783A8);
    if (sp10 != (s32)(u32)sp_mark) {
        D_002AD390(sp14);
        return 0;
    }

    {
        s32 temp_16 = func_001FDE60();
        func_001D4040(&sp_mark, sp14);
        func_001FDCD8(temp_16, sp_mark);
        func_001D4040(&sp_mark, sp14);
    }

    *arg0 = (s32)(u32)sp_mark;

    node = arg1->unk0;
    if (node != NULL) {
        do {
            if (func_001FF7A8(arg0, node) == 0) {
                D_002AD390(sp14);
                return 0;
            }
            node = node->next;
        } while (node != NULL);
    }

    D_002AD390(sp14);
    return 1;
}
