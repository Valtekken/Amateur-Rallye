typedef struct { f32 x, y, z; } V;
typedef struct { V *b, *e, *c; } VI;
extern void *func_002B1FC0(u32), *func_003D2910(u32), *func_00152D28(s32);
extern void func_002B2028(void *);
extern u32 D_0040E618[];
extern V *func_001C5A30(V*,V*,V*,s32);
extern V *func_0020FDE0(V*,s32,V*,s32);
extern void func_0020FDA8(V*,V*,V*);
static inline void *al(u32 bytes){void *p;if(bytes){p=func_002B1FC0(bytes);if(p)return p;return func_003D2910(bytes);}else{void *h=(void*)D_0040E618[-1];if(!h)return func_00152D28(0);D_0040E618[-1]=*(u32*)h;return h;}}

void func_0020FE18(VI *vec, V *src, s32 n, V *val) {
    V tmp;
    s32 sp10, sp14;
    V *nb, *p, *a, *b, *oldend;
    if (n == 0) return;
    sp14 = n;
    if ((u32)(vec->c - vec->e) >= (u32)n) {
        tmp.x = val->x; tmp.y = val->y; tmp.z = val->z;
        { s32 after = vec->e - src;
        if ((u32)sp14 < (u32)after) {
            func_001C5A30(vec->e - sp14, vec->e, vec->e, 0);
            a = vec->e - sp14;
            b = vec->e;
            vec->e = vec->e + sp14;
            { s32 k = a - src; while (k > 0) { a--; b--; *b = *a; k--; } }
            func_0020FDA8(src, src + sp14, &tmp);
        } else {
            oldend = vec->e;
            p = func_0020FDE0(oldend, sp14 - after, &tmp, 0);
            vec->e = oldend + (sp14 - after);
            func_001C5A30(src, oldend, p, 0);
            func_0020FDA8(src, oldend, &tmp);
            vec->e = oldend + sp14;
        }
        }
    } else {
        s32 sz = vec->e - vec->b;
        s32 *q;
        s32 newsz;
        sp10 = sz;
        q = ((u32)sz < (u32)sp14) ? &sp14 : &sp10;
        newsz = sz + *q;
        nb = al(newsz * 12);
        p = func_001C5A30(vec->b, src, nb, 0);
        p = func_0020FDE0(p, sp14, val, 0);
        p = func_001C5A30(src, vec->e, p, 0);
        {
            s32 osz = vec->e - vec->b;
            V *qq;
            if (vec->b < vec->e) { qq = vec->b + 1; do { qq++; } while (qq < vec->e); }
            if (osz) {
                if (osz * 12) func_002B2028(vec->b);
                else { *(u32*)vec->b = D_0040E618[-1]; D_0040E618[-1] = (u32)vec->b; }
            }
        }
        vec->e = p;
        vec->b = nb;
        vec->c = nb + newsz;
    }
}
