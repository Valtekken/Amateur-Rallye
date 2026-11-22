typedef struct { u8 data[48]; } Item;
typedef struct { Item *begin, *end, *cap; } Vec;

extern void func_00175AD0(void*, s32);
extern Item *func_001C77C8(Item*, Item*, Item*);
extern void func_001C7850(Item*, Item*, Item*);
extern Item *func_001C78D0(Item*, s32, Item*, s32);
extern void func_002B1FC0(void*, s32);
extern void func_002B2028(void*);
extern void func_003D2910(s32, s32);
extern void func_00152D28(void*);

extern u32 D_0040E618[];

void func_001C7950(register Vec *v, register Item *pos, register s32 count, register Item *item) {
    register Item *end;
    register Item *cap;
    register s32 available;
    register s32 tail;
    register Item *old_end;
    register Item *dst;
    register Item *src;
    register s32 n;
    Item tmp;

    if (count == 0) goto cleanup;

    end = v->end;
    cap = v->cap;

    available = ((u8*)cap - (u8*)end) * 0xAAAAAAAB >> 4;

    if ((u32)available < (u32)count) goto cleanup;

    tmp = *item;
    tail = ((u8*)end - (u8*)pos) * 0xAAAAAAAB >> 4;

    if ((u32)count < (u32)tail) {
        old_end = end;
        func_001C77C8(old_end - count, old_end, old_end);
        v->end = old_end + count;

        dst = v->end;
        src = old_end;
        n = tail - count;
        if (n > 0) {
            do {
                --dst;
                --src;
                *dst = *src;
            } while (--n > 0);
        }

        func_001C7850(pos, pos + count, &tmp);
    } else {
        old_end = end;
        func_001C78D0(end, count - tail, &tmp, 0);
        v->end = old_end + (count - tail);
        func_001C77C8(pos, old_end, v->end);
        v->end = old_end + count;
        func_001C7850(pos, old_end, &tmp);
    }

    func_00175AD0(&tmp, 2);

cleanup:
    return;
}
