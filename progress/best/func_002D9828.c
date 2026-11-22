extern void func_003F93CC(void *, void *, s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32);
extern void func_002B2028(void *);
extern u32 D_0040E618[];

typedef struct {
    u16 *begin;
    u16 *end;
    u16 *cap;
} Vector;

void func_002D9828(Vector *vec, u16 *pos, u16 *elem) {
    u16 val;
    u16 *old_end;
    u16 *src_end;
    s32 diff;
    u16 *begin;
    u16 *end;
    u16 *cap;
    s32 size;
    s32 size_bytes;
    s32 tmp;
    s32 new_cap_bytes;
    u16 *new_begin;
    u32 head;
    s32 count_before;
    u16 *new_pos;
    u16 *after_pos;
    s32 after_bytes;
    u16 *new_end;
    s32 old_cap_elements;
    s32 old_cap_bytes;

    if (vec->end != vec->cap) {
        if (vec->end == 0) {
            goto skip_copy;
        }
        *vec->end = vec->end[-1];
skip_copy:
        old_end = vec->end;
        vec->end = vec->end + 1;
        src_end = old_end - 1;
        diff = (src_end - pos) << 1;
        val = *elem;
        func_003F93CC((u16 *)((char *)old_end - diff), pos, diff);
        *pos = val;
        return;
    }

    begin = vec->begin;
    end = vec->end;
    cap = vec->cap;
    size = (s32)((char *)end - (char *)begin) >> 1;
    size_bytes = size << 1;
    tmp = (size != 0) ? size_bytes : 1;
    new_cap_bytes = tmp << 1;

    if (new_cap_bytes != 0) {
        new_begin = (u16 *)func_002B1FC0(new_cap_bytes);
        if (new_begin == 0) {
            new_begin = (u16 *)func_003D2910(new_cap_bytes);
        }
    } else {
        head = D_0040E618[-1];
        if (head != 0) {
            new_begin = (u16 *)head;
            D_0040E618[-1] = *(u32 *)head;
        } else {
            new_begin = (u16 *)func_00152D28(0);
        }
    }

    count_before = (s32)((char *)pos - (char *)begin) >> 1;
    new_pos = new_begin + count_before;

    func_003F93CC(new_begin, begin, count_before << 1);

    if (new_pos != 0) {
        *new_pos = *elem;
    }

    after_pos = new_pos + 1;
    after_bytes = (s32)((char *)vec->end - (char *)pos);
    new_end = after_pos + (after_bytes >> 1);

    func_003F93CC(after_pos, pos, after_bytes);

    old_cap_elements = (s32)((char *)vec->cap - (char *)vec->begin) >> 1;
    if (old_cap_elements != 0) {
        old_cap_bytes = old_cap_elements << 1;
        if (old_cap_bytes != 0) {
            func_002B2028(vec->begin);
        } else {
            *(u32 *)vec->begin = D_0040E618[-1];
            D_0040E618[-1] = (u32)vec->begin;
        }
    }

    vec->end = new_end;
    vec->cap = new_begin + (new_cap_bytes >> 1);
    vec->begin = new_begin;
}
