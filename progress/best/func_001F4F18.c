extern void func_001D2458(s32 *);
extern s32 func_001CE2F8(void *);
extern s32 func_001D2658(s32 *, s32, s32, s32);
extern void func_001D27F8(s32 *, s32, s32);
extern void func_001D2A40(s32 *, s32, s32);
extern void func_001D2D48(s32 *, s32, s32);
extern void func_001D2E38(s32 *, s32, s32);
extern s32 func_003FA9B8(s32);
extern s32 func_001F58B8(void *, void *);
extern void D_002AD390(s32);
extern char D_00477AC8[];
extern char D_00477AD0[];

typedef struct {
    s32 f0, f4;
    char *vt;
} Obj;
typedef struct {
    Obj *obj;
    s32 field4;
} A0;

s32 func_001F4F18(A0 *arg0, void *arg1, void *arg2) {
    s32 sp[4];
    s32 r, len, t;
    char *key;

    func_001D2458(sp);
    key = D_00477AC8;
    r = func_001D2658(sp, 0, func_001CE2F8(sp), (s32)key) + 1;
    func_001D27F8(&arg0->field4, 0, sp[0]);
    len = 0;
    if (arg0->field4) len = func_003FA9B8(arg0->field4);
    func_001D2A40(&arg0->field4, r, len);

    key = D_00477AD0;
    t = func_001D2658(sp, 0, func_001CE2F8(sp), (s32)key);
    r = t + 1;
    if (t >= 0) {
        len = 0;
        if (sp[0]) len = func_003FA9B8(sp[0]);
        func_001D2D48(sp, r, len);
    }
    func_001D2E38(sp, 0, 1);

    if (((s32 (*)(void *, s32, s32, s32))*(s32 *)(arg0->obj->vt + 0x4C))((char *)arg0->obj + *(s16 *)(arg0->obj->vt + 0x48), sp[0], 1, 0) != 0) {
        s32 res = func_001F58B8(arg0, arg2);
        ((s32 (*)(void *, void *))*(s32 *)(arg0->obj->vt + 0x14))((char *)arg0->obj + *(s16 *)(arg0->obj->vt + 0x10), arg0->obj);
        if (res == 0) {
            ((s32 (*)(void *, s32))*(s32 *)(arg0->obj->vt + 0x5C))((char *)arg0->obj + *(s16 *)(arg0->obj->vt + 0x58), sp[0]);
        }
        D_002AD390(sp[0]);
        return res;
    }
    D_002AD390(sp[0]);
    return 0;
}
