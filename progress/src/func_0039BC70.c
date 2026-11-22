typedef struct { s32 a, b; } Elem;
typedef struct { Elem *begin; Elem *end; Elem *cap; } Vec;

extern void func_003A8D70(void *, void *);
extern void func_0039BC00(void *, void *, void *);
extern s32 func_003A8640(void *);
extern Elem *func_003A8B10(void *, s32);
extern Elem *func_003A8B80(void *, void *, Elem *);
extern s32 func_003A59D8(void *);
extern s32 func_003A5A10(void *);
extern void func_003A5A48(s32, s32);
extern void func_003A8C10(void *, void *, s32);

void func_0039BC70(register Vec *arg0, u64 *arg1, u64 *arg2) {
    u64 sp8;
    s32 sp20, sp24;
    Elem *sp28, *sp2C;
    register s32 r17;
    register s32 r18;

    if (arg0->end != arg0->cap) {
        func_003A8D70((void *)arg0->end, (void *)((u32)arg0->end + 0xFFFFFFF8u));
        arg0->end = (Elem *)((u32)arg0->end + 8u);
        sp8 = *arg2;
        func_0039BC00((void *)arg1, (void *)((u32)arg0->end + 0xFFFFFFF0u), (void *)((u32)arg0->end + 0xFFFFFFF8u));
        *(u64 *)arg1 = sp8;
        return;
    }
    r17 = func_003A8640((void *)arg0);
    sp20 = r17;
    if (sp20 != 0) {
        r18 = sp20 * 2;
    } else {
        r18 = 1;
    }
    sp24 = r18;
    sp28 = func_003A8B10((void *)arg0, sp24);
    sp2C = sp28;
    sp2C = func_003A8B80((void *)arg0->begin, (void *)arg1, sp28);
    func_003A8D70((void *)sp2C, (void *)arg2);
    sp2C = (Elem *)((u32)sp2C + 8u);
    sp2C = func_003A8B80((void *)arg1, (void *)arg0->end, sp2C);
    func_003A5A48(func_003A59D8((void *)arg0), func_003A5A10((void *)arg0));
    func_003A8C10((void *)arg0, (void *)arg0->begin, arg0->cap - arg0->begin);
    arg0->begin = sp28;
    arg0->end = sp2C;
    arg0->cap = (Elem *)((u32)sp28 + ((s32)sp24 * 8));
}
