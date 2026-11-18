s32 func_001F21A0(s32 *, s32);
s32 func_001F0468(void *, void *);
s32 func_001F2398(void *arg0)
{
  s32 *p3;
  s32 count;
  s32 *p4;
 do { p3 = (s32 *) (((char *) arg0) + 0x3C); count = 0; } while (0);
  p4 = (s32 *) (((char *) arg0) + 0x4);
  while (count < 3)
  {
    count++;
    if ((*p3) != 0)
    {
      if ((*p4) != 0)
      {
        return 1;
      }
    }
    p4 = (s32 *) (((char *) p4) + 0x14);
    p3 = (s32 *) (((char *) p3) + 0x4);
  }

  return 0;
}

s32 func_001F2578(void *arg0, s32 arg1, s32 arg2);
s32 func_001F23E0(void *arg0, s32 arg1, s32 *arg2);
s32 func_001F0748(void *arg0, void *arg1, s32 arg2);
