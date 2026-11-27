extern void *D_002AD408(u32);
extern void func_001D4040(void *, const char *);
extern volatile unsigned short func_001E2460(void *, void *);
extern void func_001E2C08(void *, const char *, f32);
extern char D_0044DD18[];
extern char D_00479CA0[], D_00479CB8[], D_00479CD0[], D_00479CE8[], D_00479D00[], D_00479D18[], D_00479D30[], D_00479D48[], D_00479D60[], D_00479D78[], D_00479D90[], D_00479DA8[], D_00479DC0[], D_00479DD8[], D_00479DE8[], D_00479E00[], D_00479E18[], D_00479E30[], D_00479E48[], D_00479E60[], D_00479E70[];

typedef struct { u32 a, b; struct { u32 begin, end; } list; void *vt; u32 v[3]; u32 key; } Obj;
static inline void vec(u32 *p) { p[0] = 0; p[1] = 0; p[2] = 0; }
static inline Obj *base(Obj *p) { p->list.begin = 0; p->list.end = 0; p->b = 0; p->a = 0; return p; }
static inline Obj *ctor(Obj *p, u32 k) { base(p); p->vt = D_0044DD18; vec(p->v); p->key = k; return p; }

void *func_0026AC90(void *arg0) {
    u32 key[4]; u32 pad[4]; u32 reg[4];
    Obj *p = (Obj *)D_002AD408(0x24);
    func_001D4040(key, D_00479CA0);
    { u32 k = key[0]; ctor(p, k); func_001E2460(reg, p); }
    func_001E2C08(reg, D_00479CB8, *(f32 *)((u8 *)arg0 + 0x8));
    func_001E2C08(reg, D_00479CD0, *(f32 *)((u8 *)arg0 + 0xC));
    func_001E2C08(reg, D_00479CE8, *(f32 *)((u8 *)arg0 + 0x10));
    func_001E2C08(reg, D_00479D00, *(f32 *)((u8 *)arg0 + 0x14));
    func_001E2C08(reg, D_00479D18, *(f32 *)((u8 *)arg0 + 0x18));
    func_001E2C08(reg, D_00479D30, *(f32 *)((u8 *)arg0 + 0x1C));
    func_001E2C08(reg, D_00479D48, *(f32 *)((u8 *)arg0 + 0x20));
    func_001E2C08(reg, D_00479D60, *(f32 *)((u8 *)arg0 + 0x24));
    func_001E2C08(reg, D_00479D78, *(f32 *)((u8 *)arg0 + 0x28));
    func_001E2C08(reg, D_00479D90, *(f32 *)((u8 *)arg0 + 0x2C));
    func_001E2C08(reg, D_00479DA8, *(f32 *)((u8 *)arg0 + 0x30));
    func_001E2C08(reg, D_00479DC0, *(f32 *)((u8 *)arg0 + 0x34));
    func_001E2C08(reg, D_00479DD8, *(f32 *)((u8 *)arg0 + 0x38));
    func_001E2C08(reg, D_00479DE8, *(f32 *)((u8 *)arg0 + 0x3C));
    func_001E2C08(reg, D_00479E00, *(f32 *)((u8 *)arg0 + 0x40));
    func_001E2C08(reg, D_00479E18, *(f32 *)((u8 *)arg0 + 0x44));
    func_001E2C08(reg, D_00479E30, *(f32 *)((u8 *)arg0 + 0x48));
    func_001E2C08(reg, D_00479E48, *(f32 *)((u8 *)arg0 + 0x4C));
    func_001E2C08(reg, D_00479E60, *(f32 *)((u8 *)arg0 + 0x50));
    func_001E2C08(reg, D_00479E70, *(f32 *)((u8 *)arg0 + 0x54));
    return p;
}
