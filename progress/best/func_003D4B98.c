typedef struct I9{s32 a,b,c,d;s64 e;u16 f;volatile u8 g,h;s32 i,j,k;void*l;}I9;
typedef struct O9{I9*p;s32 b,c;}O9;
extern u8 D_00489120[],D_00488F58[];
void *func_003D4B98(O9 *a, s32 b, s32 c, s32 d) {
    I9 *p;
    if (b) {
        I9 *q = (I9 *)((u8 *)a + 8);
        a->p = q;
        q->g = 4; q->h = 0; q->l = D_00489120; q->f = 32; q->e = 17; q->i = 6; q->j = 0;
        a->c = 0; q->b = 0; q->c = 0;
    }
    p = a->p;
    p->l = D_00488F58;
    if (!b) {
        u8 *t = D_00488F58;
        u64 x = *(u64 *)t;
        u64 y = *(u64 *)(t + 8);
        u16 v = *(u16 *)(t + 8);
        u32 pb = (u32)p - 8;
        s32 diff = (u32)a - pb;
        u64 sp[2];
        sp[0] = x; sp[1] = y;
        *(u16 *)((u8 *)sp + 8) = v + (u16)diff;
        p->l = sp;
    }
    p->g = 0;
    if (c == 0) p->g = 4;
    p->a = c; p->b = d;
    p->f = 32; p->e = 17; p->i = 6; p->j = 0; p->h = 0; p->c = 0;
    return a;
}
