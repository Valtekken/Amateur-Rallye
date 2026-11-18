void *func_0016DBB8(void *arg0, void *arg1)
{
  void *p = *((void **)((char *)arg1 + 8));
  f32 f0 = *((f32 *)p + 16);
  f32 f1 = *((f32 *)p + 17);
  f32 f2 = *((f32 *)p + 18);
  f32 sp_vals[3];
  sp_vals[0] = f0;
  sp_vals[1] = f1;
  sp_vals[2] = f2;
  *((f32 *)arg0 + 0) = f0;
  *((f32 *)arg0 + 1) = f1;
  *((f32 *)arg0 + 2) = f2;
  return arg0;
}
