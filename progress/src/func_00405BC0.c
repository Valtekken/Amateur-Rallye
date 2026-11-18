extern void *func_004058E0(s32);
extern s32 func_00405438(u32, void *, u32, s32, s32, s32);

typedef struct {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[4];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
} S_A08;

s32 func_00405A08(S_A08 *arg0, s32 arg1) {
    void *tmp = func_004058E0(arg1);
    ((s32 *)tmp)[0x14 / 4] = arg0->unk14;
    ((s32 *)tmp)[0x1C / 4] = arg0->unk1C;
    ((s32 *)tmp)[0x20 / 4] = 0x8000000C;
    return func_00405438(0x80000008, tmp, 0x40, arg0->unk20, arg0->unk24, arg0->unk28);
}

typedef struct inner {
    s32 unk0;
    u8 pad4[0x34];
    struct inner *next;
} inner;

typedef struct node {
    u8 pad0[8];
    inner *unk8;
    u8 padC[8];
    struct node *unk14;
} node;

typedef struct {
    u8 pad0[0x28];
    node *unk28;
} container;

void *func_00405BC0(s32 key, container *arg1) {
    node *n;
    inner *c;

    for (n = arg1->unk28; n != 0; n = n->unk14) {
        for (c = n->unk8; c != 0; c = c->next) {
            if (c->unk0 == key) return c;
        }
    }
    return 0;
}

typedef struct {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[4];
    s32 unk1C;
    s32 unk20;
} S_C10_arg0;

typedef struct {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[4];
    s32 unk1C;
    u32 unk20;
    void *unk24;
    s32 unk28;
    s32 unk2C;
} S_C10_ret;

s32 func_00405C10(S_C10_arg0 *arg0, s32 arg1) {
    S_C10_ret *ret = func_004058E0(arg1);
    void *found;

    ret->unk1C = arg0->unk1C;
    ret->unk14 = arg0->unk14;
    ret->unk20 = 0x80000009;
    found = func_00405BC0(arg0->unk20, (container *)arg1);
    if (found == NULL) {
        ret->unk24 = NULL;
        ret->unk28 = 0;
        ret->unk2C = 0;
    } else {
        ret->unk24 = found;
        ret->unk28 = ((node *)found)->unk8;
        ret->unk2C = ((node *)found)->unk14;
    }
    return func_00405438(0x80000008, ret, 0x40, 0, 0, 0);
}
