extern void func_00112820(void *, void *, void *, s32, f32);
extern void func_00151A28(void **, s32, s32, s32, s32);
extern void func_001525D8(void *, void *, s32);
extern void func_001537E8(void **, void *, s32);
extern void func_001539A0(void **, s32, s32, void **, s32, void *);
extern void *func_001E37E8(s32, void *);
extern s32 func_001E4280(void);
extern void func_002060F8(void *);
extern void func_002062A8(void *, void *);
extern void func_00206338(void *, void *);
extern void func_002B2028(void *);
extern s32 func_003FA9B8(s32);
extern s32 func_00151930(void *);
extern u32 D_0040E618[];
extern u8 D_0040E658[];
extern u8 D_0048D840[], D_0048D850[], D_0048D860[], D_0048D870[];

typedef struct { f32 v[4]; } V4;
typedef struct { s32 *b; s32 *e; s32 c; } Vec;
typedef struct { u32 a, b, sz, fl; u8 data[16]; } Pool;
typedef struct {
    u8 pad0[0x10];
    s32 f10, f14; s32 p0[7];
    s32 f34, f38, f3C; s32 p1[3];
    void *p4C, *p50; s32 f54; void *p58;
} Obj;
typedef struct { u8 pad[0x20]; V4 v20, v30, v40, v50; } W;
typedef struct { u32 w0, w4, ref, sz; u8 data[1]; } Str;

#define HDR(p) ((Str *)((u8 *)(p) - 0x10))
#define ALLOC_STR(s) do { \
    Pool *_p = (Pool *)D_0040E658; u32 _r; \
    if (_p->fl) _r = func_00151930(_p); \
    else { _r = (u32)((u8 *)_p + 0x10); _p->sz++; } \
    (s) = (char *)_r; \
} while (0)
#define FREE_STR(s) do { \
    Str *_h = HDR(s); u32 _n = --_h->sz; \
    if (_n == 0) { \
        if (_h->w4 + 0x10 == 0) { *(void **)(s) = (void *)D_0040E618[-1]; D_0040E618[-1] = (u32)_h; } \
        else func_002B2028(_h); \
    } \
} while (0)

void func_00112920(Obj *arg0) {
    Vec *tv;
    W *w;
    char *s, *s2;
    s32 t2_2, v18, n, k, x, y;
    f32 f20 = 0.0f;
    V4 tmp[4];
    w = (W *)arg0->p58;
    if (!w) return;
    func_002060F8(w);
    tv = (Vec *)func_001E37E8(func_001E4280(), (void *)((u8 *)arg0 + 0x38));
    if (!tv) return;
    if (tv != (Vec *)arg0->p50) { arg0->p50 = tv; arg0->f10 = 0; }
    func_002062A8(w, (u8 *)arg0 + 0x54);
    t2_2 = func_001E3650(func_001E4280(), (s32)((u8 *)arg0 + 0x3C));
    tmp[0].v[0]=0; tmp[1].v[0]=0; tmp[2].v[0]=0; tmp[3].v[0]=0;
    tmp[0].v[1]=f20; tmp[0].v[2]=f20; tmp[0].v[3]=f20;
    tmp[1].v[1]=tmp[0].v[0]; tmp[1].v[2]=f20; tmp[1].v[3]=f20;
    tmp[2].v[1]=f20; tmp[2].v[2]=f20; tmp[2].v[3]=f20;
    tmp[3].v[1]=f20; tmp[3].v[2]=f20; tmp[3].v[3]=f20;
    func_001525D8(tmp, tmp, 0x3F800000);
    w->v50.v[0]=w->v20.v[0];
    if (arg0->f10 > t2_2) arg0->f10 = t2_2;
    if (t2_2 >= arg0->f10 + arg0->f14) arg0->f10 = t2_2 - arg0->f14 + 1;
    if (arg0->f10 < 0) arg0->f10 = 0;
    n = (s32)(tv->e - tv->b) >> 2;
    if (n == 0 || arg0->f14 <= 0) return;
    for (v18 = 0; v18 < (u32)n; v18++) {
        if ((s32)v18 >= arg0->f14) break;
        k = arg0->f10 + v18;
        if ((u32)k >= (u32)n) continue;
        if (k == t2_2) func_00206338(w, D_0048D850); else func_00206338(w, D_0048D840);
        x = tv->b[k];
        ALLOC_STR(s);
        func_00151A28((void **)&s, 0, -1, x, func_003FA9B8(x));
        y = (s32)HDR(s)->w0 - 1;
        if (y) {
            if (HDR(s)->ref >= 2) func_001537E8((void **)&s, (void *)y, 1);
            HDR(s)->sz = 1;
            if ((s[y] & 0xFF) == 0x2A) {
                ALLOC_STR(s2);
                func_001539A0((void **)&s2, 0, -1, (void **)&s, 0, (void *)(s32)HDR(s)->w0 - 1);
                FREE_STR(s); FREE_STR(s2);
                if (k == t2_2) func_00206338(w, D_0048D870); else func_00206338(w, D_0048D860);
            }
            if (arg0->f34) {
                if (k != 0) func_00206338(w, D_0048D870); else func_00206338(w, D_0048D860);
            }
            func_00112820(arg0, w, s, 0, f20);
        }
        FREE_STR(s);
        f20 += -30.0f;
    }
}
