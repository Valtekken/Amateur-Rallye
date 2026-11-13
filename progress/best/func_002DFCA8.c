struct S_node { struct S_node *next; u32 field4; u32 field8; };
struct S_vec { u32 unk0; u32 begin; u32 end; u32 unkC; s32 unk10; };
struct S_key { u32 unk0; u32 unk4; };
struct S_out { void *unk0; void *unk4; s32 unk8; };

extern void *func_002B1FC0(u32, void *);
extern void *func_003D2910(u32, void *);

void *func_002DFCA8(void *arg0, struct S_vec *arg1, struct S_key *arg2) {
    s32 count = (s32)(arg1->end - arg1->begin) >> 2;
    s32 index = (s32)((u32)arg2->unk0 % (u32)count);
    struct S_node **slot = (struct S_node **)(arg1->begin + ((u32)index << 2));
    struct S_node *head = *slot;
    struct S_node *cur;
    struct S_node *result;
    struct S_out tmp;

    cur = head;
    while (cur != NULL) {
        if (cur->field4 == arg2->unk0) {
            tmp.unk0 = cur->next;
            tmp.unk4 = arg1;
            *(struct S_out *)arg0 = tmp;
            ((struct S_out *)arg0)->unk8 = 0;
            return arg0;
        }
        cur = cur->next;
    }

    result = func_002B1FC0(0xC, slot);
    if (result == NULL) {
        result = func_003D2910(0xC, NULL);
    }
    result->next = NULL;
    *(struct S_key *)((char *)result + 4) = *arg2;
    result->next = head;
    *slot = result;
    arg1->unk10 = arg1->unk10 + 1;
    tmp.unk0 = result;
    tmp.unk4 = arg1;
    *(struct S_out *)arg0 = tmp;
    ((struct S_out *)arg0)->unk8 = 1;
    return arg0;
}
