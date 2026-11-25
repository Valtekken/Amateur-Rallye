extern void *D_002AD408(u32);
extern char D_0044DD18[];
extern char D_0046FB48[];
extern char D_0046FC60[];
extern char D_0046FC70[];
extern char D_0046FC78[];
extern void func_001D4040(void *, const char *);
extern int func_001E2460(void *, void *);
extern void func_001E2C78(void *, const char *, u32);
extern void func_001E2C08(void *, const char *, float);

typedef struct {
    u32 key[8];
    u32 reader[4];
} Local;

void *func_00182480(void *arg0) {
    u32 *p = (u32 *)D_002AD408(0x24);
    Local t;
    func_001D4040(t.key, D_0046FB48);
    
    u32 k = t.key[0];
    u32 *p5 = p + 5; // p+5 = p+0x14
    
    p[2] = 0;
    p[4] = (u32)D_0044DD18;
    p[3] = 0;
    p[1] = 0;
    p[0] = 0;
    p[5] = 0;
    p5[2] = 0; // p[7]
    p5[1] = 0; // p[6]
    p[8] = k;
    
    u32 *reader = (u32 *)((u8 *)p + 0x20);
    func_001E2460(reader, p);
    func_001E2C78(reader, D_0046FC60, *(u32 *)((u8 *)arg0 + 0x14));
    func_001E2C08(reader, D_0046FC70, *(float *)((u8 *)arg0 + 0x18));
    func_001E2C08(reader, D_0046FC78, *(float *)((u8 *)arg0 + 0x1C));
    return p;
}
