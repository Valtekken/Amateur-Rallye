typedef struct {
    void *next;
    s32 size;
    s32 ref;
    s32 cap;
} Hdr;

extern void func_002AE2F0(void);
extern void *func_002AE7F8(s32);
extern void func_002AE8B0(void *, void *, void *);
extern void func_002B2028(void *);
extern void *func_003CD828(void *);
extern void func_003CD948(void *, s32, s32, s32, s32);
extern void func_003D27D8(void *, void *);
extern s32 func_003FA9B8(s32);
extern Hdr D_00436208;
extern void *D_00437E18[16];
extern void *D_0047D9A8[6];
extern void *D_00488DB0[6];
extern void *D_00488DF8[6];
extern void func_003D2308(void);

static void release_ref(void *p) {
    Hdr *h = (Hdr *)((char *)p - 0x10);
    s32 n = h->ref - 1;
    h->ref = n;
    if (n == 0) {
        u32 sz = (u32)h->size;
        if ((u32)(sz + 0x10) >= 0x81U) {
            func_002B2028(h);
        } else {
            void **slot = &D_00437E18[(((u32)(sz + 0x17) >> 3) - 1)];
            *(void **)p = *slot;
            *slot = h;
        }
    }
}

void func_003D16A8(register s32 arg0) {
    void *sp10;
    void *sp4;
    void *sp0;
    void *obj;

    if (D_00436208.cap == 0) {
        sp10 = &D_00436208 + 1;
        D_00436208.ref++;
    } else {
        sp10 = func_003CD828(&D_00436208);
    }
    func_003CD948(&sp10, 0, -1, arg0, func_003FA9B8(arg0));
    {
        Hdr *h = (Hdr *)((char *)sp10 - 0x10);
        if (h->cap != 0) {
            sp4 = func_003CD828(h);
        } else {
            h->ref++;
            sp4 = sp10;
        }
    }
    sp0 = D_00488DB0;
    for (;;) {
        release_ref(sp10);
        obj = func_002AE7F8(8);
        func_003D27D8(obj, &sp0);
        *(void **)obj = D_00488DB0;
        release_ref(sp4);
        sp0 = D_0047D9A8;
        {
            void (**vt)(void);
            s32 rv;
            vt = *(void ***)obj;
            rv = ((s32 (*)(void))vt[1])();
            func_002AE8B0(obj, (void *)rv, func_003D2308);
        }
        func_002AE2F0();
        release_ref(sp10);
    }
}
