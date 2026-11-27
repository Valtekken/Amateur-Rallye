typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s64 e;
    u16 f;
    volatile u8 g;
    volatile u8 h;
    s32 i;
    s32 j;
    s32 k;
    void *l;
} Inner;

typedef struct {
    Inner *p;
    s32 unk_4;
    s32 c;
} Outer;

extern u8 D_00488F58[];
extern u8 D_00489120[];

Outer* func_003D6248(Outer *a, s32 b) {
    Inner *p;
    u8 *addr1;
    u8 *addr2;
    u64 val1, val2;
    u16 half;
    u32 base, diff;
    u64 sp[2];

    if (b != 0) {
        p = (Inner *)((u8 *)a + 8);
        a->p = p;
        p->g = 4;
        p->h = 0;
        addr1 = D_00489120;
        p->l = addr1;
        p->f = 0x20;
        p->e = 0x11;
        p->i = 6;
        p->j = 0;
        a->c = 0;
        p->b = 0;
        p->c = 0;
    }
    p = a->p;
    addr2 = D_00488F58;
    p->l = addr2;
    if (b == 0) {
        val1 = *(u64 *)addr2;
        val2 = *(u64 *)(addr2 + 8);
        half = *(u16 *)(addr2 + 8);
        base = (u32)p - 8;
        diff = (u32)a - base;
        sp[0] = val1;
        sp[1] = val2;
        *(u16 *)((u8 *)sp + 8) = half + (u16)diff;
        p->l = sp;
    }
    return a;
}
