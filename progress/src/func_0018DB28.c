extern void *D_002AD408(u32);
extern void func_001D4040(void *, const char *);
extern volatile unsigned short func_001E2460(void *, void *);
extern void func_001E2C08(void *, const char *, f32);
extern char D_0044DD18[];
extern char D_00470568[], D_00470C28[], D_00470C38[], D_00470C48[], D_00470C58[];
extern char D_00470E10[], D_00470E20[], D_00470E30[], D_00470E40[];
extern char D_00471208[], D_00471228[], D_00471240[], D_00471258[], D_00471270[];

typedef struct { u32 a, b; struct { u32 begin, end; } list; void *vt; u32 v[3]; u32 key; } Obj;
static inline void vec(u32 *p) { p[0] = 0; p[1] = 0; p[2] = 0; }
static inline Obj *base(Obj *p) { p->list.begin = 0; p->list.end = 0; p->b = 0; p->a = 0; return p; }
static inline Obj *ctor(Obj *p, u32 k) { base(p); p->vt = D_0044DD18; vec(p->v); p->key = k; return p; }

void *func_0018DB28(void *arg0) {
    u32 key[4]; u32 pad[4]; u32 reg[4];
    Obj *p = (Obj *)D_002AD408(0x24);
    func_001D4040(key, D_00471208);
    { u32 k = key[0]; ctor(p, k); func_001E2460(reg, p); }
    func_001E2C08(reg, D_00470C38, *(f32 *)((u8 *)arg0 + 0x8));
    func_001E2C08(reg, D_00470C48, *(f32 *)((u8 *)arg0 + 0xC));
    func_001E2C08(reg, D_00470C58, *(f32 *)((u8 *)arg0 + 0x10));
    func_001E2C08(reg, D_00470C28, *(f32 *)((u8 *)arg0 + 0x14));
    func_001E2C08(reg, D_00470E20, *(f32 *)((u8 *)arg0 + 0x18));
    func_001E2C08(reg, D_00470E30, *(f32 *)((u8 *)arg0 + 0x1C));
    func_001E2C08(reg, D_00470E40, *(f32 *)((u8 *)arg0 + 0x20));
    func_001E2C08(reg, D_00470E10, *(f32 *)((u8 *)arg0 + 0x24));
    func_001E2C08(reg, D_00470568, *(f32 *)((u8 *)arg0 + 0x28));
    func_001E2C08(reg, D_00471228, *(f32 *)((u8 *)arg0 + 0x2C));
    func_001E2C08(reg, D_00471240, *(f32 *)((u8 *)arg0 + 0x30));
    func_001E2C08(reg, D_00471258, *(f32 *)((u8 *)arg0 + 0x34));
    func_001E2C08(reg, D_00471270, *(f32 *)((u8 *)arg0 + 0x38));
    return p;
}
