inline int inline_fn(int arg0)
{
  return arg0;
}

inline volatile short inline_fn2(int *arg0)
{
  return *arg0;
}

inline int **inline_fn23(int **arg0)
{
  return arg0;
}

inline volatile short inline_fn234(int *arg0)
{
  return inline_fn2(arg0);
}

void func_00107FA8(int a)
{
  int *new_var41;
  int **new_var25;
  int *new_var39;
  int *new_var47;
  unsigned int new_var9;
  int new_var20;
  int *new_var2;
  int *new_var6;
  int *new_var30;
  volatile char new_var10;
  unsigned int new_var27[2];
  int *new_var19;
  int *new_var37;
  int new_var14;
  int *new_var40;
  unsigned int *new_var34;
  int new_var;
  int *new_var12;
  int *new_var4;
  int *new_var35;
  int **new_var38;
  int new_var21;
  int *new_var36;
  int new_var5;
  int *new_var33;
  int new_var45;
  int new_var26;
  int *new_var22;
  int *new_var16;
  int *new_var46;
  int *new_var7;
  int *new_var8;
  int new_var44;
  int ***new_var42;
  int *new_var17;
  int *new_var43;
  volatile int new_var3;
  int *new_var18;
  int *new_var11;
  int *new_var29;
  int *new_var24;
  volatile int new_var31;
  int *new_var13;
  int new_var23;
  int *new_var28;
  int **new_var32;
  volatile unsigned short new_var15;
  if (1)
  {
    if (new_var8)
    {
      new_var45 = new_var5;
      new_var39 = new_var8;
      new_var18 = new_var39;
      new_var24 = new_var18;
      new_var32 = &new_var24;
      new_var38 = inline_fn23(new_var32);
      new_var12 = (new_var13 = &new_var9);
      new_var42 = &new_var25;
      new_var25 = new_var38;
      new_var11 = *(*new_var42);
      new_var4 = new_var11;
      new_var16 = (new_var47 = (new_var6 = (new_var2 = (new_var7 = new_var4))));
      new_var4 = (new_var7 = new_var16);
      new_var = new_var45;
      new_var8 = (new_var35 = &new_var);
      new_var27[1] = inline_fn(new_var14 = inline_fn234(new_var12));
      new_var22 = new_var41;
      new_var41 = new_var7;
      new_var17 = new_var22;
      ;
      new_var = (long) 0;
      ;
      new_var9 = (new_var27[1] = (double) inline_fn234(new_var17));
      new_var5 = 0;
    }
    else
    {
      do
      {
        new_var46 = new_var8;
        new_var18 = new_var46;
        new_var40 = new_var18;
        new_var33 = new_var37;
        new_var9 = inline_fn(new_var14 = inline_fn2(new_var13 = (new_var34 = &new_var9)));
      }
      while (0);
      new_var37 = new_var4;
      new_var29 = (new_var2 = new_var33);
      new_var11 = new_var40;
      new_var3 = new_var27[0];
      new_var4 = new_var11;
      new_var16 = (new_var43 = (new_var6 = new_var29));
      new_var23 = (new_var31 = (new_var44 = (new_var26 = new_var20)));
      new_var28 = &new_var;
      new_var4 = new_var16;
      new_var7 = new_var4;
      new_var = new_var5;
      new_var8 = new_var28;
      new_var27[0] = new_var9;
      new_var27[1] = new_var27[0];
      new_var30 = new_var7;
      do
      {
        new_var17 = new_var30;
        new_var12 = new_var17;
        new_var21 = 0;
        new_var = (long) new_var21;
        new_var19 = new_var12;
        new_var21 = 0;
        new_var20 = new_var21;
        new_var5 = new_var23;
        new_var16++;
        new_var16--;
      }
      while (0);
      new_var36 = new_var19;
      new_var9 = (double) inline_fn2(new_var36);
    }
  }
  do
  {
    ;
    if (1)
    {
      do
      {
      }
      while (0);
      do
      {
      }
      while (new_var & 0xFFFF);
    }
    {
    }
  }
  while (new_var27[1]);
}

