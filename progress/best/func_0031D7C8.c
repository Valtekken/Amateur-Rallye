typedef struct { s32 *f0; s32 f4; s32 f8; s32 fC; s32 f10[2]; s32 f14; } Vec;
typedef struct { s32 f0; s32 *cur; s32 *end; } Glob;
extern s32 D_0043C000;
extern Glob D_0042DB58;
extern u8 D_78[];
extern void D_002AD530(s32);
extern s32 D_002AD5A8(s32, s32);
extern void func_003F931C(void *, void *, s32);
extern void func_001D7D00(Glob *, s32 *, s32 *);

void func_0031D7C8(void *arg0, s32 arg1, s32 arg2) {
    Glob *g = &D_0042DB58;
    Vec *p = ((Vec **)arg0)[5];
    if ((p->f8 - p->fC) < 8) {
        s32 one = 1;
        u32 size = p->fC + 0x28;
        s32 i = 0;
        s32 power, cap, raw, aligned;
        D_0043C000 = p->f10[0];
        while ((u32)(one << i) < size) i++;
        power = one << i;
        cap = power - 0x20;
        raw = D_002AD5A8(power << 2, size);
        aligned = (raw + 0x7F) & 0xFFFFFF80;
        if (p->fC > 0) func_003F931C((void *)aligned, (void *)p->f0, p->fC << 2);
        if (p->f4 != 0) D_002AD530(p->f4);
        p->f4 = raw;
        p->f0 = (s32 *)aligned;
        p->f8 = cap;
        D_0043C000 = 0;
    }
    p->f0[p->fC++] = (arg2 << 2) | 0x30000000;
    {
        s32 tmp = p->fC;
        if (g->cur != g->end) {
            if (g->cur != 0) *g->cur = tmp;
            g->cur += 1;
        } else {
            func_001D7D00(g, g->cur, &tmp);
        }
    }
    p->f0[p->fC++] = arg1;
    p->f0[p->fC++] = 0x01000404;
    p->f0[p->fC++] = (arg2 << 0x10) | 0x6C008000;
    *(s32 *)((u8 *)arg0 + 0x34) = ((Vec **)arg0)[5]->fC;
    p->f0[p->fC++] = 0x10000000;
    p->f0[p->fC++] = 0;
    p->f0[p->fC++] = ((u32)&D_78 >> 3) | 0x14000000;
    p->f0[p->fC++] = 0;
}
