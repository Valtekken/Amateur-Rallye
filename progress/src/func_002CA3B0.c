void func_002CA3B0(void *arg0, s32 arg1)
{
  s8 *p = (s8 *)arg0 + 4;
  s8 c;
  p += arg1 & 0x7F;
  c = *p;
  *p = -1;
  *(s8 *)((s8 *)arg0 + c + 0x84) = 0;
}
