/* identical to func_0011CC20 (matched), with its names changed by decompdecomp */
extern u8 D_0044DCD8[];
extern u8 D_0044DD18[];
extern u8 D_0044D668[];
extern const char D_0047B7B8[];
extern const char D_0047B7D0[];
extern const char D_0047B7E0[];
extern void D_002AD390(void *);
extern void *D_002AD408(u32);
extern void func_001D4040(void *, const char *);
extern volatile unsigned short func_001E2460(void *, void *);
extern void func_001E2E38(void *, const char *, void *);
extern void func_001E2B98(void *, const char *, u32);
void func_0011CF30(char *p, int flag);
typedef struct 
{
  u32 name[8];
  u32 reg[4];
} Loc;
inline static void zero3(u32 *q)
{
  q[0] = 0;
  q[1] = 0;
  q[2] = 0;
}

inline static void init(u32 *p, u32 name)
{
  p[4] = (u32) D_0044DD18;
  p[2] = 0;
  p[3] = 0;
  p[1] = 0;
  p[0] = 0;
  zero3(p + 5);
  p[8] = name;
}

void *func_002920A0(char *a)
{
  u32 *p = D_002AD408(36);
  Loc t;
  func_001D4040(t.name, D_0047B7B8);
  init(p, t.name[0]);
  func_001E2460(t.reg, p);
  func_001E2E38(t.reg, D_0047B7D0, a + 12);
  func_001E2B98(t.reg, D_0047B7E0, *((u32 *) (a + 16)));
  return p;
}

void *func_0011CBC8(s32 *p);
extern float func_003F3140(float);
void func_0011CB28(char *p);
