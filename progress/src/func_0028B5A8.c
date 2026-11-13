extern char D_0047B288[];
extern char D_0047D038[];
extern char D_0044DD18[];
extern char D_0047AF40[];
extern char D_0047B298[];
extern void *D_002AD408(int);
extern void func_001D4040(void *, const char *);
extern volatile char func_001E2460(void *, int);
extern void func_001E2510(void *, const char *, void *);
extern void func_001E2C08(void *, const char *, float);
void *func_0028A8B0(int *p);
void func_0028AA70(char *p, int u, int a);
void func_0028A950(char *p, char *q);
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

void *func_0028A9B0(char *a);
extern char D_0047B2A8[];
extern char D_0047CFF8[];
extern char D_0047B280[];
extern char D_0047B310[];
extern char D_0047B338[];
extern float func_0027DF40(int);
extern void func_001E2E38(void *, const char *, void *);
void *func_0028B5A8(char *a)
{
  int k[8];
  int reg[4];
  int *p = D_002AD408(36);
  func_001D4040(k, D_0047B310);
  init(p, k[0]);
  func_001E2460(reg, (int) p);
  func_001E2E38(reg, D_0047B338, a + 28);
  func_001E2C08(reg, D_0047AF40, *((float *) (a + 24)));
  return p;
}

void *func_0028A788(char *a);
void *func_0028AAF0(int *p);
