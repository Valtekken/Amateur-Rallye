extern void *D_002AD408(int);
extern void D_002AD390(void *);
extern void func_001D4040(void *, void *);
extern void func_001DF2B0(void *, void *, void *);
extern void *func_001FDE60(void);
extern void *func_001FF260(void *, void *, s32 *);
extern char D_0044DD18[], D_00478370[], D_00478380[];

typedef struct { s32 start, end, cap; } Vec;
typedef struct { s32 a, b, c, d; char *vt; Vec v; s32 name; } Obj;
typedef struct { void **start, **end; } List;

void *func_001FF0F8(void *arg0) {
    s32 idx;
    s32 name[4], buf[4], tmp[4];
    void *x, *res;
    Obj *o;
    List *list;
    Vec *v;
    s32 n;

    o = D_002AD408(0x24);
    v = &o->v;
    o->c = 0;
    o->vt = D_0044DD18;
    o->d = 0;
    o->b = 0;
    o->a = 0;
    v->start = 0;
    v->end = 0;
    v->cap = 0;
    o->name = 0;
    func_001D4040(name, D_00478370);
    o->name = name[0];
    list = func_001FDE60();
    n = list->end - list->start;
    if (n == 0)
        return NULL;
    {
        void **it = list->start;
        if (it == list->end)
            return o;
        do {
            x = *it;
            if (x != NULL) {
                idx = it - list->start;
                name[0] = idx;
                func_001D4040(buf, D_00478380);
                if (name[0] != buf[0]) {
                    tmp[0] = idx;
                    res = func_001FF260(arg0, x, tmp);
                    if (res == NULL) {
                        if (o != NULL) {
                            char *vt = o->vt;
                            ((void (*)(void *, int))*(void **)(vt + 12))((char *)o + *(s16 *)(vt + 8), 3);
                        }
                        return NULL;
                    }
                    func_001DF2B0(o, res, 0);
                }
            }
            it++;
        } while (it != list->end);
    }
    return o;
}
