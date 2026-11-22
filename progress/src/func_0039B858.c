typedef s32 Elem;
typedef struct { Elem *begin; Elem *end; Elem *cap; } Vec;

void func_003A89E0(s32, s32);
s32 func_0039B160(s32, void *, void *);
s32 func_0039B240(void *);
s32 func_0039B320(void *, s32);
s32 func_0039B620(void *, void *, void *);
void func_0039B738(s32, s32);
void func_0039B7F8(void *, void *, s32);
s32 func_003A8040(void *);
s32 func_003A8088(void *);

void func_0039B858(register Vec *arg0, s32 *arg1, s32 *arg2) {
    s32 sp8, sp12;
    Elem *sp16, *sp20;
    register s32 r17, r18, r19;

    if (arg0->end != arg0->cap) {
        func_003A89E0((s32)arg0->end, (s32)((u32)arg0->end + 0xFFFFFFFCu));
        arg0->end = (void *)((u32)arg0->end + 4u);
        sp8 = *arg2;
        func_0039B160((s32)arg1, (void *)((u32)arg0->end + 0xFFFFFFF8u), (void *)((u32)arg0->end + 0xFFFFFFFCu));
        *arg1 = sp8;
        return;
    }
    r17 = func_0039B240(arg0);
    sp8 = r17;
    if (sp8 != 0) {
        r18 = sp8 * 2;
    } else {
        r18 = 1;
    }
    sp12 = r18;
    sp16 = (Elem *)func_0039B320(arg0, sp12);
    sp20 = sp16;
    sp20 = (Elem *)func_0039B620((void *)arg0->begin, (void *)arg1, (void *)sp16);
    func_003A89E0((s32)sp20, (s32)arg2);
    sp20 = (Elem *)((u32)sp20 + 4u);
    sp20 = (Elem *)func_0039B620((void *)arg1, (void *)arg0->end, (void *)sp20);
    r19 = func_003A8040(arg0);
    func_0039B738(r19, func_003A8088(arg0));
    func_0039B7F8(arg0, (void *)arg0->begin, arg0->cap - arg0->begin);
    arg0->begin = sp16;
    arg0->end = sp20;
    arg0->cap = (Elem *)((u32)sp16 + ((s32)sp12 * 4));
}
