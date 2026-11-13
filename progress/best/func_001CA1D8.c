typedef struct { f32 f0,f1,f2,f3,f4,f5,f6,f7; s32 pad; } Elem;
typedef struct { Elem *begin, *end, *cap; } Buffer;
extern Elem *func_001CA150(Elem *, Elem *, Elem *, s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_002B2028(void *);
extern void *func_00152D28(s32, void *);
extern u32 D_0040E618[];

void func_001CA1D8(Buffer *b, Elem *dst, Elem *src) {
    Elem *begin = b->begin;
    Elem *end = b->end;
    Elem *cap = b->cap;
    s32 count;
    s32 newcount;
    s32 newsize;
    Elem *newbuf;
    Elem *ip;
    Elem *new_end;
    Elem *p;
    if (end == cap) {
        count = (s32)(((s32)((char *)end - (char *)begin) * 0x38E38E39) >> 2);
        newcount = count ? count * 2 : 1;
        newsize = newcount * 0x24;
        if (newsize != 0) {
            newbuf = func_002B1FC0(newsize);
            if (newbuf == NULL) newbuf = func_003D2910(newsize);
        } else {
            void *head = (void *)D_0040E618[-1];
            if (head != NULL) {
                newbuf = head;
                D_0040E618[-1] = (u32)*(void **)head;
            } else {
                newbuf = func_00152D28(0, (void *)D_0040E618[-1]);
            }
        }
        if (newbuf != NULL) {
            ip = func_001CA150(begin, dst, newbuf, 0);
            *ip = *src;
            new_end = func_001CA150(dst, end, ip + 1, 0);
        } else {
            new_end = NULL;
        }
        {
            s32 oldcount = (s32)(((s32)((char *)cap - (char *)begin) * 0x38E38E39) >> 2);
            if (oldcount != 0) {
                if (oldcount * 0x24 != 0) {
                    func_002B2028(begin);
                } else {
                    void *head = (void *)D_0040E618[-1];
                    *(void **)begin = head;
                    D_0040E618[-1] = (u32)begin;
                }
            }
        }
        b->begin = newbuf;
        b->end = new_end;
        b->cap = newbuf + newcount;
    } else {
        count = (s32)(((s32)((char *)(end - 1) - (char *)dst) * 0x38E38E39) >> 2);
        if (end != NULL) *end = *(end - 1);
        if (count > 0) {
            p = end - 1;
            do { *p = *(p - 1); --p; } while (--count > 0);
        }
        *dst = *src;
        b->end = end + 1;
    }
}
