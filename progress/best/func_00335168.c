inline int inline_fn(int arg0)
{
  return arg0;
}

inline volatile int inline_fn2(volatile int arg0)
{
  return arg0;
}

inline int inline_fn23(int arg0)
{
  return inline_fn(arg0);
}

inline volatile unsigned int inline_fn234(volatile unsigned int arg0)
{
  return arg0;
}

inline volatile int inline_fn2345(volatile int arg0)
{
  return inline_fn2(arg0);
}

volatile long long func_00335168(void *a, void *b)
{
  volatile int new_var33[2];
  volatile int new_var22;
  int new_var9;
  volatile int new_var13;
  volatile int new_var24;
  volatile int new_var20;
  int new_var3;
  int new_var17;
  volatile unsigned int new_var18;
  volatile int new_var30;
  unsigned int new_var23;
  volatile int new_var6;
  volatile int new_var11;
  volatile int new_var29[2];
  volatile int new_var12;
  volatile unsigned int new_var25;
  volatile unsigned int new_var8;
  int new_var2;
  volatile int new_var10;
  int new_var15;
  volatile int new_var26;
  volatile int new_var5;
  int new_var28;
  volatile int new_var32;
  int new_var14;
  volatile int new_var19;
  int new_var;
  volatile unsigned int new_var4;
  volatile int new_var7;
  volatile int new_var27;
  volatile int *new_var31;
  if (new_var6)
  {
    if (new_var5 || new_var8)
    {
      new_var4 = 0;
      new_var5 = new_var4;
      new_var6 = new_var5;
      new_var7 = new_var6;
      new_var2 = new_var7;
      new_var = (new_var = new_var2);
      new_var5 = inline_fn23(new_var);
      new_var12 = new_var5;
      new_var4 = new_var12;
      new_var18 = new_var4;
      new_var3 = (new_var33[1] = new_var18);
    }
    else
    {
      new_var29[1] = 0;
      new_var4 = new_var29[1];
      new_var3 = inline_fn234(new_var4);
      new_var15 = new_var4;
      new_var17 = new_var2;
      new_var28 = new_var17;
      new_var5 = new_var15;
      new_var6 = new_var5;
      if (1)
      {
        if (new_var2)
        {
          new_var19 = new_var || new_var4;
          if (new_var19)
          {
            new_var7 = new_var6;
            new_var4 = (new_var9 = (new_var = new_var28));
            new_var2 = new_var7;
            new_var22++;
            new_var22--;
            do
            {
              new_var = new_var4;
              new_var19 = new_var20;
            }
            while ((int) new_var29[1]);
            new_var5 = inline_fn23(new_var);
            new_var30++;
            new_var30--;
          }
          else
          {
            new_var7 = new_var6;
            new_var10 = new_var7;
            new_var26 = new_var10;
            new_var4 = (new_var = new_var17);
            new_var2 = new_var26;
            new_var = new_var4;
            new_var5 = inline_fn23(new_var);
          }
        }
        else
        {
          new_var7 = new_var6;
          new_var32 = new_var7;
          new_var4 = (new_var = new_var28);
          new_var2 = new_var32;
          new_var = new_var4;
          new_var25 = inline_fn(new_var);
          new_var5 = new_var25;
        }
      }
      new_var4 = new_var12;
    }
  }
  else
  {
    new_var12 = new_var5;
    new_var4 = new_var29[1];
    new_var20 = new_var32;
    new_var20 = 1;
    new_var30 = (new_var27 = (new_var29[new_var20] = new_var8));
    new_var8 = new_var4;
    new_var6 = new_var30;
    new_var13 = new_var29[1];
    new_var29[0] = inline_fn2345(new_var19);
    new_var11 = new_var13;
    new_var24 = new_var29[0];
    new_var13 = new_var24;
    new_var22 = new_var13;
    new_var20 = new_var22;
    new_var33[0] = new_var20;
    new_var33[1] = new_var33[0];
    new_var2 = new_var33[1];
    new_var7 = new_var11;
    new_var23 = new_var2;
    new_var31 = new_var29;
    new_var = new_var23;
    new_var = new_var;
    new_var29[0] = inline_fn23(new_var);
    new_var6 = new_var31[0];
    new_var26 = new_var6;
    new_var5 = new_var26;
    new_var4 = new_var5;
    new_var3 = new_var4;
  }
  new_var33[1] = new_var3;
  if (new_var6)
  {
    if (new_var6)
    {
      new_var15 = new_var33[1];
      new_var14 = new_var15;
    }
    else
    {
      new_var15 = new_var33[1];
      new_var14 = new_var15;
    }
  }
  else
    if (new_var29[0])
  {
    new_var26 = new_var33[1];
    new_var25 = new_var26;
    new_var15 = new_var25;
    new_var14 = new_var15;
  }
  else
  {
    new_var15 = new_var26;
    new_var14 = new_var15;
  }
  do
  {
  }
  while (new_var14);
}

