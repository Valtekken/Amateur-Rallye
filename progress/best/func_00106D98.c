inline volatile int inline_fn(volatile int arg0)
{
  return 0, arg0;
}

inline volatile unsigned int inline_fn2(volatile unsigned int arg0)
{
  return arg0;
}

inline volatile int inline_fn23(volatile int arg0)
{
  return arg0;
}

inline volatile unsigned int inline_fn234(volatile unsigned int *arg0)
{
  return *arg0;
}

inline volatile unsigned int inline_fn2345(volatile unsigned int arg0)
{
  return arg0;
}

inline volatile int inline_fn23456(volatile int arg0)
{
  return arg0;
}

volatile unsigned char func_00106D98(void)
{
  volatile unsigned int new_var3;
  volatile unsigned int *new_var18;
  int *new_var11;
  volatile int new_var35;
  volatile unsigned int new_var14;
  volatile unsigned int new_var13;
  int *new_var27;
  unsigned int new_var15;
  volatile unsigned int new_var4;
  volatile unsigned int new_var22;
  volatile int new_var34;
  volatile int new_var37;
  volatile unsigned int new_var16;
  int new_var30;
  int new_var23;
  int *new_var17;
  volatile unsigned int new_var36[2];
  int *new_var12;
  volatile unsigned int new_var32;
  volatile int new_var20;
  volatile int new_var28;
  int *new_var10[2];
  int new_var8;
  int *new_var21;
  unsigned int new_var2;
  int *new_var6;
  volatile int new_var33;
  volatile unsigned int new_var25;
  volatile unsigned int new_var24;
  int **new_var9;
  volatile unsigned int new_var29;
  volatile unsigned int new_var26;
  int **new_var19;
  volatile int new_var31;
  volatile int new_var7;
  int *new_var;
  new_var14 = inline_fn2(new_var36[1] = new_var7);
  new_var13 = 0;
  new_var14 = (new_var13 = (new_var13 = (new_var7 = new_var14)));
  new_var22 = new_var14;
  new_var29 = new_var22;
  new_var32 = new_var29;
  ;
  new_var36[1] = new_var32;
  new_var7 = new_var8;
  new_var23 = (new_var8 = new_var13);
  new_var19 = new_var10;
  new_var8 = new_var13;
  new_var3 = new_var7;
  new_var8 = new_var3;
  new_var13 = new_var8;
  new_var12 = &new_var36[0];
  new_var18 = &new_var13;
  new_var11 = new_var12;
  ;
  new_var36[0] = new_var23;
  new_var17 = new_var19[0];
  new_var10[1] = new_var11;
  new_var34 = (new_var33 = new_var28);
  new_var20 = new_var13;
  do
  {
    if (new_var20)
    {
    }
    new_var10[0] = new_var19[1];
    new_var2 = inline_fn23(new_var7);
    new_var16 = inline_fn234(new_var18);
    new_var15 = new_var2;
    if (new_var36[1] || inline_fn(new_var15))
    {
      new_var26 = new_var2;
      new_var2 = new_var16;
      new_var16 = new_var26;
      new_var25 = new_var16;
      new_var9 = new_var10;
      if (new_var8)
      {
        new_var6 = new_var17;
        new_var7 = new_var26;
      }
      else
      {
        new_var4 = new_var25;
        new_var = new_var9[0];
        if (new_var4)
        {
          new_var6 = (new_var21 = (new_var27 = new_var));
          new_var7 = new_var20;
        }
        else
        {
          new_var6 = new_var;
          new_var7 = inline_fn2345(new_var4);
        }
      }
    }
    else
    {
      new_var7 = (new_var14 = (new_var13 = new_var4));
    }
    new_var31 = new_var14;
    new_var24 = inline_fn23456(new_var31);
    do
    {
    }
    while (new_var24);
  }
  while (*new_var6);
  new_var23 = ((!new_var20) && (!new_var20)) && (!new_var20);
  new_var31 = new_var28;
  new_var37 = new_var34;
  new_var28 = new_var20;
  new_var35 = new_var37;
  new_var20 = new_var31;
  new_var36[0] = new_var35;
  if (((!new_var28) && (!new_var36[0])) && (!new_var20))
  {
    new_var30 = 0;
    do
    {
    }
    while (new_var30);
  }
}

