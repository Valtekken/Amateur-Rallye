typedef struct { void **b, **e, **c; char pad[0x44]; } Elem;
typedef struct { Elem **b, **e; } Outer;
extern void func_002B2028(void*);
extern void D_002AD390(void*);
extern s32 func_003F93CC(void*, void*, s32);
extern void *D_0040E618[];

void func_001FDA80(Outer *outer) {
    Elem **b = outer->b;
    if (b != outer->e) {
        s32 magic = 0xCCCCCCCD;
        u32 sz = 0x50;
        do {
            Elem *elt = *b;
            Elem **next = b + 1;
            if (elt) {
                Elem *j = (Elem*)elt->b;
                Elem *ee = (Elem*)elt->e;
                s32 cmp = j < ee;
                Elem *eb = j;
                if (cmp) {
                    do { j++; } while (j < ee);
                }
                {
                    Elem *ec = (Elem*)elt->c;
                    s32 n = (s32)((u32)ec - (u32)eb) * magic >> 4;
                    if (n) {
                        if (n * sz != 0) {
                            func_002B2028(eb);
                        } else {
                            *(void**)eb = D_0040E618[-1];
                            D_0040E618[-1] = eb;
                        }
                    }
                }
                D_002AD390(elt);
            }
            b = next;
        } while (b != outer->e);
    }
    {
        Elem **ob = outer->b;
        Elem **oe = outer->e;
        func_003F93CC(ob, oe, 0);
        outer->e = (Elem**)((char*)outer->e - ((char*)oe - (char*)ob));
    }
}
