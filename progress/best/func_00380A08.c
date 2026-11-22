extern s32 func_00151930(void *);
extern void func_00151A28(s32 *, void *, s32, void *, s32);
extern void func_00152720(s32 *, s32 *, s32 *);
extern void func_00152F88(void *, s32, u16);
extern void func_001531D8(s32 *, void *, u16 *);
extern void func_00153350(s32 *, s32, s32 *);
extern void *func_002065C8(s32);
extern void func_002B2028(s32 *);
extern void **func_002B4AD8(void);
extern s32 *func_00380998(s32 *, s32 *);
extern void func_00384590(s32 **);
extern s32 func_003853D8(s32);
extern s32 *func_00385458(s32);
extern s32 func_003FA9B8(void *);
extern void *D_002AD408(s32, void *);
extern s32 D_0040E618[];
extern s32 D_0040E658[];
extern s32 D_004262D0[];
extern char D_00486DE0[];
extern char D_00486E60[];

typedef struct { s32 *p; s32 n; } Obj;
typedef struct { s32 *begin; s32 *end; s32 *cap; } Vec;
typedef struct { s32 a, b; } Pair;

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
    if (v->end != v->cap) {
        if (v->begin != 0) *v->begin = *val;
        v->begin++;
    } else func_00152720((s32 *)v, (s32 *)v->begin, val);
}

static inline void table_dec_ref(s32 idx, s32 *saved) {
    s32 *t = D_004262D0;
    s32 *offs = (s32 *)t[0];
    s32 *c3 = (s32 *)t[3];
    s32 *ents = (s32 *)t[9];
    s32 *e = ents + offs[idx] * 2;
    s32 n = e[1] - 1;
    e[1] = n;
    if (n == 0) {
        s32 dec = t[12] - 1;
        s32 removed = offs[idx];
        s32 *last, *rm, *o;
        s32 pos;
        t[12] = dec;
        *saved = idx;
        if (removed != dec) {
            last = ents + dec * 2;
            rm = ents + removed * 2;
            pos = c3[dec];
            if (last != rm) {
                obj_release((s32 *)rm[0]);
                rm[0] = (s32)obj_addref((s32 *)last[0]);
                rm[1] = last[1];
                offs[pos] = removed;
                c3[removed] = pos;
            }
        }
        o = obj_addref(D_0040E658 + 4);
        last = ents + t[12] * 2;
        if (last != o) {
            o[-4] = 0;
            o[-3] = 0;
            obj_release((s32 *)last[0]);
            last[0] = (s32)o;
            last[1] = 0;
        }
        obj_release(o);
        vec_push((Vec *)(t + 6), saved);
    }
}

static inline void table_inc_ref(s32 idx) {
    s32 *t = D_004262D0;
    s32 *e = (s32 *)t[9] + ((s32 *)t[0])[idx] * 2;
    e[1]++;
}

void func_00380A08(s32 *arg0, s32 *arg1) {
    s32 *t = D_004262D0;
    s32 old = arg0[0], newv = arg1[0];
    s32 saved, saved2;
    Obj tmp;
    s32 name0, name1;
    s32 *name;
    void **ctx;
    void *got, *p1, *p2, *newobj;
    s32 *vt, *vv, *vec, *p;
    s32 n, i, off, sub, a, b;
    Pair pair;
    u16 uh, ul;
    s32 *work;

    if (old != newv) {
        if (old >= 0) table_dec_ref(old, &saved);
        arg0[0] = newv;
        if (newv >= 0) table_inc_ref(newv);
    }
    ctx = func_002B4AD8();
    {
        s32 *c = (s32 *)*ctx;
        got = (void *)((s32 (*)(void *, void *))c[0x34 / 4])((char *)*ctx + c[0x30 / 4], (void *)((s32 (*)(void *, void *))c[0x34 / 4]));
    }
    tmp.p = obj_addref(D_0040E658 + 4);
    tmp.n = 0;
    name = 0;
    func_00151A28((s32 *)&tmp, 0, -1, got, func_003FA9B8(got));
    if (newv >= 0) {
        s32 *e = (s32 *)t[9] + ((s32 *)t[0])[newv] * 2;
        name = (s32 *)e[0];
        sub = name[-4];
        if (sub == 0) name = (s32 *)&D_00486DE0;
        else { *(s32 *)((char *)name + sub) = 0; name = (s32 *)e[0]; }
    } else name = (s32 *)&D_00486DE0;
    func_00151A28((s32 *)&tmp, (void *)tmp.p[-4], 0, name, func_003FA9B8(name));
    func_00151A28((s32 *)&tmp, (void *)tmp.p[-4], 0, (void *)&D_00486E60, func_003FA9B8((void *)&D_00486E60));
    name = (s32 *)tmp.p[-4];
    if (name == 0) name = (s32 *)&D_00486DE0;
    else { *(s32 *)((char *)name + (s32)tmp.p[-4]) = 0; name = (s32 *)&tmp; }
    p1 = (void *)func_00380998(arg0, name);
    if ((s32)p1 != arg0[4]) {
        if (arg0[4] != 0) {
            s32 *q = (s32 *)arg0[4];
            s32 r = q[0] - 1;
            q[0] = r;
            if (r == 0) {
                vt = (s32 *)q[1];
                ((void (*)(void *, s32, void *))vt[3])((char *)q + vt[2], 3, q);
            }
        }
        arg0[4] = (s32)p1;
        if (p1 != 0) ((s32 *)p1)[0]++;
    }
    vt = (s32 *)arg0[3];
    sub = ((s32 (*)(void *))vt[0x40 / 4])((char *)arg0 + vt[0x30 / 4]);
    if (sub != 0) {
        p2 = func_002065C8((s32)D_002AD408(0x20, &tmp));
        *(s32 *)((char *)p1 + 0x28) = (s32)p2;
        vv = (s32 *)p1;
        vec = (s32 *)((char *)vv + 0x14);
        n = (vv[7] - vv[6]) >> 2;
        work = (s32 *)vec[1];
        i = 0;
        while (n != 0) {
            p = (s32 *)*work;
            if (p == 0) break;
            i++;
            work++;
            if ((u32)i >= (u32)((vv[7] - (s32)vec[1]) >> 2)) { work = 0; break; }
        }
        if (p == 0 || work == 0) work = 0;
        while (work != 0) {
            ul = *(u16 *)((char *)*work + 4);
            uh = *(u16 *)((char *)*work + 6);
            name0 = ul; name1 = uh;
            a = *(s32 *)((char *)p2 + 0x10) + 1;
            *(s32 *)((char *)p2 + 0x10) = a;
            func_00152F88(p2, a, uh);
            func_001531D8((s32 *)&pair, p2, (u16 *)&name0);
            func_00384590(&work);
        }
        vv = (s32 *)p1;
        n = ((vv[3] - vv[2]) * (s32)0xAAAAAAAB) >> 2;
        if (n > 0) {
            off = 0;
            vec = (s32 *)p2 + 5;
            while (n-- > 0) {
                pair.a = func_003853D8(vv[2] + off);
                pair.b = (s32)func_00385458(vv[2] + off);
                if (vec[1] == vec[2]) {
                    func_00153350(vec, vec[1], (s32 *)&pair);
                } else {
                    if (vec[1] != 0) *(u64 *)vec[1] = *(u64 *)&pair;
                    vec[1] += 2;
                }
                off += 12;
            }
        }
    }
    arg0[2] = 1;
    obj_release(tmp.p - 4);
    table_dec_ref(newv, &saved2);
    arg1[0] = -1;
}
