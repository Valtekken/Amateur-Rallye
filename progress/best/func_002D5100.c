inline int *inline_fn(int **arg0, short arg1)
{
  return arg0[arg1];
}

inline int *inline_fn2(int **arg0, volatile int arg1)
{
  return inline_fn(arg0, arg1);
}

void func_002D5100(void)
{
  long long new_var12;
  int *new_var4[2];
  int new_var;
  volatile int new_var23;
  volatile int new_var11;
  int new_var9;
  volatile int new_var21;
  int **new_var2;
  int new_var6;
  unsigned long new_var22;
  volatile int new_var3;
  int *new_var19;
  volatile int new_var8;
  volatile int new_var5;
  volatile unsigned int new_var10;
  unsigned int new_var25;
  volatile int new_var15;
  volatile unsigned int new_var16;
  volatile int new_var20;
  volatile unsigned int new_var13;
  volatile int new_var24;
  volatile int new_var14;
  volatile unsigned int new_var7;
  volatile unsigned int new_var17;
  volatile int new_var18;
  new_var25 = (new_var7 = new_var9);
  new_var23 = (new_var3 = new_var10);
  if (new_var7)
  {
    if (new_var16 != 0)
    {
      if (new_var21)
      {
        new_var6 = 0;
        new_var21 = new_var6;
        new_var10 = (float) new_var6;
        new_var21 = (new_var3 = new_var10);
        new_var14 = new_var21;
        new_var11 = new_var14;
        new_var10 = (new_var5 = (new_var = new_var11));
        new_var16 = (new_var7 = new_var9);
        new_var13 = new_var16;
        new_var5 = new_var13;
        new_var7 = new_var10;
        new_var6 = new_var3;
        new_var15 = new_var6;
        new_var19 = new_var4[new_var7];
        new_var = *new_var19;
        new_var4[new_var15] = &new_var;
        new_var7 = (new_var3 = new_var7);
        new_var3 = new_var7;
        do
        {
          new_var21 = new_var3;
          new_var16 = new_var21;
          new_var12 = 1;
          new_var3 = new_var16;
          new_var15 = new_var21;
          new_var16 = new_var12;
          new_var6 = new_var16;
          new_var2 = new_var4;
        }
        while (0);
        new_var20 = new_var15;
        new_var9 = new_var6;
        new_var11 = new_var20;
        new_var3 = new_var11;
        new_var3 = new_var3;
        new_var11 = new_var3;
        new_var8 = new_var11;
        new_var19 = inline_fn2(new_var2, new_var8);
        new_var7 = new_var3;
        new_var4[new_var7] = new_var19;
      }
      else
      {
        new_var6 = 0;
        new_var21 = new_var6;
        new_var10 = (float) new_var6;
        new_var21 = (new_var3 = new_var10);
        new_var14 = new_var21;
        new_var11 = new_var14;
        new_var11 = 1;
        new_var10 = (new_var5 = (new_var = new_var11));
        new_var16 = new_var25;
        new_var13 = new_var16;
        new_var5 = new_var13;
        new_var7 = new_var10;
        new_var6 = new_var3;
        new_var15 = new_var6;
        new_var = *new_var4[new_var7];
        new_var4[new_var15] = &new_var;
        new_var7 = (new_var3 = new_var7);
        new_var3 = new_var7;
        new_var21 = new_var3;
        new_var16 = new_var21;
        new_var12 = new_var11;
        new_var3 = new_var16;
        new_var15 = new_var21;
        new_var16 = new_var12;
        new_var6 = new_var16;
        new_var2 = new_var4;
        new_var20 = new_var15;
        new_var9 = new_var6;
        new_var11 = new_var20;
        new_var3 = new_var11;
        new_var3 = new_var3;
        new_var11 = new_var3;
        new_var8 = new_var11;
        new_var19 = inline_fn2(new_var2, new_var8);
        new_var7 = new_var3;
        new_var4[new_var7] = new_var19;
      }
    }
    else
    {
      new_var9 = (new_var5 = (new_var = new_var11));
      new_var6 = 0;
      new_var6 = new_var6;
      new_var21 = new_var6;
      new_var10 = (float) new_var6;
      new_var6 = (new_var3 = new_var10);
      new_var21 = new_var6;
      new_var14 = new_var21;
      {
      }
      if (new_var7 || new_var21)
      {
        new_var11 = new_var14;
        new_var10 = new_var9;
        new_var16 = (new_var7 = new_var9);
        new_var13 = new_var16;
        new_var5 = new_var13;
        new_var7 = new_var10;
        new_var6 = new_var3;
        new_var15 = new_var6;
        new_var = *new_var4[new_var7];
        new_var4[new_var15] = &new_var;
        new_var7 = (new_var3 = new_var7);
        new_var3 = new_var7;
        new_var21 = new_var3;
        new_var16 = new_var21;
        new_var12 = 1;
        new_var3 = new_var16;
        new_var15 = new_var21;
        new_var16 = new_var12;
        new_var6 = new_var16;
        new_var2 = new_var4;
        new_var20 = new_var15;
        new_var9 = new_var6;
        new_var11 = new_var20;
        new_var3 = new_var11;
        new_var3 = new_var3;
        new_var11 = new_var3;
        new_var8 = new_var11;
        ;
        new_var7 = new_var3;
        new_var4[new_var7] = inline_fn2(new_var2, new_var8);
      }
      else
      {
        if (new_var16)
        {
        }
        new_var11 = new_var14;
        new_var10 = new_var9;
        new_var16 = (new_var7 = new_var9);
        new_var13 = new_var16;
        new_var5 = new_var13;
        new_var7 = new_var10;
        new_var6 = new_var3;
        new_var15 = new_var6;
        new_var = *new_var4[new_var7];
        new_var4[new_var15] = &new_var;
        new_var7 = (new_var3 = new_var7);
        new_var3 = new_var7;
        new_var21 = new_var3;
        new_var16 = new_var21;
        new_var12 = 1;
        new_var3 = new_var16;
        new_var15 = new_var21;
        new_var16 = new_var12;
        new_var6 = new_var16;
        new_var2 = new_var4;
        new_var20 = new_var15;
        new_var9 = new_var6;
        new_var11 = new_var20;
        new_var3 = new_var11;
        new_var3 = new_var3;
        new_var11 = new_var3;
        new_var8 = new_var11;
        ;
        new_var7 = new_var3;
        new_var4[new_var7] = inline_fn2(new_var2, new_var8);
      }
    }
  }
  else
  {
    new_var6 = 0;
    new_var21 = new_var6;
    new_var10 = (float) new_var6;
    new_var21 = new_var23;
    new_var14 = new_var21;
    new_var10 = (new_var5 = (new_var = new_var11));
    new_var16 = (new_var7 = new_var9);
    new_var13 = new_var16;
    new_var5 = new_var13;
    new_var7 = new_var10;
    new_var6 = new_var3;
    new_var15 = new_var6;
    new_var = *new_var4[new_var7];
    new_var4[new_var15] = &new_var;
    new_var7 = (new_var3 = new_var7);
    new_var3 = new_var7;
    new_var21 = new_var3;
    new_var18 = new_var14;
    new_var16 = new_var21;
    new_var16 = new_var11;
    new_var17 = new_var16;
    new_var12 = new_var17;
    new_var3 = new_var17;
    new_var15 = (new_var6 = (new_var22 = new_var21));
    new_var6 = new_var12;
    new_var2 = new_var4;
    new_var11 = new_var18;
    new_var20 = new_var15;
    new_var9 = new_var6;
    new_var24 = new_var20;
    new_var11 = new_var24;
    new_var3 = new_var11;
    new_var3 = new_var3;
    new_var11 = new_var3;
    new_var8 = new_var11;
    new_var19 = inline_fn(new_var2, new_var8);
    new_var7 = new_var3;
    new_var4[new_var7] = new_var19;
  }
  do
  {
  }
  while (new_var);
}

