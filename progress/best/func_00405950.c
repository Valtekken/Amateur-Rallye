extern void *func_004058E0(void);
typedef struct { s32 pad0[7]; s32 unk1C; s32 unk20; } S_00405910;
void *func_00405910(S_00405910 *arg0, s32 arg1) {
    if (arg1 < 0) return func_004058E0();
    if (arg1 < arg0->unk20) return (void *)(arg0->unk1C + (arg1 << 6));
    return func_004058E0();
}

extern void func_0040AF58(void);
extern void func_0040AFA0(s32);
typedef struct Entry05818_s { u8 pad[0x10]; s32 flag; void *self; s32 unk18; } Entry05818;
typedef struct { s32 unk0; Entry05818 *unk4; s32 unk8; } Pool05818;
void *func_00405818(Pool05818 *pool) {
    func_0040AF58();
    s32 count = pool->unk8;
    s32 i = 0;
    Entry05818 *cur = (Entry05818*)pool->unk4;
    if (count > 0) {
        for (;;) {
            if (!(cur->flag & 1)) {
                s32 tmp;
                cur->flag = ((i + 1) << 16) | 5;
                tmp = pool->unk0 + 1;
                pool->unk0 = tmp;
                if (tmp == 1) { tmp = 2; pool->unk0 = 2; }
                cur->self = cur;
                cur->unk18 = tmp;
                func_0040AFA0(count);
                return cur;
            }
            i++;
            cur++;
            if (i >= count) break;
        }
    }
    func_0040AFA0(count);
    return 0;
}

extern void iSignalSema_2(s32);
extern void func_004058C0(void *);
typedef struct {
    void *unk0;
    s32 pad1;
    s32 unk8;
    u8 pad2[0x14 - 0xC];
    s32 unk14;
    s32 unk18;
    void (*unk1C)(s32);
    s32 unk20;
    s32 unk24;
} S_inner;
typedef struct { s32 pad0[7]; S_inner *unk1C; u32 unk20; u32 unk24; u32 unk28; u32 unk2C; } S_00405950;
void func_00405950(S_00405950 *arg0) {
    u32 type = arg0->unk20;
    S_inner *s = arg0->unk1C;
    switch (type) {
    case 0x8000000A:
        if (s->unk1C) s->unk1C(s->unk20);
        break;
    case 0x80000009:
        s->unk24 = (s32)arg0->unk24;
        s->unk14 = (s32)arg0->unk28;
        s->unk18 = (s32)arg0->unk2C;
        break;
    }
    s = arg0->unk1C;
    if (s->unk8 >= 0) iSignalSema_2(s->unk8);
    func_004058C0(s->unk0);
    s->unk0 = 0;
}
