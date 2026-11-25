typedef struct { void **b, **e, **c; char pad[0x44]; } Elem;
typedef struct { Elem **b, **e; } Outer;
extern void func_002B2028(void*, void*, void*);
extern int D_002AD390(void*);
extern int func_003F93CC(void*, void*, int);
extern void *D_0040E618[1];

void func_001FDA80(Outer *outer) {
    if (outer->b != outer->e) {
        s32 magic = 0xCCCCCCCD;
        u32 sz = 0x50;
        Elem **i = outer->b;
        do {
            Elem *elt = *i;
            if (elt) {
                Elem *b = (Elem*)elt->b;
                Elem *e = (Elem*)elt->e;
                if (b < e) {
                    Elem *j = b;
                    do { j++; } while (j < e);
                }
                {
                    Elem *c = (Elem*)elt->c;
                    s32 n = (s32)((u32)c - (u32)b) * magic >> 4;
                    if (n) {
                        if (n * sz != 0) func_002B2028(b, e, c);
                        else { *(void**)b = D_0040E618[-1]; D_0040E618[-1] = b; }
                    }
                }
                D_002AD390(elt);
            }
        } while (++i != outer->e);
    }
    {
        Elem **b = outer->b;
        Elem **e = outer->e;
        func_003F93CC(b, e, 0);
        outer->e = (Elem**)((char*)outer->e - ((char*)e - (char*)b));
    }
}
