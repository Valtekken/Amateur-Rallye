typedef struct { float x, y, z, w; } V;
typedef struct { int a, b; int pad[2]; V v[4]; } E;

extern void func_00216048(E *, int, int, E *);

static inline void vc(V *d, V *s) { d->x = s->x; d->y = s->y; d->z = s->z; d->w = s->w; }
static inline void ec(E *d, E *s) { d->a = s->a; d->b = s->b; vc(&d->v[0], &s->v[0]); vc(&d->v[1], &s->v[1]); vc(&d->v[2], &s->v[2]); vc(&d->v[3], &s->v[3]); }

void func_00216378(E *base, E *end) {
    int n;
    int mid;
    char *p;
    E tmp;

    n = (int)(((char *)end - (char *)base) * (int)0xCCCCCCCD) >> 4;
    if (n >= 2) {
        mid = (n - 2) / 2;
        p = (char *)base + mid * 0x50 + 0x40;
        do {
            ec(&tmp, (E *)(p - 0x40));
            func_00216048(base, mid, n, &tmp);
            if (mid == 0) {
                break;
            }
            p -= 0x50;
            mid--;
        } while (1);
    }
}
