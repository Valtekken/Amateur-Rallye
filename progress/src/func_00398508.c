typedef struct { s32 a, b; } Elem;
typedef struct { Elem *begin; Elem *end; Elem *cap; } Vec;

s32 func_00397E70(void *, void *, void *);
s32 func_00398030(s32, void *, void *);
s32 func_003981A8(void *, s32);
void func_003A6088(void *, void *, s32);
void func_003A6118(s32, s32);
s32 func_003A6178(void *);
s32 func_003A62C8(void *);
s32 func_003A6300(void *);
void func_003A6370(s32, void *);
void func_003A6420(void *, s32);
void func_003A6460(s32, s32);

void func_00398508(register Vec *arg0, s32 arg1, s32 arg2) {
    f32 tmp[4];
    s32 sp20, sp24;
    Elem *sp28, *sp2C;
    register s32 r17;
    register s32 r18;

    if (arg0->end != arg0->cap) {
        func_003A6460((s32)arg0->end, (s32)((u32)arg0->end + 0xFFFFFFF8u));
        arg0->end = (void *)((u32)arg0->end + 8u);
        func_003A6420(tmp, arg2);
        func_00398030(arg1, (void *)((u32)arg0->end + 0xFFFFFFF0u), (void *)((u32)arg0->end + 0xFFFFFFF8u));
        func_003A6370(arg1, tmp);
        return;
    }
    r17 = func_003A6178(arg0);
    sp20 = r17;
    if (sp20 != 0) {
        r18 = sp20 * 2;
    } else {
        r18 = 1;
    }
    sp24 = r18;
    sp28 = (Elem *)func_003981A8(arg0, sp24);
    sp2C = sp28;
    sp2C = (Elem *)func_00397E70(arg0->begin, (void *)arg1, sp28);
    func_003A6460((s32)sp2C, arg2);
    sp2C = (Elem *)((u32)sp2C + 8u);
    sp2C = (Elem *)func_00397E70((void *)arg1, arg0->end, sp2C);
    func_003A6118(func_003A6300(arg0), func_003A62C8(arg0));
    func_003A6088(arg0, arg0->begin, arg0->cap - arg0->begin);
    arg0->begin = sp28;
    arg0->end = sp2C;
    arg0->cap = (Elem *)((u32)sp28 + ((s32)sp24 * 8));
}
