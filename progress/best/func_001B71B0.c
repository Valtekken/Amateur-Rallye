#define A(p,t,o) (*(t*)((char*)(p)+(o)))
extern void D_002AD390(void *);
extern void func_002B2028(u32);
extern s32 D_0040E618[];
extern char D_00473050;
extern char D_004731A0;

void func_001B71B0(void *arg0, s32 arg1) {
    A(arg0, void *, 0) = &D_00473050;
    void *c = (char *)arg0 + 0x94;
    u32 p = A(arg0, u32, 0x94);
    u32 end = A(c, u32, 0x4);
    if (p < end) { do { p += 0x14; } while (p < end); }
    void *b = (void *)A(c, u32, 0);
    s32 diff = A(c, s32, 0x8) - (s32)b;
    s32 n = (s32)((u32)diff * 0xCCCCCCCDu) >> 2;
    if (n != 0) {
        if (n * 0x14 != 0) func_002B2028((u32)b);
        else { A(b,s32,0) = D_0040E618[-1]; D_0040E618[-1] = (s32)b; }
    }
    void *c2 = (char *)arg0 + 0x88;
    u32 p2 = A(arg0, u32, 0x88);
    u32 end2 = A(c2, u32, 0x4);
    if (p2 < end2) { do { p2 += 4; } while (p2 < end2); }
    void *b2 = (void *)A(c2, u32, 0);
    s32 n2 = (A(c2, s32, 0x8) - (s32)b2) >> 2;
    if (n2 != 0) {
        if ((n2 << 2) != 0) func_002B2028((u32)b2);
        else { A(b2,s32,0) = D_0040E618[-1]; D_0040E618[-1] = (s32)b2; }
    }
    A(arg0, void *, 0) = &D_004731A0;
    if (arg1 & 1) D_002AD390(arg0);
}
