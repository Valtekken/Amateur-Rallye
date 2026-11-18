extern s32 func_003F9288(s8 *, s8 *, s32);
inline int inline_fn(s32 arg0, int arg1)
{
  return arg0 == arg1;
}

inline int inline_fn2(s8 *arg0, s8 *arg1, long arg2)
{
  return inline_fn(func_003F9288(arg0, arg1, arg2), 0);
}

u32 func_0038B808(void **arg0, s8 *arg1, s32 arg2, long arg3)
{
  void *new_var3;
  void **obj;
  s32 i;
  void **new_var;
  s32 limit = arg2 + arg3;
  void *new_var4;
  volatile unsigned int new_var2;
  new_var4 = *obj;
  arg0 = (void **) new_var4;
  new_var = obj;
  {
    ;
    {
      return arg2;
    }
    i++;
    limit = i + arg3;
  }
  new_var3 = *new_var;
  arg0 = (void **) new_var3;
  return 0xffffffffu;
}

