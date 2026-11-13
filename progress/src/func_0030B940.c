s32 func_0030B940(void *arg0, s16 *arg1)
{
  s32 *base = *((s32 **) (((u8 *) arg0) + 0x24));
  s32 *out = *((s32 **) (((u8 *) arg0) + 0x48));
  s32 idx = *arg1;
  idx = idx << 2;
  base = (s32 *)((u8 *)base + idx);
  s32 val = *base;
  val = val << 2;
  out = (s32 *)((u8 *)out + val);
  return *out;
}
