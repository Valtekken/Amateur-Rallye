typedef struct {
    void *unk0;
    s32 unk4;
} SlotEntry;

typedef struct {
    s32 *begin;
    s32 *end;
    s32 *cap;
} Vector;

typedef struct {
    s32 *unk0;
    s32 *unkC;
    Vector vec;
    void *unk24;
    s32 unk30;
} Manager;

extern Manager D_004262D0;
extern u32 D_0040E618[];

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} D_0040E658_t;

extern D_0040E658_t D_0040E658;

extern void func_002B2028(void *, void *, s32);
extern s32 func_00151930(void *);
extern void func_00152720(void *, s32 *, s32 *);
extern void D_002AD390(void *);

void func_002C67F8(void *arg0, s32 arg1) {
    s32 handle;
    SlotEntry *entry;
    s32 refcount;
    s32 sp10;
    s32 last_idx;
    s32 slot;
    SlotEntry *last_entry;
    void *cur_next;
    s32 *cur_hdr;
    s32 h8;
    void *last_next;
    s32 *last_hdr;
    void *result;
    SlotEntry *new_last;
    void *new_last_next;
    s32 *new_last_hdr;
    s32 h8_2;
    s32 result2;
    s32 *result_hdr;
    Vector *vec;
    s32 *temp_4_8;

    handle = ((s32 *)arg0)[1];
    if (handle >= 0) {
        entry = &((SlotEntry *)D_004262D0.unk24)[D_004262D0.unk0[handle]];
        refcount = entry->unk4 - 1;
        entry->unk4 = refcount;
        if (refcount == 0) {
            sp10 = handle;
            last_idx = D_004262D0.unk30 - 1;
            slot = D_004262D0.unk0[handle];
            D_004262D0.unk30 = last_idx;

            if (slot != last_idx) {
                last_entry = &((SlotEntry *)D_004262D0.unk24)[last_idx];

                cur_next = entry->unk0;
                cur_hdr = (s32 *)((char *)cur_next - 0x10);
                h8 = cur_hdr[2] - 1;
                cur_hdr[2] = h8;
                if (h8 == 0) {
                    if ((s32)((char *)cur_hdr + 0x10) != 0) {
                        func_002B2028(cur_hdr, cur_next, (s32)D_004262D0.unk24);
                    } else {
                        *(void **)((char *)cur_next - 0x10) = (void *)D_0040E618[-1];
                        D_0040E618[-1] = (u32)((char *)cur_next - 0x10);
                    }
                }

                last_next = last_entry->unk0;
                last_hdr = (s32 *)((char *)last_next - 0x10);
                if (last_hdr[3] == 0) {
                    last_hdr[2]++;
                } else {
                    last_next = (s32)func_00151930(last_hdr);
                }
                entry->unk0 = (void *)last_next;
                entry->unk4 = last_entry->unk4;
                D_004262D0.unk0[D_004262D0.unkC[last_idx]] = slot;
                D_004262D0.unkC[slot] = D_004262D0.unkC[last_idx];
            }

            new_last = &((SlotEntry *)D_004262D0.unk24)[D_004262D0.unk30];

            if (D_0040E658.unkC != 0) {
                result = (void *)func_00151930(&D_0040E658);
            } else {
                result = (void *)((char *)&D_0040E658 + 0x10);
                D_0040E658.unk8++;
            }

            new_last_next = new_last->unk0;
            new_last_hdr = (s32 *)((char *)new_last_next - 0x10);
            h8_2 = new_last_hdr[2] - 1;
            new_last_hdr[2] = h8_2;
            if (h8_2 == 0) {
                if ((s32)((char *)new_last_hdr + 0x10) != 0) {
                    func_002B2028(new_last_hdr, new_last_next, (s32)D_004262D0.unk24);
                } else {
                    *(void **)((char *)new_last_next - 0x10) = (void *)D_0040E618[-1];
                    D_0040E618[-1] = (u32)((char *)new_last_next - 0x10);
                }
            }

            result2 = (s32)result;
            result_hdr = (s32 *)((char *)result2 - 0x10);
            if (result_hdr[3] == 0) {
                result_hdr[2]++;
            } else {
                result2 = (s32)func_00151930(result_hdr);
            }
            new_last->unk0 = (void *)result2;
            new_last->unk4 = 0;

            vec = &D_004262D0.vec;
            if (vec->end != vec->cap) {
                if (vec->end != NULL) {
                    *vec->end = sp10;
                }
                vec->end = (s32 *)((char *)vec->end + 4);
            } else {
                func_00152720(vec, vec->end, &sp10);
            }
        }
        ((s32 *)arg0)[1] = -1;
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
