extern void *func_002015D8(void);
extern s32 func_0021E9C0(s32, void *);
extern s32 func_0021F4B0(void);
extern void func_00241548(void *);
extern void func_00241550(void *, s32);
extern void func_00241578(void *, s32, f32 *, f32 *, f32);
extern f32 D_00426508[];
typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} V3;
typedef struct 
{
  u8 pad[0x60];
  s16 off;
  s16 pad62;
  void *fn;
} VT;
typedef s32 (*VFunc)(void *, void *, void *);
void func_0017DB00(void *arg0)
{
  char *base = (char *) arg0;
  void *p;
  f32 a[3];
  f32 b[3];
  s32 obj[4];
  if ((*((void **) (base + 0x20))) == NULL)
  {
    *((void **) (base + 0x20)) = func_0021E9C0(func_0021F4B0(), base + 0x1C);
  }
  p = *((void **) (base + 0x20));
  if (p != NULL)
  {
    void *v6 = *((void **) (((char *) func_002015D8()) + 8));
    VT *vt = *((VT **) v6);
    s32 s18 = ((VFunc) vt->fn)(((char *) v6) + vt->off, p, v6);
    f32 *d = D_00426508;
    a[0] = (b[0] = d[0]);
    b[1] = (a[1] = d[1]);
    b[2] = (a[2] = d[2]);
    func_00241548(obj);
    if (s18 != 0)
    {
      func_00241578(obj, s18, a, b, *((f32 *) ((*((char **) (base + 0xC))) + 0x10)));
    }
    {
      V3 *d18 = (V3 *) ((*((char **) (base + 0xC))) + 0x18);
      d18->x = a[0];
      d18->y = a[1];
      d18->z = a[2];
    }
    {
      V3 *d24 = (V3 *) ((*((char **) (base + 0xC))) + 0x24);
      d24->x = b[0];
      d24->y = b[1];
      d24->z = b[2];
    }
    func_00241550(obj, 2);
  }
  else
  {
    f32 *d = D_00426508;
    {
      V3 *d18 = (V3 *) ((*((char **) (base + 0xC))) + 0x18);
      d18->x = d[0];
      d18->y = d[1];
      d18->z = d[2];
    }
    {
      V3 *d24 = (V3 *) ((*((char **) (base + 0xC))) + 0x24);
      d24->x = d[0];
      d24->y = d[1];
      d24->z = d[2];
    }
  }
}

