extern void *D_002AD408(u32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *, u32);
extern void func_001E2F18(void *, const char *, void *);
extern void func_001E2C08(void *, const char *, f32);
extern u8 D_0044DD18[];
extern const char D_00446920[];
extern const char D_00446938[];
extern const char D_00446948[];
extern const char D_00446958[];

typedef struct { u32 name[8]; u32 reg[4]; } Loc;

static inline void zero3(u32 *q) { q[0]=0; q[1]=0; q[2]=0; }
static inline void init(u32 *p, u32 name) { p[4]=(u32)D_0044DD18; p[2]=0; p[3]=0; p[1]=0; p[0]=0; zero3(p+5); p[8]=name; }

void *func_00115490(void *arg0) {
    u32 *p = D_002AD408(0x24);
    Loc t;
    func_001D4040(t.name, D_00446920);
    init(p, t.name[0]);
    func_001E2460(t.reg, p, 0);
    func_001E2F18(t.reg, D_00446938, (u8 *)arg0 + 0x10);
    func_001E2F18(t.reg, D_00446948, (u8 *)arg0 + 0x1C);
    func_001E2C08(t.reg, D_00446958, *(f32 *)((u8 *)arg0 + 0x28));
    return p;
}
