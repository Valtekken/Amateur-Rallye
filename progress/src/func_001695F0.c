extern void *D_002AD408(u32);
extern void func_001D4040(void *, const char *);
extern volatile unsigned short func_001E2460(void *, void *);
extern void func_001E2B98(void *, const char *, s32);
extern void func_001E2C08(void *, const char *, f32);
extern char D_0044DD18[];
extern char D_0044F6C0[], D_0044F880[], D_0044F898[], D_0044F8B0[], D_0044F8D0[], D_0044F8F0[], D_0044F908[], D_0044F920[], D_0044F940[], D_0044F960[], D_0044F978[], D_0044F990[], D_0044F9B0[], D_0044F9D0[], D_0044F9F8[], D_0044FA18[], D_0044FA40[], D_0044FA68[];

typedef struct { u32 a, b; struct { u32 begin, end; } list; void *vt; u32 v[3]; u32 key; } Obj;
static inline void vec(u32 *p) { p[0] = 0; p[1] = 0; p[2] = 0; }
static inline Obj *base(Obj *p) { p->list.begin = 0; p->list.end = 0; p->b = 0; p->a = 0; return p; }
static inline Obj *ctor(Obj *p, u32 k) { base(p); p->vt = D_0044DD18; vec(p->v); p->key = k; return p; }

void *func_001695F0(void *arg0) {
    u32 key[4]; u32 pad[4]; u32 reg[4];
    Obj *p = (Obj *)D_002AD408(0x24);
    func_001D4040(key, D_0044F6C0);
    { u32 k = key[0]; ctor(p, k); func_001E2460(reg, p); }
    func_001E2C08(reg, D_0044F880, *(f32 *)((u8 *)arg0 + 0x8));
    func_001E2C08(reg, D_0044F898, *(f32 *)((u8 *)arg0 + 0xC));
    func_001E2C08(reg, D_0044F8B0, *(f32 *)((u8 *)arg0 + 0x10));
    func_001E2C08(reg, D_0044F8D0, *(f32 *)((u8 *)arg0 + 0x14));
    func_001E2C08(reg, D_0044F8F0, *(f32 *)((u8 *)arg0 + 0x18));
    func_001E2C08(reg, D_0044F908, *(f32 *)((u8 *)arg0 + 0x1C));
    func_001E2C08(reg, D_0044F920, *(f32 *)((u8 *)arg0 + 0x28));
    func_001E2C08(reg, D_0044F940, *(f32 *)((u8 *)arg0 + 0x2C));
    func_001E2C08(reg, D_0044F960, *(f32 *)((u8 *)arg0 + 0x20));
    func_001E2C08(reg, D_0044F978, *(f32 *)((u8 *)arg0 + 0x24));
    func_001E2C08(reg, D_0044F990, *(f32 *)((u8 *)arg0 + 0x30));
    func_001E2C08(reg, D_0044F9B0, *(f32 *)((u8 *)arg0 + 0x34));
    func_001E2C08(reg, D_0044F9D0, *(f32 *)((u8 *)arg0 + 0x38));
    func_001E2B98(reg, D_0044F9F8, *(s32 *)((u8 *)arg0 + 0x3C));
    func_001E2C08(reg, D_0044FA18, *(f32 *)((u8 *)arg0 + 0x5C));
    func_001E2C08(reg, D_0044FA40, *(f32 *)((u8 *)arg0 + 0x60));
    func_001E2C08(reg, D_0044FA68, *(f32 *)((u8 *)arg0 + 0x64));
    return p;
}
