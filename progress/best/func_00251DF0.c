typedef struct {
    void **begin;
    void **end;
    void **limit;
} Vec;

typedef struct {
    void **begin;
    void **end;
} Array;

typedef struct {
    void *unk0;
    s32 unk4;
} Element;

extern void func_001CAB58(void *vec, void **end, void **elem);

void func_00251DF0(void *arg0, void *arg1, Array *arr, Vec *yes, Vec *no) {
    s32 count = (s32)((u32)arr->end - (u32)arr->begin) >> 2;
    if (count <= 0) return;

    for (s32 i = 0; i < count; i++) {
        Element *elem = (Element *)arr->begin[i];
        if (elem->unk4 == -1) {
            if (yes->end == yes->limit) {
                func_001CAB58(yes, yes->end, (void **)&elem);
            } else {
                if (yes->end) *yes->end = elem;
                yes->end = (void **)((u32)yes->end + 4);
            }
        } else if (elem->unk4 == 1) {
            if (no->end == no->limit) {
                func_001CAB58(no, no->end, (void **)&elem);
            } else {
                if (no->end) *no->end = elem;
                no->end = (void **)((u32)no->end + 4);
            }
        }
    }
}
