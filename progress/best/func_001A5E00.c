#define A(p,t,o) (*(t*)((char*)(p)+(o)))
extern void *func_001E3820(s32, s32, void *);
s32 func_001A5E00(void *arg0, s32 arg1)
{
  float new_var;
  int off = arg1 * 4;
  char *new_var2;
  s32 res = 0;
  void *p = func_001E3820(func_001E4280(), (*((s32 *) (((char *) arg0) + 0x1C))) + off, ((char *) arg0) + 0x6C);
  if (p == 0)
  {
    return 0;
  }
  f32 sum = 0.0f;
  new_var = 0.25f;
  f32 *fp = (f32 *) (((char *) (*((void **) (((char *) p) + 0xC)))) + 0x44);
  s32 i = 3;
  do
  {
    sum += *fp;
    fp = (f32 *) (((char *) fp) + 0x54);
    i--;
  }
  while (i >= 0);
  f32 v = sum * new_var;
  f32 k15 = 1.5f;
  f32 k13 = 1.3f;
  f32 k10 = 10.0f;
  s32 *q = (s32 *) ((arg1 * 4) + (*((s32 *) (((char *) arg0) + 0x5C))));
  if ((*q) == 0)
  {
    if (v > k15)
    {
      *q = 0x19;
    }
  }
  else
  {
 do { } while (0);
    new_var2 = (char *) arg0;
    if (v < k13)
    {
      *q = 0;
    }
    if (v > k10)
    {
      *((s32 *) ((arg1 * 4) + (*((s32 *) (new_var2 + 0x5C))))) = 1;
    }
  }
  s32 *r = (s32 *) ((arg1 * 4) + (*((s32 *) (((char *) arg0) + 0x5C))));
  s32 x = *r;
  if (x != 0)
  {
    *r = x - 1;
    res = (*((s32 *) ((arg1 * 4) + (*((s32 *) (((char *) arg0) + 0x5C)))))) < 1;
  }
  return res;
}
