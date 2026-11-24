typedef struct S_func_003A9DB0_ret S_func_003A9DB0_ret;
typedef struct S_D_0040E618 S_D_0040E618;

typedef struct S_func_001DBBA8_arg0 {
    S_func_003A9DB0_ret *unk_00;
    S_D_0040E618 *unk_04;
    S_D_0040E618 *unk_08;
} S_func_001DBBA8_arg0;

struct S_D_0040E618 {
    void *unk_00;
};
extern S_D_0040E618 D_0040E618;

extern void *func_00152D28(s32);
extern void *func_002B1FC0(s32);
extern void func_002B2028(void *);
extern void *func_003D2910(s32);
extern void func_003F93CC(void *dst, void *src, s32 size);

void func_00210138(void *arg0, void *arg1, void **arg2)
{
    void **base;
    void **end;
    void **cap;
    void **new_end;
    void *last_val;
    void *src_elem;
    s32 diff;
    s32 size;
    s32 new_cap_count;
    s32 new_cap_bytes;
    void *new_base;
    void *alloc;
    s32 copy_count;
    void **insert_pos;
    void **after_insert;
    s32 remaining;
    s32 old_cap;
    void **new_end_final;
    
    base = *(void ***)arg0;
    end = *(void ***)(arg0 + 4);
    cap = *(void ***)(arg0 + 8);
    
    if (end != cap) {
        if (end != NULL) {
            last_val = *(void **)((char *)end - 4);
            *(void **)end = last_val;
        }
        new_end = end + 1;
        diff = (s32)((char *)new_end - (char *)arg1) >> 2;
        diff = diff * 4;
        src_elem = *arg2;
        func_003F93CC((char *)new_end - diff, arg1, diff);
        *(void **)arg1 = src_elem;
        return;
    }
    
    size = (s32)((char *)end - (char *)base) >> 2;
    new_cap_count = (size != 0) ? (size * 2) : 1;
    new_cap_bytes = new_cap_count * 4;
    
    new_base = NULL;
    if (new_cap_count != 0) {
        if (new_cap_bytes != 0) {
            alloc = func_002B1FC0(new_cap_bytes);
            new_base = alloc;
            if (alloc == NULL) {
                new_base = func_003D2910(new_cap_bytes);
            }
        } else if (*(void **)((char *)&D_0040E618 - 4) != NULL) {
            new_base = *(void **)((char *)&D_0040E618 - 4);
            *(void **)((char *)&D_0040E618 - 4) = *(void **)new_base;
        } else {
            new_base = func_00152D28(0);
        }
    } else {
        new_base = NULL;
        new_cap_bytes = 0;
    }
    
    copy_count = (s32)((char *)arg1 - (char *)base) >> 2;
    insert_pos = (void **)((char *)new_base + copy_count * 4);
    func_003F93CC(new_base, base, copy_count * 4);
    
    if (insert_pos != NULL) {
        *insert_pos = *arg2;
    }
    
    after_insert = insert_pos + 1;
    remaining = (s32)((char *)end - (char *)arg1) >> 2;
    func_003F93CC(after_insert, arg1, remaining * 4);
    
    old_cap = (s32)((char *)cap - (char *)base) >> 2;
    
    if (old_cap != 0) {
        if (old_cap * 4 != 0) {
            func_002B2028(base);
        } else {
            *(void **)base = *(void **)((char *)&D_0040E618 - 4);
            *(void **)((char *)&D_0040E618 - 4) = base;
        }
    }
    
    new_end_final = after_insert + remaining;
    *(void ***)(arg0 + 4) = new_end_final;
    *(void ***)(arg0 + 8) = (void **)((char *)new_base + new_cap_bytes);
    *(void ***)(arg0 + 0) = (void **)new_base;
}
