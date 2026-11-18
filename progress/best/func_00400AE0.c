inline int inline_fn(int arg0)
{
  return arg0;
}

inline unsigned short inline_fn2(volatile int arg0)
{
  return inline_fn(arg0);
}

inline volatile long inline_fn23(volatile long *arg0, int arg1)
{
  return arg0[arg1];
}

inline volatile long inline_fn234(volatile long *arg0, int arg1)
{
  return inline_fn23(arg0, arg1);
}

inline unsigned short inline_fn2345(volatile long arg0)
{
  return inline_fn2(arg0);
}

inline volatile long inline_fn23456(volatile long arg0)
{
  return arg0;
}

long func_00400AE0(s32 *arg0, s8 *arg1, s32 arg2)
{
  volatile int new_var;
  volatile long new_var3;
  volatile long new_var4[2];
  volatile unsigned int new_var6;
  volatile long *new_var2;
  volatile long new_var5;
  volatile unsigned int new_var7;
  new_var2 = new_var4;
  new_var6 = 1;
  new_var = new_var;
  new_var4[0] = 0;
  new_var3 = inline_fn23456(new_var5 = inline_fn234(new_var4, 0));
  new_var4[0] = new_var2[0];
  new_var6 = 0;
  new_var = new_var3;
  new_var3 = new_var6;
  new_var4[new_var3] = new_var;
  new_var5 = new_var3;
  {
    new_var = new_var5;
    new_var6 = new_var4[new_var];
    new_var4[new_var7 = (double) new_var6] = inline_fn2345(new_var6);
    return inline_fn23(new_var4, 0);
  }
}

