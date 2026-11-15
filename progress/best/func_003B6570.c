extern void *func_00152D28(u32);
extern void *func_002B1FC0(u32);
extern void func_002B2028(void *);
extern void *func_003D2910(u32);
extern void func_003F93CC(void *, void *, u32);
extern u32 D_0040E618[];

typedef struct {
    void *begin;
    void *end;
    void *cap;
} Vector;

void func_003B6570(Vector *vec, void *pos, void **src) {
    void *end;
    void *cap;
    void *new_ptr;
    void *new_begin;
    s32 size;
    s32 n;
    void *free_ptr;
    void *begin;
    s32 offset;
    void *new_pos;
    void *new_pos_next;
    s32 tail_size;
    s32 old_count;
    s32 bytes;
    
    end = vec->end;
    cap = vec->cap;
    
    if (end == cap) {
        goto realloc_path;
    }
    
    if (end != NULL) {
        *(void **)end = *(void **)((u8 *)end - 4);
    }
    vec->end = (u8 *)end + 4;
    n = ((s32)((u8 *)end - 4 - (s32)pos) >> 2) * 4;
    new_ptr = *src;
    func_003F93CC((u8 *)end + 4 - n, pos, (u32)n);
    *(void **)pos = new_ptr;
    return;
    
realloc_path:
    n = ((s32)end - (s32)vec->begin) >> 2;
    size = (n != 0) ? (n * 2) : 1;
    bytes = size * 4;
    
    if (size != 0) {
        if (bytes != 0) {
            new_begin = func_002B1FC0(bytes);
            if (new_begin == NULL) {
                new_begin = func_003D2910(bytes);
            }
        } else if (D_0040E618[-1] != NULL) {
            new_begin = (void *)D_0040E618[-1];
            D_0040E618[-1] = *(u32 *)D_0040E618[-1];
        } else {
            new_begin = func_00152D28(0);
        }
    } else {
        new_begin = NULL;
        bytes = 0;
    }
    
    begin = vec->begin;
    offset = (s32)pos - (s32)begin;
    new_pos = (u8 *)new_begin + offset;
    func_003F93CC(new_begin, begin, (u32)(offset >> 2) * 4);
    
    if (new_pos != NULL) {
        *(void **)new_pos = *src;
    }
    
    new_pos_next = (u8 *)new_pos + 4;
    tail_size = (s32)vec->end - (s32)pos;
    func_003F93CC(new_pos_next, pos, (u32)(tail_size >> 2) * 4);
    
    old_count = ((s32)vec->cap - (s32)vec->begin) >> 2;
    if (old_count != 0) {
        if ((old_count * 4) != 0) {
            func_002B2028(vec->begin);
        } else {
            *(void **)vec->begin = (void *)D_0040E618[-1];
            D_0040E618[-1] = (u32)vec->begin;
        }
    }
    
    vec->end = (u8 *)new_pos_next + tail_size;
    vec->cap = (u8 *)new_begin + bytes;
    vec->begin = new_begin;
}
