/* func_001DC080.c */
typedef struct {
    void *unk0;   /* 0x0 */
    s32  unk4;    /* 0x4 */
    void *unk8;   /* 0x8 */
} S_node;

s32 func_001DC080(S_node *node, S_node *key, s32 idx, s32 limit, s32 *out) {
    s32 var_4;
    s32 var_9;
    S_node *var_6;

    if (idx >= limit) {
        return 0;
    }

    if (idx < 0) {
        var_6 = node->unk0;
    } else {
        var_6 = (S_node*)((char*)node->unk0 + idx * 0xC);
    }

    var_4 = node->unk4;
    if (((var_4 - (s32)node->unk0) * 0xAAAAAAAB) >> 2 < (s32)limit) {
        /* empty */
    } else {
        var_4 = (limit * 0xC) + (s32)node->unk0;
    }

    if (var_6 != (void*)(var_4)) {
        var_9 = 0;
        if (var_6->unk0 == key->unk0 && var_6->unk4 == key->unk4) {
            var_9 = ((s32)var_6->unk8 ^ (s32)key->unk8) != 0 ? 0 : 1;
        }
        if (var_9 == 0) {
            var_6 = (S_node*)((char*)var_6 + 0xC);
            if ((s32)var_6 == (s32)(var_4)) {
                return 0;
            }
            while (1) {
                if ((s32)var_6 == (s32)(var_4)) {
                    return 0;
                }
                break;
            }
            *out = (s32)(((s32)var_6 - (s32)node->unk0) * 0xAAAAAAAB) >> 2;
            return 1;
        }
        return 0;
    }
    return 0;
}
