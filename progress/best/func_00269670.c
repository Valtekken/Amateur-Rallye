typedef struct VT {
    char pad[0x18]; s16 off1; char p2[2]; s32 (*fn1)(void *, void *, void *);
    s16 off2; char p3[2]; s32 (*fn2)(void *, void *, void *);
} VT;
typedef struct Obj { char pad[0x10]; s32 count; VT *vt; } Obj;
typedef struct Root { s32 n; char pad[4]; s32 f8; char pad2[4]; Obj **arr10; char pad3[0xC]; s32 *arr20; } Root;

void func_00269670(Root *s) {
    s32 i = 0, j = 0;
    s->f8 = 0;
    if (s->n > 0) {
        do {
            Obj *obj = s->arr10[i];
            obj->vt->fn1((char *)obj + obj->vt->off1, s->arr20 + j, obj);
            obj->vt->fn2((char *)obj + obj->vt->off2, s->arr20 + j, obj);
            i++;
            j += s->arr10[i - 1]->count;
        } while (i < s->n);
    }
}
