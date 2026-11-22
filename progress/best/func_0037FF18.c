extern s32 func_00151930(void *);
extern void func_00152720(s32 *, s32 *, s32 *);
extern void func_002B2028(s32 *);
extern void D_002AD390(void *);
extern s32 D_0040E618[];
extern s32 D_0040E658[];
extern s32 D_004262D0[];

typedef struct { s32 *begin; s32 *end; s32 *cap; } Vec;

static inline s32 *obj_release(s32 *p) {
    s32 *h = p - 4;
    s32 n = h[2] - 1;
    h[2] = n;
    if (n == 0) {
        if (h[1] + 4 != 0) func_002B2028(h);
        else { h[0] = D_0040E618[-1]; D_0040E618[-1] = (s32)h; }
    }
    return p;
}
static inline s32 *obj_addref(s32 *p) {
    s32 *h = p - 4;
    if (h[3] != 0) return (s32 *)func_00151930(h);
    h[2]++;
    return p;
}
static inline void vec_push(Vec *v, s32 *val) {
    if (v->end != v->cap) { if (v->begin != 0) *v->begin = *val; v->begin++; }
    else func_00152720((s32 *)v, (s32 *)v->begin, val);
}
static inline void table_dec_ref(s32 idx, s32 *saved) {
    s32 *t = D_004262D0;
    s32 *offs = (s32 *)t[0], *c3 = (s32 *)t[3], *ents = (s32 *)t[9];
    s32 *e = ents + offs[idx] * 2;
    s32 n = e[1] - 1, dec, removed, pos;
    s32 *last, *rm, *o;
    e[1] = n;
    if (n == 0) {
        dec = t[12] - 1;
        removed = offs[idx];
        t[12] = dec;
        *saved = idx;
        if (removed != dec) {
            last = ents + dec * 2; rm = ents + removed * 2; pos = c3[dec];
            if (last != rm) {
                obj_release((s32 *)rm[0]);
                rm[0] = (s32)obj_addref((s32 *)last[0]);
                rm[1] = last[1];
                offs[pos] = removed; c3[removed] = pos;
            }
        }
        o = obj_addref(D_0040E658 + 4);
        last = ents + t[12] * 2;
        if (last != o) {
            o[-4] = 0; o[-3] = 0;
            obj_release((s32 *)last[0]);
            last[0] = (s32)o; last[1] = 0;
        }
        obj_release(o);
        vec_push((Vec *)(t + 6), saved);
    }
}

void func_0037FF18(s32 *arg0, s32 arg1) {
    s32 saved;
    if (arg0[1] >= 0) {
        table_dec_ref(arg0[1], &saved);
        arg0[1] = -1;
    }
    if (arg1 & 1) D_002AD390(arg0);
}
