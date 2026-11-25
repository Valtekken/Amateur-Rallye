extern void *func_00201350(s32, s32, s32);
extern void func_001B2E60(void *, void *, s32);

typedef struct {
    s32 pad[4];
    s16 o10, p10;
    f32 (*fn10)(void *, void *);
    s16 o18, p18;
    void (*fn18)(void *, void *);
    s16 o20, p20;
    void (*fn20)(void *, void *);
} VT;

typedef struct {
    s32 pad[0x33];
    s32 cc;
    s32 padD0[4];
    VT *vt;
} Obj30;

typedef struct {
    s32 pad0;
    s32 f4;
    s32 f8;
    f32 fC;
    f32 f10;
} Res;

void func_001BDD38(void *arg0p, s32 arg1, s32 arg2, s32 *arg3) {
    char *arg0 = (char *)arg0p;
    s32 v17, f68, cur, v7, f74, f70, v2, c;
    void *p19, *p21;
    Obj30 *o;
    Res *r;
    s32 *cnt;

    v17 = 0;
    f68 = *(s32 *)(arg0 + 0x68);
    cur = *(s32 *)(arg0 + 0x5C);
    if ((cur == f68) || (arg1 == f68)) v17 = 1;
    cur = *(s32 *)(arg0 + 0x5C);
    v7 = 0;
    f74 = *(s32 *)(arg0 + 0x74);
    f70 = *(s32 *)(arg0 + 0x70);
    if (cur == f74) v7 = (arg1 == f70);
    v2 = 0;
    if (cur == f70) v2 = (arg1 == f74);
    if ((v2 != 0) || (v7 != 0)) v17 = 1;
    if (arg2 != 0) v17 = 0;
    p19 = *(void **)(*(s32 **)(arg0 + 4) + arg1 * 4);
    p21 = *(void **)((s32 *)func_00201350(f74, *(s32 *)(arg0 + 0x5C), arg2) + *(s32 *)(arg0 + 0x2C));
    if (arg1 != *(s32 *)(arg0 + 0x5C)) {
        cnt = (s32 *)(arg0 + 0x54) + *arg3;
        *cnt += 1;
        if (v17 != 0) {
            c = *(s32 *)(arg0 + 0x5C);
            r = *(Res **)(arg0 + 0x34);
            r->f4 = (s32)*(void **)(*(s32 **)(arg0 + 4) + c * 4);
            r->f8 = (s32)p19;
            r->fC = 1.0f;
            r->f10 = 0.0f;
        } else {
            r = *(Res **)(arg0 + 0x34);
            r->f4 = 0;
            r->f8 = (s32)p19;
            r->fC = 1.0f;
            r->f10 = 0.0f;
            *(s32 *)((char *)*(Obj30 **)(arg0 + 0x30) + 0xCC) = 1;
        }
    }
    o = *(Obj30 **)(arg0 + 0x30);
    o->vt->fn18((char *)o + o->vt->o18, o);
    o = *(Obj30 **)(arg0 + 0x30);
    if (o->vt->fn10((char *)o + o->vt->o10, o) < 0.49f) {
        r = *(Res **)(arg0 + 0x34);
        if (r->f10 < 1.0f) {
            r->f10 = 1.0f;
            *(s32 *)((char *)p19 + 0xCC) = 1;
            o = *(Obj30 **)(arg0 + 0x30);
            o->vt->fn18((char *)o + o->vt->o18, o);
        }
    }
    func_001B2E60(*(Obj30 **)(arg0 + 0x30), p21, 0);
    o = *(Obj30 **)(arg0 + 0x30);
    o->vt->fn20((char *)o + o->vt->o20, o);
    *(s32 *)(arg0 + 0x5C) = arg1;
}
