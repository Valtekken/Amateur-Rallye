inline void *inline_fn(void *arg0)
{
  return arg0;
}

inline float inline_fn2(void *arg0, void *arg1)
{
  return (float) (arg0 || arg1);
}

inline void **inline_fn23(void **arg0)
{
  return arg0;
}

inline void *inline_fn234(void *arg0)
{
  return arg0;
}

void func_001E6E48(void *arg0)
{
  void *new_var9;
  int i;
  void *new_var2;
  void *new_var30;
  void *new_var16;
  volatile unsigned int new_var27;
  void *new_var4;
  void *new_var14;
  volatile int new_var26;
  void *new_var21;
  void *new_var12;
  void *new_var15[2];
  void *new_var28;
  void *new_var20;
  void *new_var6;
  void **new_var13;
  int new_var5;
  void *new_var19;
  int new_var;
  void **new_var7;
  void **new_var22;
  void *new_var23;
  volatile unsigned char pad;
  void *new_var29;
  void *new_var10;
  void *new_var3;
  volatile int new_var25;
  void *new_var24;
  int new_var17;
  void *new_var18;
  void *new_var11;
  new_var5 = 1;
  new_var27 = 1;
  new_var17 = (int) new_var5;
  new_var25 = 0;
  new_var29 = new_var6;
  new_var26 = new_var25;
  new_var = new_var26;
  new_var28 = new_var29;
  new_var30 = new_var9;
  new_var14 = new_var30;
  for (i = new_var; (i + 1) <= new_var17; i++)
  {
  }

  new_var16 = new_var28;
  new_var20 = new_var14;
  if (1)
  {
    void *new_var8;
    new_var8 = new_var16;
    new_var2 = new_var20;
    new_var15[0] = new_var8;
    new_var13 = new_var15;
  }
  new_var16 = arg0;
  new_var24 = new_var2;
  new_var7 = &new_var16;
  if (inline_fn2(new_var24, new_var13[0]))
  {
    ;
    new_var15[1] = *new_var7;
    if (1)
    {
      if (1)
      {
        new_var12 = new_var15[1];
        new_var9 = new_var12;
        new_var10 = new_var9;
        new_var2 = new_var10;
        new_var6 = new_var2;
        new_var12 = new_var6;
        new_var4 = new_var12;
      }
      return new_var4;
    }
  }
  else
  {
    new_var23 = new_var11;
    new_var14 = new_var23;
    new_var3 = new_var13[1];
    new_var = new_var27;
    if (new_var6)
    {
      new_var22 = new_var13;
      new_var15[1] = new_var14;
      new_var9 = inline_fn23(new_var22)[new_var];
      new_var19 = new_var9;
      new_var2 = new_var19;
      new_var6 = new_var2;
      new_var10 = new_var6;
      new_var9 = new_var10;
      new_var4 = inline_fn(new_var9);
      return new_var4;
    }
    else
    {
      new_var23 = new_var9;
      new_var15[(int) new_var] = *new_var7;
      if (1)
      {
        if (new_var23)
        {
          new_var19 = new_var3;
          new_var9 = new_var19;
          new_var2 = new_var9;
          new_var6 = new_var2;
          new_var10 = new_var6;
          new_var9 = inline_fn234(new_var10);
          new_var4 = (new_var18 = new_var9);
        }
        else
        {
          new_var9 = new_var19;
          new_var2 = new_var9;
          new_var6 = new_var2;
          new_var10 = new_var6;
          new_var24 = new_var10;
          new_var9 = new_var24;
          new_var18 = new_var9;
          new_var4 = new_var18;
        }
      }
      new_var20 = new_var4;
      new_var21 = new_var20;
      return new_var21;
    }
  }
}

