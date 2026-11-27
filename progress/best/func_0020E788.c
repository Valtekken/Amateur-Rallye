struct Unk10 {
    u8 pad0[0x18];
    s16 unk18;
    void *(*unk1C)(void *);
};

struct Temp {
    u8 pad0[0x1C];
    s32 unk1C;
    s32 unk20;
};

struct Arg2 {
    struct Arg2 *unk0;
    struct Arg2 *unk4;
    u8 pad[0xC];
    struct Unk10 *unk10;
};

struct Arg1 {
    u8 pad[0x34];
    void **unk34;
    void **unk38;
};

void func_0020E788(u8 *arg0, struct Arg1 *arg1, struct Arg2 *arg2) {
    struct Unk10 *u10 = arg2->unk10;
    struct Temp *temp = u10->unk1C(arg2 + u10->unk18);
    if (temp != NULL) {
        s32 count = temp->unk20;
        s32 base = temp->unk1C;
        s32 i = 0;
        if (count > 0) {
            f32 *min = arg0 + 0x4C;
            f32 *max = arg0 + 0x58;
            do {
                void *p34 = *arg1->unk34;
                u32 *idx_base = (u32 *)((u8 *)p34 + (base + i) * 0x34);
                int j = 0;
                do {
                    void *p38 = *arg1->unk38;
                    u32 index = idx_base[7 + j];
                    f32 *table = (f32 *)((u8 *)p38 + index * 0xC);
                    int k = 0;
                    do {
                        f32 v = table[k];
                        if (v < min[k]) min[k] = v;
                        if (max[k] < v) max[k] = v;
                        k++;
                    } while (k < 3);
                    j++;
                } while (j < 3);
                i++;
            } while (i < count);
        }
    }
    {
        struct Arg2 *cur = arg2->unk0;
        while (cur != NULL) {
            func_0020E788(arg0, arg1, cur);
            cur = cur->unk4;
        }
    }
}
