s32 func_0016F000(void *arg0, s32 arg1)
{
  s32 end = (s32) (*((s32 **) (((char *) arg0) + 0xC)));
  s32 *p = *((s32 **) (((char *) arg0) + 8));
  s32 n = (end - ((s32) p)) >> 2;
  s32 i = 0;
  if (n > 0)
  {
    do
    {
      if ((*p) == arg1)
      {
        return 1;
      }
      i++;
      p++;
    }
    while (i < n);
  }
  return 0;
}

s32 func_0016F040(void *arg0, s32 arg1);
