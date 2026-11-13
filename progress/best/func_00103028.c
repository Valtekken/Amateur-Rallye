extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern void func_001D4810(void*, const char*);
extern void func_001D2458(void*, const char*);
extern void func_001D2900(void*, s32);
extern s32 func_001189C0(void);
extern void func_00152108(void);
extern void func_00262F88(void*);
extern s32 func_003F2F50(void);
extern s32 func_003F3140(float);
extern void D_002AD390(void*);
extern char D_00444EE0[];
extern char D_00444EF8[];
extern char D_00444F08[];
extern u32 D_00425E98[];
typedef struct {
    s32 pad0[3];
    s32 field0C;
    s32 field10;
    s32 field14;
    s32 field18;
    f32 field1C;
    f32 field20;
    s32 field24;
    s32 field28;
} Obj;
typedef struct {
    s32 pad50[0x50/4];
    void *ptr50;
} Arg1;
void func_00103028(Obj *o, Arg1 *a1) {
    s32 r1, r2;
    f32 m[8];
    s32 idx;
    void *base;
    r1 = func_001E4280();
    r2 = func_001E3650(r1, (s32)(o + 0x10));
    if (o->field0C == r2) goto tail;
    if (r2 != -1) goto state_b;
    o->field0C = r2;
    func_001D4810(o->pad0, D_00444EE0);
    *(u32 *)(o->pad0) = 0;
    func_00262F88(a1->ptr50);
    goto tail_ret;
state_b:
    func_001D2458(o->pad0, D_00444EF8);
    base = (void *)func_001189C0();
    idx = 0;
    {
        s32 x = func_001189C0();
        func_001D2900((char *)base + idx * 0x34, o->field1C);
        func_001D2900(o->pad0, 0);
        func_001D4810(o->pad0, D_00444F08);
        *(u32 *)(o->pad0) = 0;
    }
    func_00262F88(a1->ptr50);
    D_002AD390(o->pad0);
tail_ret:
    r2 = (s32)o->pad0;
tail:
    if (a1->ptr50 == 0) goto ret;
    {
        f32 *v = (f32 *)a1->ptr50;
        s32 f24 = o->field24;
        m[0] = v[0]; m[1] = v[1]; m[2] = v[2];
        if (f24 != 0) {
            m[0] = v[0] + v[4];
        } else {
            m[0] = v[0] - v[4];
        }
        m[0] = 1.0f;
    }
    {
        f32 t = func_003F3140(m[0]);
        func_003F2F50();
    }
    func_00152108();
    if (o->field24 != 0) {
        f32 *v = (f32 *)a1->ptr50;
        v[0] = 0.0f; v[1] = 0.0f; v[2] = 0.0f;
    }
ret:
    return;
}
