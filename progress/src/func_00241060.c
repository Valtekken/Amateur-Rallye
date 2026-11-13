struct S_c {
  s32 _pad0;
  s32 _pad4;
  s32 _pad8;
  s32 _padC;
  s32 _pad10;
  s32 _pad14;
  void **unk18;
  s32 unk1C;
};
s32 func_00241060(struct S_c *arg0, s32 arg1)
{
  s32 *p = (s32 *) arg0->unk18;
  s32 i = 0;
  s32 count = (arg0->unk1C - ((s32) p)) >> 2;
  if (count > 0) { do {
      if ((*p) == arg1)
      {
        return 1;
      }
      i++;
      p++;
    }
    while (i < count);
  }
  return 0;
}
