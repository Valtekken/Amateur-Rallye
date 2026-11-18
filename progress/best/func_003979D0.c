typedef struct { u32 a[6]; } E24;
typedef struct { E24 *begin,*end,*cap; } V24;
extern void func_003A61F0(E24*, const E24*);
extern void func_00397608(E24*,E24*,E24*);
extern u32 func_003976E8(V24*);
extern E24 *func_003977D0(V24*,u32);
extern E24 *func_00397950(E24*,E24*,E24*);
extern E24 *func_003A6518(V24*);
extern E24 *func_003A6290(V24*);
extern void func_003A6028(E24*,E24*);
extern void func_003A5F98(V24*,E24*,u32);

void func_003979D0(register V24 *v, E24 *pos, const E24 *x) {
    if (v->end != v->cap) {
        E24 tmp;
        func_003A61F0(v->end, (E24*)((char*)v->end - 0x18));
        ++v->end;
        tmp = *x;
        func_00397608(pos, (E24*)((char*)v->end - 0x30), (E24*)((char*)v->end - 0x18));
        *pos = tmp;
    } else {
        u32 old, n;
        E24 *p, *q;
        old = func_003976E8(v);
        n = old ? 2*old : 1;
        p = func_003977D0(v, n);
        q = p;
        q = func_00397950(v->begin, pos, p);
        func_003A61F0(q, x);
        ++q;
        q = func_00397950(pos, v->end, q);
        func_003A6028(func_003A6518(v), func_003A6290(v));
        func_003A5F98(v, v->begin, v->cap - v->begin);
        v->begin = p;
        v->end = q;
        v->cap = p + n;
    }
}
