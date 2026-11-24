extern void func_00173848(void *);
extern void func_00174048(void *);
extern void func_001743C8(void *);
extern void func_00174450(void *);
extern void func_001744F8(void *);
extern void func_00173CC8(void *, f32);
extern void func_00173D98(void *, f32);
extern void func_00173DF0(void *, f32);
extern void func_00174178(void *, f32);
extern f32 D_00479C98;
inline int inline_fn(s32 arg0, int arg1)
{
  return arg0 > arg1;
}

s32 func_00173A70(void *p, s32 n)
{
  f32 step;
  void **new_var;
  s32 i = 0;
  if (inline_fn(n, 0))
  {
    step = D_00479C98 / ((f32) n);
    do
    {
      func_00173848(p);
      func_00173CC8(p, step);
      func_00173D98(p, step);
      if (n == 1)
      {
        s32 *q = *((s32 **) (((char *) p) + 0x2c));
        if (inline_fn((q[2] - q[1]) >> 2, 0))
        {
          return 1;
        }
      }
      func_00173DF0(p, step);
      i++;
      func_001743C8(p);
      new_var = &p;
      func_00174048(*new_var);
      func_00174178(p, step);
      func_00174450(p);
    }
    while (i < n);
  }
  func_001744F8(p);
  return 0;
}

