extern void *D_002AD408(u32);
extern char D_0044DD18[];
extern char D_0046F9C8[];
extern char D_0046FA18[];
extern char D_0046FA38[];
extern char D_0046FA60[];
extern void func_001D4040(void *, const char *);
extern int func_001E2460(void *, void *);
extern void func_001E2C78(void *, const char *, u32);
extern void func_001E2C08(void *, const char *, float);
typedef struct 
{
  u32 key[8];
  u32 reader[4];
} Local;
inline static void zero3(u32 *p)
{
  p[0] = 0;
  p[1] = 0;
  p[2] = 0;
}

inline static void init(u32 *p, u32 k)
{
  p[2] = 0;
  p[4] = (u32) D_0044DD18;
  p[3] = 0;
  p[1] = 0;
  p[0] = 0;
  zero3(p + 5);
  p[8] = k;
}

void *func_001811C8(char *a)
{
  u32 *p = D_002AD408(36);
  Local t;
  func_001D4040(t.key, D_0046F9C8);
  init(p, t.key[0]);
  func_001E2460(t.reader, p);
  func_001E2C78(t.reader, D_0046FA18, *((u32 *) (a + 16)));
  func_001E2C78(t.reader, D_0046FA38, *((u32 *) (a + 12)));
  func_001E2C08(t.reader, D_0046FA60, *((float *) (a + 20)));
  return p;
}

