typedef struct {
    void *start;
    void *end;
    void *capacity;
} Vector;

extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);
extern void *func_00152D28(u32);
extern void func_002B2028(void *);
extern void func_003F93CC(void *, const void *, u32);
extern void *D_0040E618;

void func_002A7788(Vector *vec, void *elem, void *value) {
    void *end = vec->end;
    if (end != vec->capacity) {
        if (end != NULL) {
            *(void **)end = *(void **)((char *)end - 4);
        }
        vec->end = (char *)end + 4;
        u32 n = ((char *)end - (char *)elem) >> 2;
        n = n * 4;
        void *src = *(void **)value;
        func_003F93CC((char *)end - n, elem, n);
        *(void **)elem = src;
        return;
    }
    
    void *start = vec->start;
    s32 count = ((char *)end - (char *)start) >> 2;
    s32 new_count = count ? count * 2 : 1;
    u32 alloc_size = new_count * 4;
    
    void *new_start;
    if (new_count) {
        if (alloc_size) {
            new_start = func_002B1FC0(alloc_size);
            if (!new_start) new_start = func_003D2910(alloc_size);
        } else {
            void **fl = (void **)((char *)D_0040E618 - 4);
            void *f = *fl;
            if (f) {
                new_start = f;
                *fl = *(void **)f;
            } else {
                new_start = func_00152D28(0);
            }
        }
    } else {
        new_start = 0;
        alloc_size = 0;
    }
    
    u32 offset = (char *)elem - (char *)start;
    void *new_elem = (char *)new_start + offset;
    func_003F93CC(new_start, start, offset);
    
    if (new_elem) *(void **)new_elem = *(void **)value;
    
    void *new_elem_next = (char *)new_elem + 4;
    u32 remaining = (char *)vec->end - (char *)elem;
    func_003F93CC(new_elem_next, elem, (remaining >> 2) * 4);
    
    s32 total_count = ((char *)vec->capacity - (char *)start) >> 2;
    if (total_count) {
        alloc_size = total_count * 4;
        if (alloc_size) {
            func_002B2028(start);
        } else {
            void **fl = (void **)((char *)D_0040E618 - 4);
            *(void **)start = *fl;
            *fl = start;
        }
    }
    
    vec->end = (char *)new_elem_next + remaining;
    vec->capacity = (char *)new_start + alloc_size;
    vec->start = new_start;
}
