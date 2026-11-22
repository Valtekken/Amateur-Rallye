extern char D_0044DD18[];
extern char D_0047B2D0[];
extern char D_0047B2E0[];
extern char D_0047B2F8[];
extern void *D_002AD408(int);
extern void func_001D4040(void *, const char *);
extern volatile char func_001E2460(void *, int);
extern void func_001E2C08(void *, const char *, float);
extern void func_001E2B98(void *, const char *, int);
inline static void z(float *p)
{
  p[0] = 0;
  ((int *) p)[1] = 0;
  ((int *) p)[2] = 0;
}

inline static void init(int *p, int k)
{
  p[2] = 0;
  p[4] = (int) D_0044DD18;
  p[3] = 0;
  p[1] = 0;
  p[0] = 0;
  z((float *) (p + 5));
  p[8] = k;
}

void *func_0028B168(char *a)
{
  int k[8];
  int reg[4];
  int *p = D_002AD408(36);
  func_001D4040(k, D_0047B2D0);
  init(p, k[0]);
  func_001E2460(reg, (int) p);
  func_001E2C08(reg, D_0047B2E0, *((float *) (a + 16)));
  func_001E2B98(reg, D_0047B2F8, *((int *) (a + 20)));
  return p;
}
