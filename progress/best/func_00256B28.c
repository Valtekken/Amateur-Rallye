inline int inline_fn(int arg0)
{
  return arg0;
}

inline int inline_fn2(int *arg0)
{
  return arg0[0];
}

inline int inline_fn23(volatile int arg0, int arg1)
{
  return arg0 || arg1;
}

inline int inline_fn234(int arg0)
{
  return arg0;
}

s32 func_00256B28(void *a, void *b, s32 c, void *d, void *e, void *f, volatile int g)
{
  int new_var2;
  int new_var9;
  int new_var;
  int new_var3;
  int new_var4[2];
  int *new_var7;
  volatile unsigned int new_var6;
  int new_var13[2];
  int new_var12;
  unsigned int new_var10;
  int *new_var14;
  int new_var5;
  int *new_var8;
  int new_var15;
  int *new_var11;
  new_var12 = new_var3;
  new_var11 = &new_var3;
  new_var14 = new_var4;
  {
    if (g)
    {
      g = new_var12;
      new_var4[0] = new_var4[1];
    }
    else
      if (g || new_var3)
    {
      g = new_var12;
      new_var4[0] = new_var4[1];
    }
    else
    {
      g = new_var12;
      new_var4[0] = new_var4[1];
    }
    if (new_var4[0] || g)
    {
      new_var = new_var13[0];
      new_var13[0] = 1;
      new_var3 = 0;
      new_var4[1] = new_var3;
      new_var13[0]++;
      new_var3 = new_var14[1];
      new_var8 = new_var11;
      new_var13[0]--;
      new_var3 = new_var13[0];
      new_var6 = new_var3;
      new_var13[0] = *new_var8;
      new_var5 = new_var6;
      new_var4[1] = new_var5;
      new_var2 = 1;
      new_var3 = new_var4[1];
      new_var9 = new_var2;
      new_var13[new_var9] = new_var3;
      new_var7 = &new_var13[1];
      return inline_fn(*new_var7);
    }
    else
    {
      if (new_var4[0] || new_var3)
      {
        if (g)
        {
          new_var13[0] = 1;
          ;
          new_var4[1] = 0;
          new_var = new_var3;
          new_var13[0]++;
          new_var10 = new_var4[1];
          new_var13[0]--;
          new_var13[0] = new_var10;
          new_var5 = new_var3;
          ;
          return inline_fn(new_var5);
        }
        else
          if (inline_fn23(g, new_var3))
        {
          new_var13[0] = 1;
          ;
          new_var4[1] = 0;
          new_var = new_var3;
          new_var13[0]++;
          new_var10 = new_var4[1];
          new_var13[0]--;
          new_var13[0] = new_var10;
          new_var5 = inline_fn234(new_var3);
          ;
          return inline_fn(new_var5);
        }
        else
          if (new_var3)
        {
          new_var13[0] = (new_var = 1);
          new_var3 = 0;
          new_var4[1] = new_var3;
          new_var13[0]++;
          new_var10 = new_var4[1];
          new_var13[0]--;
          new_var13[0] = new_var10;
          new_var5 = new_var3;
          ;
          return inline_fn(new_var5);
        }
        else
        {
          new_var13[0] = (new_var = 1);
          new_var3 = 0;
          new_var4[1] = new_var3;
          new_var13[0]++;
          new_var10 = new_var4[1];
          new_var13[0]--;
          new_var13[0] = new_var10;
          new_var5 = new_var3;
          ;
          return inline_fn(new_var5);
        }
      }
      else
      {
        new_var13[0] = 1;
        new_var4[1] = (new_var3 = 0);
        new_var = new_var3;
        {
          new_var13[0]++;
          new_var13[0]--;
          new_var13[0] = new_var4[1];
          new_var5 = new_var;
          new_var = (new_var15 = inline_fn2(new_var13));
        }
        if (new_var3)
        {
          ;
          return inline_fn(new_var5);
        }
        else
        {
          ;
          return inline_fn(new_var5);
        }
      }
      dummy_label_870316:
      ;

      ;
      ;
      ;
      ;
      ;
      ;
      ;
      ;
      ;
      ;
      ;
      ;
      ;
      ;
    }
  }
  {
  }
}

