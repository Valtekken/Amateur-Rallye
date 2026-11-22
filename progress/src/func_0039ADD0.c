typedef struct { s32 a[6]; } Elem;
typedef struct { s32 a[12]; } Big;
typedef struct { Elem *begin; Elem *end; Elem *cap; } Vec;

s32 func_0039AD60(s32, void *, void *);
s32 func_003A51C8(void *, s32);
s32 func_003A5228(s32, void *);
s32 func_003A80D0(void *);
s32 func_003A8118(void *);
s32 func_003A8160(s32, s32);
s32 func_003A8230(void *);
s32 func_003A82B0(void *, s32);
s32 func_003A8310(s32, s32, s32);
s32 func_003A8390(void *, s32, s32);
s32 func_003A8528(s32, s32);

void func_0039ADD0(register Vec *arg0, s32 arg1, s32 arg2) {
    Elem tmp[2];
    s32 sp40, sp44, sp48, sp4C;
    register s32 r17, r18;

    if (arg0->end != arg0->cap) {
        func_003A8528((s32)arg0->end, (s32)((u32)arg0->end + 0xFFFFFFD0u));
        arg0->end = (void *)((u32)arg0->end + 0x30u);
        func_003A51C8(tmp, arg2);
        func_0039AD60(arg1, (void *)((u32)arg0->end + 0xFFFFFFA0u), (void *)((u32)arg0->end + 0xFFFFFFD0u));
        func_003A5228(arg1, tmp);
        return;
    }
    r17 = func_003A8230(arg0);
    sp40 = r17;
    if (sp40 != 0) {
        r18 = sp40 * 2;
    } else {
        r18 = 1;
    }
    sp44 = r18;
    sp48 = func_003A82B0(arg0, sp44);
    sp4C = sp48;
    sp4C = func_003A8310((s32)arg0->begin, arg1, sp48);
    func_003A8528(sp4C, arg2);
    sp4C = (s32)((u32)sp4C + 0x30u);
    sp4C = func_003A8310(arg1, (s32)arg0->end, sp4C);
    func_003A8160(func_003A80D0(arg0), func_003A8118(arg0));
    func_003A8390(arg0, (s32)arg0->begin, (s32)((Big *)arg0->cap - (Big *)arg0->begin));
    arg0->begin = (Elem *)sp48;
    arg0->end = (Elem *)sp4C;
    arg0->cap = (Elem *)((u32)sp48 + ((s32)sp44 * 0x30));
}
