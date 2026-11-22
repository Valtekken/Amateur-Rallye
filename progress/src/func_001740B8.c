void *func_001740B8(void *arg0, s32 arg1)
{
  s32 **base = *((s32 ***) (((char *) arg0) + 0x14));
  s32 i = 0;
  s32 n = ((*((s32 *) (((char *) arg0) + 0x18))) - ((s32) base)) >> 2;
  int new_var;
  s32 *ret;
  new_var = 0;
  if (n > new_var)
  {
    s32 **p = base;
    do
    {
      s32 *e = *p;
      if ((*((s32 *) (((char *) (*((s32 **) (((char *) e) + 0xC)))) + 4))) == arg1)
      {
        ret = e;
        return ret;
      }
      i++;
      p++;
    }
    while (i < n);
  }
  return 0;
}
