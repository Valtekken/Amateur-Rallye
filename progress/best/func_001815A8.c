extern void *D_002AD408(u32);
extern char D_0044DD18[];
extern char D_0046FA70[];
extern char D_0046FB00[];
extern char D_0046FB18[];
extern char D_0046FB30[];
extern void func_001D4040(void *, const char *);
extern int func_001E2460(void *, void *);
extern void func_001E2C78(void *, const char *, u32);
extern void func_001E2C08(void *, const char *, float);

typedef struct {
    u32 key[8];
    u32 reader[4];
} Local;

static inline void zero3(u32 *p) {
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
}

static inline void init(u32 *p, u32 k) {
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = (u32)D_0044DD18;
    p[5] = 0;
    zero3(p + 5);
    p[8] = k;
}

void *func_001815A8(void *arg0) {
    u32 *p = (u32 *)D_002AD408(0x24);
    Local t;
    func_001D4040(t.key, D_0046FA70);
    init(p, t.key[0]);
    func_001E2460(t.reader, p);
    func_001E2C08(t.reader, D_0046FB00, *(float *)((u8 *)arg0 + 0xC));
    func_001E2C78(t.reader, D_0046FB18, *(u32 *)((u8 *)arg0 + 0x10));
    func_001E2C08(t.reader, D_0046FB30, *(float *)((u8 *)arg0 + 0x14));
    return p;
}
