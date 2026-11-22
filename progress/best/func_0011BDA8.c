extern s32 func_00296710(void);
extern s32 func_00296530(s32, char *);
extern char *func_001D4010(char *);
extern s32 func_00151930(void *);
extern void func_00151A28(void *, s32, u32, void *, s32);
extern s32 func_003FA9B8(void *);
extern void func_002060F8(void *);
extern void func_002062F0(void *, s32);
extern void func_0011C770(void *, void *, void *);
extern char *func_0017E620(void);
extern void func_001D4810(void *, void *);
extern void func_002062A8(void *, void *);
extern void func_002063A0(void *, void *, s32, s32);
extern void func_00206338(void *, void *);
extern void func_002B2028(void *);
extern s32 D_0040E658[];
extern u32 D_0040E618[];
extern char D_0048DB60[];

typedef struct { f32 x, y, z, w; } __attribute__((aligned(16))) V4;
typedef struct { f32 x, y, z; } V3;

void func_0011BDA8(char *a, char *b, char *c) {
    struct {
        s32 sp0;
        V4 v;
        V3 p;
    } L;
    char *name;
    void *buf;
    char *obj;
    s32 ref;
    s32 n;
    char *vt;
    s32 off;

    if (!func_00296530(func_00296710(), b))
        return;

    name = func_001D4010(b + 0x5C);
    buf = &L.sp0;
    if (D_0040E658[3] != 0) {
        ref = func_00151930(D_0040E658);
    } else {
        D_0040E658[2] = D_0040E658[2] + 1;
        ref = (s32)D_0040E658 + 0x10;
    }
    *(s32 *)buf = ref;
    func_00151A28(buf, 0, 0xFFFFFFFFu, name, func_003FA9B8(name));

    obj = *(char **)(b + 0x4C);
    func_002060F8(obj);
    func_002062F0(obj, 0);
    func_0011C770(a, obj, c);
    func_002062F0(obj, 1);

    if (*(s32 *)(a + 0xC) != 0) {
        n = 0;
        if (*(s32 *)(a + 0x34) != 0)
            n = func_003FA9B8(*(void **)(a + 0x34));
        if (n != 0) {
            void *(*fn)(char *, void *);
            char *o = func_0017E620();
            vt = *(char **)o;
            off = *(s16 *)(vt + 0x30);
            fn = *(void *(**)(char *, void *))(vt + 0x34);
            *(s32 *)&L.v = 0;
            func_001D4810(&L.v, (void *)fn(o + off, (void *)*(s32 *)(a + 0xC)));
            func_002062A8(obj, &L.v);

            if (*(s32 *)(a + 0x60) != 0) {
                L.p.x = (f32)(*(s32 *)(a + 0x10) + *(s32 *)(a + 0x18) + 2);
                L.p.y = (f32)(*(s32 *)(a + 0x14) + *(s32 *)(a + 0x1C) - 2);
                L.p.z = 0.0f;
                func_002063A0(obj, &L.p, *(s32 *)(a + 0x18), *(s32 *)(a + 0x1C));
                L.v.x = 0.0f;
                L.v.y = 0.0f;
                L.v.z = 0.0f;
                L.v.w = 1.0f;
                func_00206338(obj, &L.v);
                vt = *(char **)obj;
                off = *(s16 *)(vt + 0x10);
                fn = *(void *(**)(char *, void *))(vt + 0x14);
                fn(obj + off, *(void **)(a + 0x34));
                func_002062F0(obj, 2);
            }
            L.v.x = (f32)(*(s32 *)(a + 0x10) + *(s32 *)(a + 0x18));
            L.v.y = (f32)(*(s32 *)(a + 0x14) + *(s32 *)(a + 0x1C));
            L.v.z = 0.0f;
            func_002063A0(obj, &L.v, *(s32 *)(a + 0x18), *(s32 *)(a + 0x1C));
            func_00206338(obj, D_0048DB60 + (*(s32 *)(a + 0x3C) << 4));
            vt = *(char **)obj;
            off = *(s16 *)(vt + 0x10);
            fn = *(void *(**)(char *, void *))(vt + 0x14);
            fn(obj + off, *(void **)(a + 0x34));
        }
    }
    {
        char *blk = (char *)(L.sp0 - 0x10);
        s32 rc = *(s32 *)(blk + 8) - 1;
        *(s32 *)(blk + 8) = rc;
        if (rc == 0) {
            s32 p = *(s32 *)(blk + 4) + 0x10;
            if (p != 0) {
                func_002B2028(blk);
            } else {
                u32 old = D_0040E618[-1];
                *(u32 *)blk = old;
                D_0040E618[-1] = (u32)blk;
            }
        }
    }
}
