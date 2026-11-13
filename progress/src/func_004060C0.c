extern u8 D_0049FF00[64];

void func_004060C0(void *arg0, s32 arg1) {
    void *head, *r;
    u8 *base;
    func_0040AF58();
    *(s32 *)arg0 = arg1;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    base = (u8 *)&D_0049FF00;
    head = *(void **)(base + 0x28);
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    if (head == NULL) {
        *(void **)(base + 0x28) = arg0;
    } else {
        r = head;
        while (*(void **)((u8 *)r + 0x14) != NULL)
            r = *(void **)((u8 *)r + 0x14);
        *(void **)((u8 *)r + 0x14) = arg0;
    }
    func_0040AFA0();
}
