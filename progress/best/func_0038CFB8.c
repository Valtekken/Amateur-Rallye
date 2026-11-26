extern void *D_004262D0[];

typedef struct { f32 a, b; } PF;
typedef struct { s32 a, b; } PI;
typedef struct { s32 f0, f4; PF p[3]; PI q[3]; PI r[2]; } S48;
typedef struct { s32 a; s32 count; } C8;
typedef struct { void *tab; char pad[0x20]; void *base; } D;

void *func_0038CFB8(S48 *dst, S48 *src) {
    s32 id = src->f0;
    dst->f0 = id;
    if (id >= 0) {
        s32 idx = ((s32 *)((D *)&D_004262D0)->tab)[id];
        C8 *c = (C8 *)((char *)((D *)&D_004262D0)->base + idx * 8);
        c->count++;
    }
    dst->f4 = src->f4;
    {
        PF *sp = src->p, *dp = dst->p;
        s32 i = 2, stop = -1;
        do {
            i--;
            dp->a = sp->a;
            dp->b = sp->b;
            sp++;
            dp++;
        } while (i != stop);
    }
    {
        PI *sp = src->q, *dp = dst->q;
        s32 i = 2, stop = -1;
        do {
            i--;
            dp->a = sp->a;
            dp->b = sp->b;
            sp++;
            dp++;
        } while (i != stop);
    }
    {
        PI *sp = src->r, *dp = dst->r;
        s32 i = 1, stop = -1;
        do {
            i--;
            dp->a = sp->a;
            dp->b = sp->b;
            sp++;
            dp++;
        } while (i != stop);
    }
    return dst;
}
