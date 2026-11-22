inline volatile unsigned int inline_fn(volatile unsigned long arg0)
{
  return arg0;
}

inline volatile unsigned int inline_fn2(volatile unsigned int arg0)
{
  return arg0;
}

inline volatile unsigned int inline_fn23(volatile unsigned int arg0)
{
  return inline_fn((double) arg0);
}

inline volatile unsigned int inline_fn234(volatile unsigned int *arg0, volatile unsigned int arg1)
{
  return arg0[arg1];
}

s8 *func_003FDF48(void)
{
  volatile unsigned int *new_var10;
  volatile unsigned int new_var8[2];
  volatile unsigned int new_var3;
  volatile unsigned int new_var6;
  volatile int new_var7;
  int new_var;
  volatile unsigned int new_var9;
  volatile unsigned int *new_var11;
  long long new_var5;
  volatile unsigned int new_var2;
  int new_var4;
  if ((new_var9 = new_var2) || new_var10)
  {
    new_var2 = (new_var5 = new_var);
    new_var10 = new_var8;
    new_var6 = new_var10[1];
    new_var2 = 0;
    new_var3 = new_var2;
    new_var9 = new_var10[new_var2];
    new_var4 = new_var2;
  }
  else
  {
    new_var2 = (new_var5 = new_var);
    new_var10 = new_var8;
    new_var11 = &new_var10[1];
    new_var6 = *new_var11;
    new_var2 = 0;
    new_var3 = new_var2;
    new_var9 = inline_fn234(new_var10, new_var2);
    new_var4 = new_var2;
  }
  if (new_var)
  {
    do
    {
      if (1)
      {
        new_var4 = 1;
        new_var5 = inline_fn23(new_var3);
        new_var8[0] = new_var5;
        new_var2 = new_var7;
        {
        }
        new_var7 = new_var9;
        new_var8[new_var4] = new_var2;
      }
    }
    while (0);
    new_var = new_var6;
    new_var = new_var4;
    return new_var;
  }
  else
  {
    new_var3 = 0;
    new_var = new_var8[1];
    new_var5 = (new_var2 = inline_fn(new_var3));
    new_var8[new_var2] = new_var5;
    new_var2 = new_var9;
    new_var9 = (new_var8[1] = new_var2);
    new_var3 = new_var9;
    new_var = inline_fn2(new_var3);
    return new_var;
  }
}

