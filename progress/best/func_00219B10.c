extern void func_002B2028(void *);

struct Vec {
    u32 pad0;
    void **begin;
    void **end;
    u32 pad0C;
    void **cap;
};

void func_00219B10(struct Vec *v) {
    void **end = v->end;
    s32 i = 0;
    s32 count = (s32)((u8 *)end - (u8 *)v->begin) >> 2;
    if (count != 0) {
        do {
            void *cur = v->begin[i];
            while (cur != NULL) {
                void *next = *(void **)cur;
                func_002B2028(cur);
                cur = next;
            }
            v->begin[i] = NULL;
            i++;
            count = (s32)((u8 *)end - (u8 *)v->begin) >> 2;
        } while ((u32)i < (u32)count);
    }
    v->cap = NULL;
}
