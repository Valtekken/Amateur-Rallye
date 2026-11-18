extern void *D_002AD408(u32);
extern void func_001D4040(void*, const char*);
extern volatile unsigned short func_001E2460(void*, void*);
extern void func_001E2C78(void*, const char*, s32);
extern void func_001E2E38(void*, const char*, void*);
extern char D_0044DD18[];
extern char D_0047BD18[];
extern char D_0047BD28[];
extern char D_0047C020[];
extern char D_0047C030[];
extern char D_0047C040[];
extern char D_0047C050[];
extern char D_0047C060[];
extern char D_0047C070[];
extern char D_0047C080[];
extern char D_0047C090[];
extern char D_0047C0A0[];

typedef struct { u32 a, b; struct { u32 begin, end; } list; void *vt; u32 v[3]; u32 key; } Obj;

static inline void vec(u32 *p) { p[0] = 0; p[1] = 0; p[2] = 0; }
static inline Obj *base(Obj *p) { p->list.begin = 0; p->list.end = 0; p->b = 0; p->a = 0; return p; }
static inline Obj *ctor(Obj *p, u32 k) { base(p); p->vt = (void*)D_0044DD18; vec(p->v); p->key = k; return p; }

void *func_0029D338(void *arg0) {
    u32 key[4];
    u32 pad[4];
    u32 reg[4];
    Obj *p = D_002AD408(0x24);
    func_001D4040(key, D_0047C020);
    {
        u32 k = key[0];
        ctor(p, k);
        func_001E2460(reg, p);
    }
    func_001E2C78(reg, D_0047C030, 0);
    func_001E2E38(reg, D_0047C040, (char*)arg0 + 0x10);
    func_001E2C78(reg, D_0047C050, *(s32*)((char*)arg0 + 0x14));
    func_001E2C78(reg, D_0047C060, *(s32*)((char*)arg0 + 0x18));
    func_001E2C78(reg, D_0047C070, *(s32*)((char*)arg0 + 0x1C));
    func_001E2C78(reg, D_0047BD18, *(s32*)((char*)arg0 + 0x28));
    func_001E2C78(reg, D_0047BD28, *(s32*)((char*)arg0 + 0x2C));
    func_001E2E38(reg, D_0047C080, (char*)arg0 + 0x44);
    func_001E2E38(reg, D_0047C090, (char*)arg0 + 0x48);
    func_001E2E38(reg, D_0047C0A0, (char*)arg0 + 0x4C);
    (void)pad;
    return p;
}
