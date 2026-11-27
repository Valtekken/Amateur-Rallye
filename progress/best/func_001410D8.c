extern void *func_001930D8(void *, s32);
extern s32 func_00193138(void *, s32);
extern void *func_00193B60(void);
extern void func_001D4040(void *, void *);
extern void func_0021E4F0(void *);
extern void func_003FA310(void *, void *, s32);
extern char D_0044BC40[], D_0044BC48[], D_0044BC60[], D_0044BC78[], D_0044BC90[], D_0044BCA8[], D_0044BCC0[];

typedef struct { char pad[0xC]; s32 fC, f10, f14, f18, f1C, f20, f24, f28; } A;
typedef struct { char pad[0x78]; u64 bits; } Q;
typedef struct { char pad[0x4C]; Q *q; } B;

void func_001410D8(A *a, B *b) {
    char sp[0x50];
    if (func_00193138(func_00193B60(), a->fC) == 0) func_0021E4F0(b);
    {
        s32 out;
        func_003FA310(sp, D_0044BC40, (s32)func_001930D8(func_00193B60(), a->fC));
        func_001D4040(&out, sp);
        a->f10 = out;
        func_001D4040(&out, D_0044BC48);
        a->f14 = out;
    }
    {
        s32 out;
        func_003FA310(sp, D_0044BC60, (s32)func_001930D8(func_00193B60(), a->fC));
        func_001D4040(&out, sp);
        a->f18 = out;
    }
    {
        s32 out;
        func_003FA310(sp, D_0044BC78, (s32)func_001930D8(func_00193B60(), a->fC));
        func_001D4040(&out, sp);
        a->f1C = out;
    }
    {
        s32 out;
        func_003FA310(sp, D_0044BC90, (s32)func_001930D8(func_00193B60(), a->fC));
        func_001D4040(&out, sp);
        a->f20 = out;
    }
    {
        s32 out;
        func_003FA310(sp, D_0044BCA8, (s32)func_001930D8(func_00193B60(), a->fC));
        func_001D4040(&out, sp);
        a->f24 = out;
    }
    {
        s32 out;
        func_003FA310(sp, D_0044BCC0, (s32)func_001930D8(func_00193B60(), a->fC));
        func_001D4040(&out, sp);
        a->f28 = out;
    }
    if (b->q) b->q->bits = (b->q->bits & ~4) | 4;
}
