typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    void *unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    u32 unk30;
    s32 unk34;
    s32 unk38;
    u32 unk3C;
    u32 unk40;
    f32 unk44;
    u32 unk48;
    u32 unk4C;
    u32 unk50;
    u32 unk54;
    u32 unk58;
    u32 unk5C;
    u32 unk60;
    u32 unk64;
    u32 unk68;
    u32 unk6C;
    u32 unk70;
    u32 unk74;
    u32 unk78;
    u32 unk7C;
    u8 pad80[0x58];
    s32 unkD8;
    s32 unkDC;
    s32 unkE0;
    s32 unkE4;
    s32 unkE8;
    s32 unkEC;
} Struct_003BA868;

typedef struct {
    void *str;
    s32 refCount;
} CacheEntry;

typedef struct {
    s32 *map;
    void *unk4;
    void *unk8;
    s32 *ids;
    void *unk10;
    void *unk14;
    void *unk18;
    void *unk1C;
    void *unk20;
    CacheEntry *entries;
    void *unk28;
    void *unk2C;
    s32 count;
    s32 unk34;
    s32 unk38;
} GlobalRegistry;

extern void *D_00488328;
extern char D_00488310[];
extern GlobalRegistry D_004262D0;
extern s32 func_003FA9B8(const char *);
extern void func_001F2108(void *);
extern void func_001D2458(void *, s32);

void *func_003BA868(Struct_003BA868 *arg0, s32 arg1) {
    u8 pad[0x130];
    arg0->unk10 = &D_00488328;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk4 = 0;
    arg0->unk0 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    arg0->unk24 = 0;
    arg0->unk28 = 0;
    arg0->unk2C = 0;
    arg0->unk30 = 0;

    if (D_00488310 == NULL || func_003FA9B8(D_00488310) == 0) {
        if (arg0->unk34 >= 0) {
            s32 idx = D_004262D0.map[arg0->unk34];
            CacheEntry *entry = &D_004262D0.entries[idx];
            if (--entry->refCount == 0) {
                s32 last_idx = --D_004262D0.count;
                if (idx != last_idx) {
                    s32 last_id = D_004262D0.ids[last_idx];
                    CacheEntry *last_entry = &D_004262D0.entries[last_idx];
                    entry->str = last_entry->str;
                    entry->refCount = last_entry->refCount;
                    D_004262D0.map[last_id] = idx;
                    D_004262D0.ids[idx] = last_id;
                }
            }
            arg0->unk34 = -1;
        }
    } else {
        arg0->unk34 = -1;
    }

    if (D_00488310 == NULL || func_003FA9B8(D_00488310) == 0) {
        if (arg0->unk38 >= 0) {
            s32 idx = D_004262D0.map[arg0->unk38];
            CacheEntry *entry = &D_004262D0.entries[idx];
            if (--entry->refCount == 0) {
                s32 last_idx = --D_004262D0.count;
                if (idx != last_idx) {
                    s32 last_id = D_004262D0.ids[last_idx];
                    CacheEntry *last_entry = &D_004262D0.entries[last_idx];
                    entry->str = last_entry->str;
                    entry->refCount = last_entry->refCount;
                    D_004262D0.map[last_id] = idx;
                    D_004262D0.ids[idx] = last_id;
                }
            }
            arg0->unk38 = -1;
        }
    } else {
        arg0->unk38 = -1;
    }

    arg0->unk44 = 1.0f;
    arg0->unk3C = 0;
    arg0->unk40 = 0;
    arg0->unk48 = 0;
    arg0->unk58 = 0;
    arg0->unk5C = 0;
    arg0->unk60 = 0;
    arg0->unk64 = 0;
    arg0->unk68 = 0;
    arg0->unk6C = 0;
    arg0->unk70 = 0;
    arg0->unk74 = 0;
    arg0->unk7C = 0;
    arg0->unk78 = 0;
    func_001F2108((char *)arg0 + 0x80);
    arg0->unkD8 = -1;
    arg0->unkDC = 0;
    arg0->unkE0 = 0;
    arg0->unkE4 = 0;
    arg0->unkE8 = 0;
    arg0->unkEC = 0;
    func_001D2458((char *)arg0 + 0xF0, arg1);
    arg0->unkE4 = -1;
    arg0->unkDC = -1;

    return arg0;
}
