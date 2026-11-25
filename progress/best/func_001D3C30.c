extern void func_001D3B60(void *, s32);
extern void func_002B2028(void *);
extern void func_003F93CC(void *, s32, void *);
extern void D_002AD390(void *);

typedef struct S_node {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} S_node;

typedef struct S_func_001D3C30_arg0 {
    S_node *unk0;
    s32 unk4;
    s32 unk8;
} S_func_001D3C30_arg0;

typedef struct S_func_001D3C30_arg1 {
    s32 unk0;
    s32 unk4;
    s32 unk0C;
    s32 unk10;
    s32 unk3C;
} S_func_001D3C30_arg1;

void func_001D3C30(S_func_001D3C30_arg0 *arg0, S_func_001D3C30_arg1 *arg1) {
    S_node *node = arg0->unk0;
    s32 limit = arg0->unk4;
    s32 iter;

    if (node->unk0 != limit) {
        do {
            if (node->unk0 == 0) break;
            func_001D3B60(node, 3);
            node = (S_node*)((u8*)node + 4);
        } while (node->unk0 != limit);
    }

    s32 val_node0 = node->unk0;
    s32 val_node4 = node->unk4;
    
    if (val_node0 != val_node4) {
        func_003F93CC(arg0->unk0, val_node4, arg1);
    }

    if (arg1->unk0 != 0) {
        D_002AD390(arg0);
    }
}
