inline s32 *inline_fn(s32 *arg0)
{
  return arg0;
}

inline s32 *inline_fn2(s32 ***arg0)
{
  return *arg0[0];
}

unsigned long func_0032D3D8(s32 *arg1)
{
  s32 *new_var31;
  int *new_var34;
  s32 *new_var17;
  int *new_var9;
  s32 ***new_var26;
  volatile unsigned int new_var27;
  s32 *new_var10;
  s32 *new_var2;
  s32 *new_var19;
  s32 *new_var15;
  s32 *new_var24;
  int new_var22[2];
  s32 **new_var3;
  s32 ***new_var28;
  s32 *new_var14;
  s32 *new_var;
  s32 *new_var25;
  int new_var29;
  volatile unsigned int new_var7;
  s32 **new_var20[2];
  int *new_var11;
  s32 *new_var5;
  s32 ***new_var30;
  s32 *new_var4;
  s32 *new_var18;
  volatile int new_var32;
  volatile unsigned int new_var6;
  s32 *new_var13;
  int new_var33;
  s32 *new_var16;
  unsigned long long new_var8;
  volatile unsigned int new_var23;
  s32 **new_var21;
  volatile int new_var12;
  new_var11 = &new_var22[1];
  new_var12 = 1;
  if (new_var)
  {
    new_var24 = arg1;
    new_var = (new_var31 = inline_fn(new_var24));
    new_var32 = new_var12;
    new_var22[1] = new_var32;
  }
  else
  {
    new_var22[0] = new_var32;
    new_var = inline_fn(arg1);
    if (1)
    {
      do
      {
      }
      while (0);
    }
    new_var13 = new_var22;
    new_var22[1] = (new_var34 = new_var22)[0];
  }
  if (new_var7 = new_var13[1])
  {
    new_var33 = 0;
    do
    {
      new_var9 = new_var11;
      new_var2 = new_var;
      ;
    }
    while (0);
    new_var10 = new_var;
    if (new_var10)
    {
      new_var26 = new_var20;
      new_var24 = new_var11;
      if (new_var26 || new_var19)
      {
        new_var4 = new_var24;
        new_var27 = (new_var23 = 1);
        new_var3 = &new_var2;
        new_var21 = new_var3;
        new_var20[new_var27] = new_var3;
        new_var23 = 1;
        new_var6 = new_var23;
        new_var18 = *new_var21;
        new_var29 = new_var33;
        new_var7 = new_var29;
        new_var14 = inline_fn2(new_var20);
      }
      else
      {
        new_var4 = new_var11;
        new_var3 = &new_var2;
        new_var21 = new_var3;
        new_var20[new_var23 = 1] = new_var3;
        new_var23 = 1;
        new_var6 = new_var23;
        new_var18 = *new_var21;
        new_var7 = new_var29;
        do
        {
          new_var14 = inline_fn2(new_var30 = new_var20);
        }
        while (new_var33);
      }
      do
      {
        new_var16 = new_var18;
        new_var8 = 1;
        new_var25 = new_var16;
        new_var22[new_var8] = *new_var4;
        if (new_var13[1])
        {
          (void) new_var25;
        }
        else
        {
          ;
          new_var20[new_var33] = new_var20[new_var6];
          new_var13 = new_var14;
          (void) new_var13;
        }
      }
      while (new_var7);
    }
    else
    {
      new_var15 = new_var13;
      new_var = new_var15;
      new_var5 = new_var;
      new_var17 = new_var5;
      new_var19 = new_var17;
      (void) new_var19;
    }
  }
}

