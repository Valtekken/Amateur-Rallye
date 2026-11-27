typedef struct Obj {
    s32 f0, f4, f8, fC, f10, f14;
    s32 sub4, sub8;
    s32 f20;
} Obj;
typedef struct P { s32 f0, f4; } P;

extern void func_003FA310(void *, void *);
extern void *D_002AD408(s32);
extern void func_001D4040(void *, void *);
extern void func_001D2CD8(void *, void *);
extern void func_001D2488(s32 *, void *);
extern void func_001EAE78(void *, void *, void *);
extern void func_001E00E8(void *);
extern void *func_001E1C10(void *, void *, void *);
extern void func_001DF2B0(void *, void *, s32);
extern void *func_001DF4C8(s32);
extern void *func_001FC760(s32);
extern void *func_001D4010(void *);
extern void *func_001FC500(void *, void *);
extern void D_002AD390(void *);
extern void *D_0044DD18;
extern char D_0047B988[], D_0047B990[], D_0047B998[], D_0047B9A0[];

void *func_00294088(s32 unused, s32 arg1, s32 arg2) {
    u8 L[0x110];
    Obj *obj;
    void *sub, *res, *res2, *vt, *vt2, *x, *y;
    P *p;
    void (*fn)(void *, s32);
    void *(*fn2)(void *, void *);
    s32 off;

#define SP10 (*(s32 *)(L + 0x10))
#define SP14 (*(s32 *)(L + 0x14))
#define SP30 (*(s32 *)(L + 0x30))
#define SP40 (L + 0x40)
    func_003FA310(L, D_0047B988);
    obj = D_002AD408(0x24);
    func_001D4040(&SP10, D_0047B990);
    sub = (char *)obj + 0x14;
    obj->f8 = 0; obj->f10 = (s32)&D_0044DD18; obj->fC = 0;
    obj->f4 = 0; obj->f0 = 0; obj->f14 = 0;
    ((Obj *)sub)->sub4 = 0; ((Obj *)sub)->sub8 = 0;
    obj->f20 = SP10;
    SP10 = 0; SP14 = 0;
    func_001D4040(&SP30, D_0047B998);
    SP10 = SP30;
    func_001D2CD8(&SP14, L);
    if (((Obj *)sub)->sub4 != ((Obj *)sub)->sub8) {
        s32 *b = (s32 *)((Obj *)sub)->sub4;
        if (b != 0) {
            *b = SP10;
            func_001D2488(b + 1, &SP14);
        }
        ((Obj *)sub)->sub4 = (s32)((char *)((Obj *)sub)->sub4 + 8);
    } else {
        func_001EAE78(sub, (void *)((Obj *)sub)->sub4, &SP10);
    }
    off = arg2 * 8;
    func_001E00E8(SP40);
    func_001D4040(&SP30, D_0047B9A0);
    res = func_001E1C10(SP40, &SP30, (void *)(arg1 + off));
    if (res == 0) {
        if (obj != 0) {
            vt = *(void **)((char *)obj + 0x10);
            fn = *(void (**)(void *, s32))((char *)vt + 0xC);
            fn((char *)obj + *(s16 *)((char *)vt + 8), 3);
        }
        D_002AD390((void *)SP14);
        return 0;
    }
    res2 = 0;
    func_001DF2B0(obj, res, 0);
    p = (P *)(arg1 + off);
    if (p->f4 != 0) {
        res2 = func_001DF4C8(p->f4);
    } else {
        x = func_001FC760(p->f4);
        if (p->f0 != 0) {
            func_001D4040(&SP30, func_001D4010(p));
            y = func_001FC500((void *)p->f0, &SP30);
            if (y != 0) {
                vt2 = *(void **)((char *)y + 8);
                fn2 = *(void *(**)(void *, void *))((char *)vt2 + 0x1C);
                res2 = fn2((char *)y + *(s16 *)((char *)vt2 + 0x18), y);
            }
        }
    }
    if (res2 != 0) {
        *(s32 *)((char *)res2 + 0x20) = p->f0;
        func_001DF2B0(obj, res2, 0);
    }
    D_002AD390((void *)SP14);
    return obj;
}
