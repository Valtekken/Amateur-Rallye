#define W(p,o) (*(s32*)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
extern void func_001D4040(void *, const char *);
extern char D_0044C500[];
extern char D_0044C510[];
extern char D_0044C700[];
extern char D_0044C420[];
extern char D_0044C438[];
extern char D_0044C840[];
extern char D_0044DD18[];
extern char D_0044BC38[];
extern char D_0044BD60[];
extern void *D_002AD408(s32);
extern unsigned int func_001E2460(void *, void *);
extern void func_001E2C78(void *, const char *, s32);
extern void func_001E2E38(void *, const char *, void *);
void *func_0014DE38(s32 *p);
void *func_0014BDA0(s32 *p);
inline static void vi(float *p)
{
  p[0] = 0;
  ((s32 *) p)[1] = 0;
  ((s32 *) p)[2] = 0;
}

void *func_0014BE20(void *a)
{
  s32 *new_var;
  s32 k[8];
  s32 c[4];
  s32 n;
  s32 *p = D_002AD408(36);
  func_001D4040(k, D_0044C420);
  n = k[0];
  new_var = p;
  p[2] = 0;
  p[3] = 0;
  p[1] = 0;
  p[0] = 0;
  *((void **) (p + 4)) = D_0044DD18;
  vi((float *) (new_var + 5));
  p[8] = n;
  func_001E2460(c, p);
  func_001E2C78(c, D_0044BC38, W(a, 12));
  func_001E2E38(c, D_0044BD60, ((char *) a) + 16);
  return p;
}

extern s32 func_00193B60(void);
extern s32 func_00193138(s32, s32);
extern s32 func_00193400(s32, s32);
extern void func_0021E4F0(void *);
extern void func_0029EC50(void *, s32, s32);
typedef struct 
{
  float x;
  float y;
  float z;
} V;
inline static void cp(V *d, V *s)
{
  d->x = s->x;
  d->y = s->y;
  d->z = s->z;
}

void func_0014BCD8(void *p, void *q);
