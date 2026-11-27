typedef struct { float x, y, z; } Vec;
typedef struct { int tag; Vec a, b; float x, y; } E;
extern void func_0021B988(void *, s32, s32, E *);
static inline void vc(Vec *d, Vec *s){ d->x=s->x; d->y=s->y; d->z=s->z; }
static inline void ec(E *d, E *s){ d->tag=s->tag; vc(&d->a,&s->a); vc(&d->b,&s->b); d->x=s->x; d->y=s->y; }
void func_0021BB60(void *arg0, void *arg1) {
    s32 n = (s32)(((s32)arg1 - (s32)arg0) * 0x38E38E39) >> 2;
    if (n >= 2) {
        s32 t = n - 2;
        s32 k = (s32)(t + (s32)((u32)t >> 31)) >> 1;
        char *cur = (char *)arg0 + k * 0x24 + 0x10;
        E v;
        do {
            ec(&v, (E *)(cur - 0x10));
            func_0021B988(arg0, k, n, &v);
            cur -= 0x24;
            if (k == 0) break;
            k--;
        } while (1);
    }
}
