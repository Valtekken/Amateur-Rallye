typedef struct { s32 v; char pad[12]; char sp[16]; } S;
extern void func_001E2460(void *, void *);
extern void func_001E2470(void *, const char *, void *);
extern void func_001E25B0(void *, const char *, void *);
extern void func_001E28F8(void *, const char *, void *);
extern void *func_001D4010(void *);
extern void func_001D4810(void *, void *);
extern char D_0047B760[], D_0047BA70[], D_0047BAE0[], D_0047C270[], D_0047C280[], D_0047C290[], D_0047C298[], D_0047C2B8[];
void func_0029FC40(void *a, void *unused, void *arg2) {
    S s;
    func_001E2460(s.sp, arg2);
    char *p10 = (char *)a + 0x10;
    char *pC = (char *)a + 0xC;
    func_001E25B0(s.sp, D_0047BA70, (char *)a + 0x14);
    s.v = 0;
    func_001E28F8(s.sp, D_0047C270, &s.v);
    func_001D4810(pC, func_001D4010(&s.v));
    func_001E28F8(s.sp, D_0047C280, &s.v);
    func_001D4810(p10, func_001D4010(&s.v));
    func_001E25B0(s.sp, D_0047C290, (char *)a + 0x18);
    func_001E25B0(s.sp, D_0047B760, (char *)a + 0x1C);
    func_001E25B0(s.sp, D_0047C298, (char *)a + 0x24);
    func_001E25B0(s.sp, D_0047C2B8, (char *)a + 0x20);
    func_001E2470(s.sp, D_0047BAE0, (char *)a + 0x2C);
}
