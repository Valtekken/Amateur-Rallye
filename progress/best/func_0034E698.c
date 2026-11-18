inline volatile int inline_fn(volatile unsigned int arg0)
{
  return arg0;
}

inline int inline_fn2(volatile int arg0, volatile int arg1)
{
  return arg0 || arg1;
}

inline volatile int inline_fn23(volatile int arg0)
{
  return arg0;
}

inline int inline_fn234(volatile int arg0, volatile int arg1)
{
  return inline_fn2(arg0, arg1);
}

inline volatile int inline_fn2345(volatile int arg0)
{
  return arg0;
}

void func_0034E698(void)
{
  volatile int new_var14;
  volatile unsigned int new_var5;
  volatile int new_var20;
  unsigned short new_var4;
  int new_var19;
  volatile int new_var10;
  volatile int new_var15;
  volatile int new_var6;
  volatile int new_var23;
  volatile int *new_var17;
  volatile int new_var16;
  volatile int new_var22;
  volatile int new_var21;
  volatile int new_var25;
  volatile int new_var7;
  volatile int new_var12;
  volatile int new_var26;
  volatile int new_var24;
  volatile int new_var;
  volatile int new_var11;
  int new_var3;
  volatile int new_var18;
  volatile unsigned int new_var8;
  short new_var27;
  volatile int new_var2;
  volatile int new_var9;
  volatile int new_var13;
  new_var26 = (new_var25 = inline_fn(new_var19));
  new_var19 = 0;
  new_var6 = new_var26;
  new_var13 = (new_var18 = (new_var7 = new_var5));
  new_var12 = new_var13;
  new_var2 = new_var2;
  new_var21 = new_var;
  new_var13 = inline_fn23(new_var12);
  new_var4 = new_var21;
  new_var2 = new_var4;
  ;
  new_var20 = (new_var24 = (new_var21 = *(new_var17 = &new_var)));
  new_var15 = new_var;
  if (new_var2)
  {
    if (new_var14)
    {
      ;
      new_var11 = (new_var7 = new_var15);
      new_var = new_var;
      new_var10 = new_var11;
      new_var = new_var20;
      new_var10 = *new_var17;
      new_var8 = new_var10;
      new_var = inline_fn234(*new_var17, new_var10);
      new_var3 = new_var8;
    }
    else
    {
      ;
      new_var11 = (new_var10 = (new_var7 = new_var15));
      new_var22 = *new_var17;
      new_var = new_var;
      new_var = inline_fn2345(new_var21);
      new_var2 = new_var22;
      new_var10 = new_var22;
      new_var8 = new_var10;
      new_var = inline_fn234(new_var2, new_var10);
      ;
    }
    if (new_var8)
    {
      new_var9 = new_var2;
      new_var12 = new_var9;
      new_var = new_var5;
      new_var5 = new_var12;
    }
    else
      if (new_var8)
    {
      if (new_var27)
      {
        new_var23 = new_var2;
        new_var = new_var23;
      }
      else
      {
        new_var23 = new_var2;
        new_var = new_var23;
      }
    }
    else
    {
      new_var23 = new_var2;
      new_var = new_var23;
    }
  }
  else
  {
    new_var11 = new_var5;
    if (new_var25 = 0)
    {
      if (1)
      {
        new_var = new_var11;
        do
        {
        }
        while (new_var19);
      }
    }
    else
      if (new_var)
    {
      if (new_var23)
      {
        new_var14 = new_var13;
        new_var5 = new_var14;
        new_var3 = new_var5;
        new_var7 = new_var3;
        new_var27 = new_var7;
        ;
        ;
      }
      else
      {
        new_var14 = new_var13;
        new_var5 = new_var14;
        new_var3 = new_var5;
        new_var7 = new_var3;
        new_var27 = new_var7;
        ;
        ;
      }
    }
    else
      if (new_var27 || new_var17)
    {
      new_var14 = new_var13;
      new_var3 = new_var14;
      new_var7 = new_var3;
      new_var12 = new_var7;
      new_var = new_var12;
    }
    else
    {
      new_var14 = new_var13;
      new_var3 = new_var14;
      new_var7 = new_var3;
      new_var12 = new_var7;
      new_var = new_var12;
    }
  }
  ;
  {
  }
}

