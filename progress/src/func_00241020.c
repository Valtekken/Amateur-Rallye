struct S_b
{
  s32 _pad0;
  s32 _pad4;
  s32 _pad8;
  void **unkC;
  s32 unk10;
};
s32 func_00241020(struct S_b *arg0, s32 arg1)
{
  s32 *p = (s32 *) arg0->unkC;
  s32 i = 0;
  s32 count = (arg0->unk10 - ((s32) p)) >> 2;
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
