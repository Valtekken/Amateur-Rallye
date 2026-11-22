typedef struct { s32 a[6]; } Elem;
typedef struct { s32 a[6]; } Big;
typedef struct { Elem *begin; Elem *end; Elem *cap; } Vec;

extern void func_003A61F0(s32, s32);
extern void func_00397608(s32, s32, s32);
extern s32 func_003976E8(Vec *);
extern Elem *func_003977D0(Vec *, s32);
extern Elem *func_00397950(Elem *, Elem *, Elem *);
extern s32 func_003A6518(Vec *);
extern s32 func_003A6290(Vec *);
extern void func_003A6028(s32, s32);
extern void func_003A5F98(Vec *, Elem *, s32);

void func_003979D0(register Vec *arg0, Elem *arg1, Elem *arg2) {
    Elem tmp;
    s32 sp30, sp34, sp38, sp3C;
    register s32 r17, r18;

    if (arg0->end != arg0->cap) {
        func_003A61F0((s32)arg0->end, (s32)((u32)arg0->end + 0xFFFFFFE8u));
        arg0->end = (void *)((u32)arg0->end + 0x18u);
        tmp = *arg2;
        func_00397608((s32)arg1, (s32)((u32)arg0->end + 0xFFFFFFD0u), (s32)((u32)arg0->end + 0xFFFFFFE8u));
        *arg1 = tmp;
        return;
    }
    r17 = func_003976E8(arg0);
    sp30 = r17;
    if (sp30 != 0) {
        r18 = sp30 * 2;
    } else {
        r18 = 1;
    }
    sp34 = r18;
    sp38 = func_003977D0(arg0, sp34);
    sp3C = sp38;
    sp3C = func_00397950(arg0->begin, arg1, sp38);
    func_003A61F0(sp3C, (s32)arg2);
    sp3C = (s32)((u32)sp3C + 0x18u);
    sp3C = func_00397950(arg1, arg0->end, sp3C);
    func_003A6028(func_003A6518(arg0), func_003A6290(arg0));
    func_003A5F98(arg0, arg0->begin, (Big *)arg0->cap - (Big *)arg0->begin);
    arg0->begin = (Elem *)sp38;
    arg0->end = (Elem *)sp3C;
    arg0->cap = (Elem *)((u32)sp38 + ((s32)sp34 * 0x18));
}
