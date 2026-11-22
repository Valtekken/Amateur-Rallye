extern void **func_0017E620(void);
extern void func_00151A28(void *, s32, s32, void *, s32);
extern void func_001537E8(void *, s32, s32);
extern void func_001539A0(void *, s32, s32, void *, s32, s32);
extern s32 func_00153E78(void *, char *, s32, s32);
extern void func_002060F8(void *, s32, s32, s32);
extern void func_002062A8(void *, void *);
extern void func_002062F0(void *, s32);
extern void func_00206338(void *, void *);
extern void func_002063A0(void *, void *);
extern void *func_00206588(void *);
extern void func_002068C0(void *, void *, s32 *, void *);
extern void func_002B2028(void *, void *);
extern s32 func_003FA9B8(void *);
extern u32 D_0040E618[];
extern u32 D_0040E658[];
extern char D_00444870[];
extern char D_00447D30[];

typedef void *(*VFn)(void *, s32, s32, void *);
struct VSub2 { char pad[0x28]; s16 adj; s16 pad2; VFn fn; };

static inline void *clone(void *pool) {
    s32 r;
    if (*(s32 *)((char *)pool + 0xC) != 0) r = func_00151930(pool);
    else { r = (s32)((char *)pool + 0x10); *(s32 *)((char *)pool + 8) += 1; }
    return (void *)r;
}

void func_00121C48(void *arg0) {
    void **h; struct VSub2 *vs; VFn fn; void *obj;
    void *s, *s10; s32 rc, var19, idx;
    void *e; s32 n; f32 f0;
    s32 p30, p34;

    h = func_0017E620(); vs = (struct VSub2 *)*h; fn = vs->fn;
    obj = fn((char *)h + vs->adj, 0x52, *(s32 *)((char *)arg0 + 0x2C), (void *)fn);
    s = clone(&D_0040E658);
    func_00151A28(&s, 0, -1, obj, func_003FA9B8(obj));
    *(s32 *)((char *)arg0 + 0x2C) += 1;
    if (func_00153E78(&s, D_00447D30, 0, func_003FA9B8(D_00447D30)) == 0) {
        h = func_0017E620(); vs = (struct VSub2 *)*h; fn = vs->fn;
        obj = fn((char *)h + vs->adj, 0x52, 0, (void *)fn);
        func_00151A28(&s, 0, -1, obj, func_003FA9B8(obj));
        *(s32 *)((char *)arg0 + 0x2C) = 1;
    }
    var19 = 0;
    rc = *(s32 *)((char *)&s - 8);
    if (rc != 0) {
        if (*(s32 *)((char *)&s - 0x8) >= 2) func_001537E8(&s, rc, 1);
        *(s32 *)((char *)&s - 4) = 1;
        if (*(char *)&s == 0x40) {
            void *tmp;
            tmp = clone(&D_0040E658);
            func_001539A0(&tmp, 0, -1, &s, 1, rc - 1);
            n = *(s32 *)((char *)&s - 8) - 1;
            *(s32 *)((char *)&s - 8) = n;
            if (n == 0) { func_002B2028((char *)&s - 0x10, &s); var19 = 1; }
            n = *(s32 *)((char *)&tmp - 8) - 1;
            *(s32 *)((char *)&tmp - 8) = n;
            if (n == 0) { func_002B2028((char *)&tmp - 0x10, &tmp); var19 = 1; }
            s = tmp;
        }
    }
    idx = *(s32 *)((char *)arg0 + 0x1C);
    e = (void *)((char *)*(void **)((char *)arg0 + 0x10) + idx * 8);
    *(s32 *)((char *)e + 4) = 1;
    *(s32 *)((char *)arg0 + 0x28) = idx;
    obj = *(void **)((char *)*(void **)((char *)e) + 0x4C);
    *(f32 *)((char *)obj + 0x54) = -20.0f;
    *(u64 *)((char *)obj + 0x78) = (*(u64 *)((char *)obj + 0x78) & ~1) | 1;
    func_002060F8(obj, 1, 1, -2);
    func_002062A8(obj, (var19 == 0) ? (char *)arg0 + 0x24 : (char *)arg0 + 0x20);
    func_002062F0(obj, 0);
    *(f32 *)((char *)&obj - 0x60) = 2.0f;
    *(f32 *)((char *)&obj - 0x5C) = -2.0f;
    *(s32 *)((char *)&obj - 0x50) = 0;
    func_002063A0(obj, (char *)&obj - 0x60);
}
