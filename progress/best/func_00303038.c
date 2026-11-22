extern void func_003F9698(void *);
extern u32 D_004847B8;
inline volatile int inline_fn(volatile int arg0)
{
  return arg0;
}

inline volatile int inline_fn2(volatile int arg0)
{
  return arg0;
}

inline volatile int inline_fn23(volatile int arg0)
{
  return 0, inline_fn(arg0);
}

s32 func_00303038(void *arg0, s32 *arg1)
{
  volatile int new_var2;
  volatile unsigned int new_var16;
  volatile int new_var14;
  int new_var17;
  volatile int new_var10;
  volatile unsigned int new_var8;
  u32 *new_var20;
  u32 *new_var4;
  volatile int new_var11;
  volatile unsigned int new_var15;
  volatile int new_var;
  volatile int new_var19;
  int new_var3;
  volatile unsigned int new_var12;
  u32 *new_var18;
  volatile int new_var9;
  volatile int new_var13;
  volatile int new_var5;
  int new_var7[2];
  volatile int new_var6;
  if (new_var7)
  {
    new_var5 = new_var8;
    new_var5 = 0;
  }
  else
  {
    new_var5 = new_var8;
    new_var5 = 0;
  }
  do
  {
    new_var3 = new_var7[1];
    new_var4 = &new_var19;
    new_var14 = new_var5;
    do
    {
      new_var8 = *arg1;
      new_var15 = (new_var = new_var11);
      new_var19 = new_var14;
      new_var16 = *new_var4;
      new_var15 = (new_var7[new_var16] = new_var8);
      new_var8 = 1;
      new_var7[new_var8] = new_var7[new_var14];
      new_var = new_var14;
      new_var7[new_var] = new_var3;
      new_var5 = new_var5;
      new_var15 = (new_var10 = new_var2);
      new_var9 = (new_var14 = new_var5);
      new_var = new_var9;
      new_var = new_var;
      new_var = new_var || arg1;
      new_var13 = new_var15;
      new_var15 = new_var15;
      new_var11 = new_var15;
      new_var11 = new_var13;
      if (new_var)
      {
        new_var7[new_var8] = (new_var15 = (new_var5 = (new_var9 = new_var5)));
      }
      else
      {
        new_var2 = inline_fn23(new_var9);
        new_var13 = new_var11;
        new_var6 = new_var13;
        new_var7[new_var8] = new_var6;
      }
    }
    while (new_var5);
    new_var = new_var3;
    new_var20 = &D_004847B8;
    new_var4 = new_var20;
    if (!inline_fn2(new_var9))
    {
    }
    new_var5 = new_var7[new_var5];
    if ((char) (new_var == new_var5))
    {
      new_var17 = 1;
      new_var14 = new_var8;
      new_var2 = new_var17;
      if (new_var14)
      {
        func_003F9698(new_var4);
        new_var8 = new_var;
        new_var8 = new_var;
      }
      else
      {
        new_var16 = new_var8;
        if (new_var16)
        {
          new_var18 = new_var4;
          func_003F9698(new_var18);
        }
        else
          if (new_var12 = new_var6)
        {
          if (new_var14)
          {
            func_003F9698(new_var18);
          }
          else
          {
            func_003F9698(new_var18);
          }
        }
        else
        {
          func_003F9698(new_var18);
        }
        if (new_var2)
        {
        }
      }
      if (new_var8)
      {
      }
      new_var6 = new_var8;
      return new_var6;
    }
    new_var11 = new_var8;
    return new_var11;
  }
  while (new_var5);
}

