extern u32 D_0040E618[];
extern void func_002B2028(void *);
extern void D_002AD390(void *);
s32 *func_0023B6E8(void *arg0, s32 arg1)
{
  s32 **base = *((s32 **) (((char *) arg0) + 0x1C));
  int new_var;
  s32 n = ((*((s32 *) (((char *) arg0) + 0x20))) - ((s32) base)) >> 2;
  s32 *new_var2;
  s32 i = 0;
  new_var = 0;
  if (n > new_var)
  {
    s32 **p = base;
    do
    {
      s32 *e = *p;
      if ((*e) == arg1)
      {
        new_var2 = e;
        return new_var2;
      }
      i++;
      p++;
    }
    while (i < n);
  }
  return 0;
}

