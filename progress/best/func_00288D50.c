extern char D_0047B170[];
extern char D_0047D138[];
extern char D_0044DD18[];
extern char D_0047B190[];
extern char D_0047B1A0[];
extern void func_001D4040(void *, const char *);
extern void func_002A4928(void *);
extern void *D_002AD408(u32);
extern void func_001E2460(void *, void *);
extern void func_001E2B98(void *, const char *, u32);
extern void func_001E2470(void *, const char *, void *);
extern void func_001D0FF8(void *);
extern void func_00263280(void *, void *);
void *func_00288D50(s32 *p)
{
  u32 n[4];
  func_001D4040(n, D_0047B170);
  p[1] = n[0];
  p[0] = -1;
  p[2] = (s32) D_0047D138;
  func_002A4928(p + 3);
  return p;
}

inline static void zero3(u32 *p)
{
  p[0] = 0;
  p[1] = 0;
  p[2] = 0;
}

inline static u32 *init(u32 *p)
{
  p[4] = (u32) D_0044DD18;
  p[2] = 0;
  p[3] = 0;
  p[1] = 0;
  p[0] = 0;
  zero3(p + 5);
  p[8] = 0;
  return p;
}

void *func_00288E40(u32 *a);
void func_00288F58(s32 *a, char *b);
void func_00288EE8(char *a, char *b, void *c);
