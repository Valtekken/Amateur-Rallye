typedef s32 Elem;
typedef struct { Elem *begin; Elem *end; Elem *cap; } Vec;

void func_003A3BB8(s32, s32);
s32 func_00396918(s32, void *, void *);
s32 func_003A3B08(void *);
s32 func_003A40D0(void *, s32);
s32 func_003A41B8(void *, void *, void *);
void func_003A37C0(s32, s32);
void func_003A36D0(void *, void *, s32);
s32 func_003AA5F0(void *);
s32 func_003A3B80(void *);

void func_00396988(register Vec *arg0, s32 *arg1, s32 *arg2) {
    s32 sp8, sp12;
    Elem *sp16, *sp20;
    register s32 r17, r18, r19;

    if (arg0->end != arg0->cap) {
        func_003A3BB8((s32)arg0->end, (s32)((u32)arg0->end + 0xFFFFFFFCu));
        arg0->end = (void *)((u32)arg0->end + 4u);
        sp8 = *arg2;
        func_00396918((s32)arg1, (void *)((u32)arg0->end + 0xFFFFFFF8u), (void *)((u32)arg0->end + 0xFFFFFFFCu));
        *arg1 = sp8;
        return;
    }
    r17 = func_003A3B08(arg0);
    sp8 = r17;
    if (sp8 != 0) {
        r18 = sp8 * 2;
    } else {
        r18 = 1;
    }
    sp12 = r18;
    sp16 = (Elem *)func_003A40D0(arg0, sp12);
    sp20 = sp16;
    sp20 = (Elem *)func_003A41B8((void *)arg0->begin, (void *)arg1, (void *)sp16);
    func_003A3BB8((s32)sp20, (s32)arg2);
    sp20 = (Elem *)((u32)sp20 + 4u);
    sp20 = (Elem *)func_003A41B8((void *)arg1, (void *)arg0->end, (void *)sp20);
    r19 = func_003AA5F0(arg0);
    func_003A37C0(r19, func_003A3B80(arg0));
    func_003A36D0(arg0, (void *)arg0->begin, arg0->cap - arg0->begin);
    arg0->begin = sp16;
    arg0->end = sp20;
    arg0->cap = (Elem *)((u32)sp16 + ((s32)sp12 * 4));
}
