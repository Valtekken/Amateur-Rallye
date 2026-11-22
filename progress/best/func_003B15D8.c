extern s32 func_003A3910(s32);
extern s32 func_003B3118(void *, s32);
extern void *func_003B30B0(void *, s32);
extern void func_003A3170(void *, void *);
extern void func_003B3320(s32, s32 *);
extern void func_003B0EE0(void *);
extern void func_003A34D0(void *, s32);
extern void func_003A3C30(void *, s32 *);

typedef struct {
    void *f00; void *f04; s32 f08; void *f0C; void *f10; s32 f14;
    void *f18; void *f1C; u8 _pad0[4]; void *f24; u8 _pad1[8]; s32 unk30;
} S;

void func_003B15D8(S *arg0, s32 arg1) {
    s32 sp0, sp4, sp20;
    void *sp10, *t19;
    sp20 = arg1;
    sp0 = func_003A3910(func_003B3118(arg0, arg1));
    arg0->unk30 = arg0->unk30 - 1;
    if (sp0 != arg0->unk30) {
        sp4 = func_003A3910(func_003B3118(&arg0->f0C, arg0->unk30));
        t19 = func_003B30B0(&arg0->f24, sp0);
        func_003A3170(t19, func_003B30B0(&arg0->f24, arg0->unk30));
        func_003B3320(func_003B3118(arg0, sp4), &sp0);
        func_003B3320(func_003B3118(&arg0->f0C, sp0), &sp4);
    }
    t19 = func_003B30B0(&arg0->f24, arg0->unk30);
    func_003B0EE0(&sp10);
    func_003A3170(t19, &sp10);
    func_003A34D0(&sp10, 2);
    func_003A3C30(&arg0->f18, &sp20);
}
