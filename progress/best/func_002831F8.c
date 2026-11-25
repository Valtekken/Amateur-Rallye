extern void *D_002AD408(u32);
extern char D_0044DD18[];
extern char D_0047AF08[];
extern char D_0047AF28[];
extern char D_0047AF40[];
extern char D_0047ADC0[];
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *);
extern void func_001E2E38(void *, const char *, void *);
extern void func_001E2C08(void *, const char *, f32);
extern void func_001E2C78(void *, const char *, s32);
typedef struct { u32 key[8]; u32 reader[4]; } Local;
inline static void zero3(u32 *p) { p[0]=0; p[1]=0; p[2]=0; }
inline static void init(u32 *p, u32 k) {
    p[4] = ((p[2] = 0), (u32)&D_0044DD18);
    p[3]=0; p[1]=0; p[0]=0;
    zero3(p+5);
    p[8]=k;
}

void *func_002831F8(char *a) {
    u32 *p = D_002AD408(0x24);
    Local t;
    func_001D4040(t.key, D_0047AF08);
    init(p, t.key[0]);
    func_001E2460(t.reader, p);
    func_001E2E38(t.reader, D_0047AF28, (void *)(a + 0xC));
    func_001E2C08(t.reader, D_0047AF40, *(f32 *)(a + 0x54));
    func_001E2C78(t.reader, D_0047ADC0, *(s32 *)(a + 0x58));
    return p;
}
