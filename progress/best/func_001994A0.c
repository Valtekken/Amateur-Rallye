inline void *inline_fn(void *arg0)
{
  return arg0;
}

inline int inline_fn2(void *arg0, void *arg1)
{
  return arg0 || arg1;
}

inline void *inline_fn23(void **arg0)
{
  return *arg0;
}

void func_001994A0(void *a, void *b)
{
  void **new_var14;
  void *new_var11;
  void *new_var5;
  void *new_var21;
  void *new_var8;
  void *new_var12;
  void *new_var7;
  void *new_var;
  void *new_var22;
  void *new_var6;
  volatile unsigned int new_var10;
  void *new_var16;
  void *new_var2;
  int new_var17;
  void **new_var13;
  void **new_var18;
  void *new_var4;
  int new_var9;
  int new_var19;
  void **new_var20;
  void *new_var15;
  void *new_var3;
  if (0)
  {
  }
  do
  {
    if (inline_fn2(new_var3, new_var))
    {
      new_var6 = new_var16;
      do
      {
        new_var17 = 0;
        new_var9 = new_var17;
        new_var14 = (new_var13 = &b);
        new_var17 = new_var9;
        new_var8 = *(new_var18 = &new_var);
        new_var3 = (new_var12 = inline_fn23(new_var14));
        new_var19 = new_var17;
      }
      while (0);
      new_var2 = new_var8;
      new_var10 = new_var19;
      do
      {
        new_var22 = new_var2;
        new_var5 = inline_fn(new_var22);
        (void) new_var5;
      }
      while (new_var10);
      ;
      ;
      new_var3;
    }
    else
    {
      new_var5 = new_var6;
      do
      {
        new_var7 = new_var12;
        do
        {
        }
        while (0);
        do
        {
          if (1)
          {
          }
          do
          {
            new_var3 = new_var7;
          }
          while (0);
        }
        while (new_var10);
      }
      while (new_var19);
      ;
      (void) inline_fn(a);
      new_var11 = new_var3;
      new_var21 = new_var5;
      new_var = new_var21;
      new_var2 = *(new_var20 = &new_var11);
      new_var11 = new_var2;
      new_var15 = *new_var20;
      ;
      (void) new_var15;
    }
  }
  while (0);
}

