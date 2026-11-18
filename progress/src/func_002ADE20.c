extern void func_002AD758(void *);
void *func_002B1FC0(s32);
s32 func_003F94D0(void *, s32, s32);

void *func_002AD7B8(void) {
    void *temp_2 = func_002B1FC0(0x18);
    if (temp_2 == NULL) {
        func_002AD758(temp_2);
    }
    func_003F94D0(temp_2, 0, 0x18);
    *(void **)((char *)temp_2 + 4) = (void *)((char *)temp_2 + 0x10);
    return temp_2;
}

extern void (*D_00426AC4)(void);
extern void func_002AD888(void);

void func_002AD860(void) {
    D_00426AC4 = func_002AD888;
    func_002AD888();
}

typedef struct Node {
    s32 base;
    s32 unk04;
    s32 unk08;
    s32 unk0C;
    s32 unk10;
    s32 unk14;
    s64 entries[80];
    u16 unk298;
    u16 count;
    s8 tags[80];
} Node;

extern void *func_003F7300(void);

void *func_002ADE20(s32 idx, Node *node, Node *prev) {
    s32 cur = idx;
    if (node->tags[cur] == 2) {
        do {
            cur = (s32)node->entries[cur];
        } while (node->tags[cur] == 2);
    }
    if (node->tags[cur] == 1)
        return (void *)(node->base + *(s32 *)((u8 *)node + (cur << 3) + 0x18));
    return func_003F7300();
}
