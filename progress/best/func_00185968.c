inline int inline_fn(int arg0)
{
  return arg0 < 1;
}

inline int inline_fn2(int arg0)
{
  return inline_fn(arg0);
}

inline volatile unsigned int *inline_fn23(volatile unsigned int *arg0)
{
  return arg0;
}

inline int *inline_fn234(int *arg0)
{
  return arg0;
}

inline volatile unsigned int *inline_fn2345(volatile unsigned int *arg0)
{
  return arg0;
}

inline volatile unsigned int inline_fn23456(volatile unsigned int arg0)
{
  return arg0;
}

inline int inline_fn234567(int *arg0)
{
  return !arg0;
}

volatile unsigned short func_00185968(void)
{
  volatile unsigned int new_var14;
  int new_var32;
  int *new_var6;
  int *new_var8;
  volatile unsigned int new_var24;
  int *new_var26;
  int *new_var41;
  int new_var28;
  int new_var42[2];
  int *new_var36;
  int new_var4;
  volatile unsigned int new_var7;
  int *new_var27;
  int *new_var5;
  unsigned int new_var12;
  int new_var31;
  int new_var16;
  volatile unsigned int *new_var11;
  int new_var22;
  int new_var33;
  int *new_var20;
  int new_var39;
  int *new_var2;
  volatile unsigned int new_var23;
  int *new_var15;
  int i;
  volatile int pad;
  int *new_var38;
  int *new_var13;
  volatile unsigned int new_var43;
  int **new_var30;
  volatile unsigned int *new_var25;
  volatile unsigned int new_var40;
  int *new_var29;
  int *new_var10;
  int new_var21;
  int **new_var44;
  int *new_var;
  int new_var19;
  int new_var17;
  int new_var18;
  int *new_var3;
  int *new_var34;
  int new_var9;
  new_var25 = &new_var42[0 * i];
  new_var14 = *new_var25;
  new_var42[1] = pad;
  new_var30 = &new_var20;
  new_var36 = new_var;
  new_var30 = new_var30;
  new_var4 = inline_fn234567(new_var36);
  new_var9 = (new_var12 = (new_var14 = new_var18));
  new_var13 = new_var10;
  new_var7 = 0;
  new_var6 = new_var2;
  new_var15 = inline_fn234(new_var6);
  new_var16 = new_var4;
  if (new_var16)
  {
    new_var40 = (new_var18 = (new_var43 = new_var14));
    pad = new_var14;
    i = pad;
    i = new_var9;
  }
  else
  {
  }
  new_var28 = *new_var13;
  new_var6 = (new_var = new_var15);
  new_var22 = (new_var9 = (double) inline_fn2(new_var28));
  new_var5 = new_var6;
  new_var8 = new_var5;
  new_var42[1] = (new_var4 = (new_var19 = new_var22));
  new_var18 = 0;
  new_var3 = new_var8;
  new_var14 = (new_var33 = (new_var18 = 0));
  new_var = &(*new_var3);
  new_var44 = &new_var;
  new_var21 = 1;
  new_var30 = &new_var2;
  new_var3 = &i;
  new_var11 = inline_fn2345(&new_var42[new_var31 = (new_var32 = (new_var19 = (new_var18 = (new_var42[0] = (new_var28 = (new_var39 = 1))))))]);
  new_var44 = new_var44;
  new_var = inline_fn23(new_var11);
  do
  {
    new_var38 = (new_var34 = new_var3);
    new_var7 = 0;
    do
    {
      do
      {
        new_var20 = *new_var44;
        if (new_var6)
        {
          new_var2 = new_var3;
          new_var2 = new_var20;
          new_var10 = &(*new_var2);
          pad = *new_var20;
        }
        else
        {
          if (1)
          {
            if (1)
            {
              {
              }
            }
            do
            {
            }
            while (new_var14);
          }
          new_var29 = new_var20;
          new_var2 = *new_var30;
          new_var10 = &(*new_var2);
          pad = (double) (*new_var29);
          new_var2 = (new_var20 = new_var38);
        }
        new_var41 = &new_var22;
        new_var27 = (new_var26 = new_var);
        new_var17 = *new_var41;
        new_var23 = inline_fn23456(new_var42[1] = new_var7);
        for (i = *new_var41; new_var17; i++)
        {
          new_var26 = new_var11;
          new_var19 = new_var23;
          new_var28 = *new_var27;
          {
            new_var22 = new_var28;
          }
          if (new_var26)
          {
            new_var24 = new_var18;
          }
          else
            if (*new_var30)
          {
            ;
          }
          else
            if (new_var20)
          {
            ;
          }
          else
          {
            ;
          }
          {
            if (1)
            {
              if (1)
              {
              }
            }
          }
        }

      }
      while (new_var14);
      if (new_var21)
      {
        do
        {
        }
        while (new_var33);
      }
    }
    while (0);
  }
  while (i);
}

