typedef struct { u32 a; f32 b,c,d,e,f; u32 g; u8 h; u8 pad[3]; } Item;
typedef struct { u32 head; Item *begin; Item *end; } Vec;

typedef struct {
    u8 _0[0x0C];
    void *f0C;
    u8 _10[0x24];
    Vec vec;
    u8 _40[0x04];
    u32 f44;
    u32 f48;
    u8 _4C[0x1C];
    s32 f68;
    u8 _6C[0x10];
    void *f7C;
} Obj;

extern void *func_0017E620(void);
extern void func_001D4810(void *, void *);
extern void *D_002AD408(int);
extern void *func_0011DA70(void *, int);
extern s32 func_00297500(void);
extern s32 func_002971B0(s32);
extern void func_00297398(s32, s32);
extern void func_0012BDC0(Obj *);
extern void func_0012AD00(void *);
extern void func_00154AE0(void *, void *, void *);
extern void func_0012BBF8(Obj *);
extern void func_0012BE60(Obj *);
extern void *func_0012ABE0(void *);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern void func_001E3D10(s32, void *, s32);
extern const char D_004477F0[];

void func_0012BE88(Obj *arg0) {
    volatile s32 sp[0x24/4];
    void **o;
    void *vt;
    s16 off;
    void *(*fn)(void *, s32, void *);
    void *res;
    void *p;
    s32 r;
    Vec *v;
    s32 i;
    Item *begin;

    o = (void **)func_0017E620();
    vt = *o;
    off = *(s16 *)((char *)vt + 0x30);
    fn = *(void **)((char *)vt + 0x34);
    res = fn((char *)o + off, 7, (void *)fn);

    sp[0] = 0;
    func_001D4810(sp, res);
    arg0->f48 = sp[0];

    p = D_002AD408(0x10);
    arg0->f0C = func_0011DA70(p, 3);

    r = func_00297500();
    if (func_002971B0(r) == -1) {
        r = func_00297500();
        func_00297398(r, -1);
    }

    func_0012BDC0(arg0);

    v = &arg0->vec;
    for (i = 0xB; i >= 0; i--) {
        func_0012AD00((void *)&sp[4]);
        begin = v->begin;
        if (begin == v->end) {
            func_00154AE0(v, v->end, (void *)&sp[4]);
        } else {
            if (begin != 0) {
                begin->a = sp[4];
                begin->b = *(f32 *)&sp[5];
                begin->c = *(f32 *)&sp[6];
                begin->d = *(f32 *)&sp[7];
                begin->e = *(f32 *)&sp[8];
                begin->f = *(f32 *)&sp[9];
                begin->g = sp[10];
                begin->h = (u8)sp[11];
            }
            v->begin = (Item *)((char *)v->begin + 0x20);
        }
    }

    func_0012BBF8(arg0);
    func_0012BE60(arg0);

    p = D_002AD408(0xC);
    arg0->f7C = func_0012ABE0(p);

    arg0->f44 = 0;
    arg0->f68 = 1;

    r = func_001E4280();
    func_001D4040(sp, D_004477F0);
    func_001E3D10(r, sp, 0);
}
