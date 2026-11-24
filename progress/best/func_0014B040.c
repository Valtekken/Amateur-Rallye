#define A(p,t,o) (*(t*)((char*)(p)+(o)))
extern void func_001D4040(void *, const char *);
extern char D_0044C2F0[];
extern char D_0044C900[];
typedef struct 
{
  float x;
  float y;
} V2;
inline static void init(V2 *p, float x, float y)
{
  p->x = x;
  p->y = y;
}

inline static void setx(V2 *p, float x)
{
  p->x = x;
}

inline static void sety(V2 *p, float y)
{
  p->y = y;
}

void *func_0014B040(void *arg0)
{
  u32 k[4];
  V2 t;
  f32 v1;
  f32 v2;
  f32 v3;
  f32 v4;
  f32 v5;
  f32 v6;
  func_001D4040(k, D_0044C2F0);
  *((s32 *) (((char *) arg0) + 0x4)) = k[0];
  *((s32 *) (((char *) arg0) + 0x0)) = -1;
  init(&t, 70.0f, 70.0f);
  v1 = t.x;
  setx(&t, 40.0f);
  v2 = t.y;
  sety(&t, -30.0f);
  v3 = t.x;
  setx(&t, 20.0f);
  v4 = t.y;
  sety(&t, -60.0f);
  v5 = t.x;
  *((u32 *) (&t.x)) = 0;
  v6 = t.y;
  *((void **) (((char *) arg0) + 0x8)) = &D_0044C900;
  *((float *) (((char *) arg0) + 0x10)) = v1;
  *((float *) (((char *) arg0) + 0x14)) = v2;
  *((float *) (((char *) arg0) + 0x30)) = v3;
  *((float *) (((char *) arg0) + 0x34)) = v4;
  *((float *) (((char *) arg0) + 0x38)) = v5;
  *((float *) (((char *) arg0) + 0x3C)) = v6;
  *((s32 *) (((char *) arg0) + 0x40)) = 1;
  *((float *) (((char *) arg0) + 0x20)) = t.x;
  *((float *) (((char *) arg0) + 0x24)) = -110.0f;
  *((float *) (((char *) arg0) + 0x2C)) = 8000.0f;
  v6 = 0;
  *((s32 *) (((char *) arg0) + 0x18)) = v6;
  *((float *) (((char *) arg0) + 0x28)) = 70.0f;
  sety(&t, 0.0f);
  *((s32 *) (((char *) arg0) + 0xC)) = 0;
  *((float *) (((char *) arg0) + 0x1C)) = t.x;
  return arg0;
}

