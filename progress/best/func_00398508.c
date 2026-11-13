typedef struct { void *begin; void *end; void *cap; } Vec;
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
void func_003A6460(void *, void *);

void func_00398508(register Vec *arg0, s32 arg1, s32 arg2) {
    void *tmp;
    s32 sp20, sp24;
    void *sp28, *sp2C;

    if (arg0->end != arg0->cap) {
        func_003A6460(arg0->end, arg0->end - 8);
        arg0->end += 8;
        func_003A6420(&tmp, arg2);
        func_00398030(arg1, arg0->end - 16, arg0->end - 8);
        func_003A6370(arg1, &tmp);
        return;
    }

    sp20 = func_003A6178(arg0);
    sp24 = sp20 ? sp20 * 2 : 1;
    sp28 = func_003981A8(arg0, sp24);
    sp2C = func_00397E70(arg0->begin, (void *)arg1, sp28);
    func_003A6460(sp2C, (void *)arg2);
    sp2C += 8;
    sp2C = func_00397E70((void *)arg1, arg0->end, sp2C);
    func_003A6118(func_003A6300(arg0), func_003A62C8(arg0));
    func_003A6088(arg0, arg0->begin, ((s32)arg0->cap - (s32)arg0->begin) >> 3);
    arg0->begin = sp28;
    arg0->end = sp2C;
    arg0->cap = sp28 + sp24 * 8;
}
