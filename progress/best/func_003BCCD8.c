typedef struct { u8 data[24]; } Item;
typedef struct { Item *begin, *end, *cap; } V;

extern u32 D_0040E618[];
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32);
extern void func_002B2028(void *);
extern Item *func_002C5160(Item *, Item *, Item *, s32);

void func_003BCCD8(V *v, Item *pos, Item *value) {
    s32 n, size;

    if (v->end != v->cap) {
        Item *p, *src;
        p = v->end;
        if (p != 0)
            *p = *(p - 1);
        src = p - 1;
        v->end = p + 1;
        n = ((s32)src - (s32)pos) * (s32)0xAAAAAAAB >> 3;
        {
            Item tmpv = *value;
            if (n > 0) {
                do {
                    --p; --src;
                    *p = *src;
                } while (--n > 0);
            }
            *pos = tmpv;
        }
    } else {
        Item *mem, *out, *end2, *p;
        n = ((s32)v->end - (s32)v->begin) * (s32)0xAAAAAAAB >> 3;
        size = n != 0 ? n * 2 : 1;
        if (size * 24 != 0) {
            mem = func_002B1FC0(size * 24);
            if (mem == 0)
                mem = func_003D2910(size * 24);
        } else {
            u32 head = D_0040E618[-1];
            if (head != 0) {
                mem = (Item *)head;
                D_0040E618[-1] = *(u32 *)mem;
            } else {
                mem = func_00152D28(0);
            }
        }
        out = func_002C5160(v->begin, pos, mem, 0);
        if (out)
            *out = *value;
        end2 = func_002C5160(pos, v->end, out + 1, 0);
        for (p = v->begin; p < v->end; p++) {
            /* destroy element */
        }
        n = ((s32)v->cap - (s32)v->begin) * (s32)0xAAAAAAAB >> 3;
        if (n != 0) {
            if (n * 24 != 0)
                func_002B2028(v->begin);
            else {
                *(u32 *)v->begin = D_0040E618[-1];
                D_0040E618[-1] = (u32)v->begin;
            }
        }
        v->end = end2;
        v->begin = mem;
        v->cap = mem + size * 24;
    }
}
