typedef struct { f32 x, y, z, w; s32 unk; } Elem;
typedef struct { Elem *begin, *end, *cap; } Vec;
extern u32 D_0040E618[];
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_002B2028(void *);
extern void *func_00152D28(void *, void *);
extern void *func_00272EA0(void *, void *, void *, s32);

void func_002E81D0(Vec *v, Elem *pos, Elem *val) {
    Elem *end, *p, *nb, *ne;
    Elem save;
    s32 n, size;
    void *mem;

    end = v->end;
    if (end == v->cap) goto grow;
    if (end != NULL) {
        p = end - 1;
        *(u32 *)((char *)end + 4) = 0;
        *(u32 *)((char *)end + 8) = 0;
        end->x = p->x; end->y = p->y; end->z = p->z; end->w = p->w; end->unk = p->unk;
    }
    end = v->end;
    p = end - 1;
    v->end = end + 1;
    n = (s32)(p - pos) * (s32)0xCCCCCCCD >> 2;
    save.x = val->x; save.y = val->y; save.z = val->z; save.w = val->w; save.unk = val->unk;
    {
        Elem *dst = end;
        while (n > 0) {
            p--; dst--;
            dst->x = p->x; dst->y = p->y; dst->z = p->z; dst->w = p->w; dst->unk = p->unk;
            n--;
        }
    }
    pos->x = save.x; pos->y = save.y; pos->z = save.z; pos->w = save.w; pos->unk = save.unk;
    return;
grow:
    n = (s32)(end - v->begin) * (s32)0xCCCCCCCD >> 2;
    size = n ? n * 2 : 1;
    size *= 20;
    if (size != 0) {
        mem = func_002B1FC0(size);
        if (mem == NULL) mem = func_003D2910(size);
    } else {
        if (D_0040E618[-1] != 0) {
            mem = (void *)D_0040E618[-1];
            D_0040E618[-1] = *(u32 *)mem;
        } else {
            mem = func_00152D28(NULL, &D_0040E618[-1]);
        }
    }
    nb = (Elem *)mem;
    ne = func_00272EA0(v->begin, pos, nb, 0);
    if (ne != NULL) {
        ne->x = 0; ne->y = 0; ne->z = 0;
        ne->x = val->x; ne->y = val->y; ne->z = val->z; ne->w = val->w; ne->unk = val->unk;
    }
    {
        Elem *dst = func_00272EA0(pos, v->end, ne + 1, 0);
        n = (s32)(v->cap - v->begin) * (s32)0xCCCCCCCD >> 2;
        if (n != 0) func_002B2028(v->begin);
        v->end = dst;
        v->begin = nb;
        v->cap = nb + n;
    }
}
