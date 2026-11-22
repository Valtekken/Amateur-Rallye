inline int inline_fn(int arg0)
{
  return arg0;
}

s32 func_00187F00(s32 arg1, void *arg2)
{
  int new_var2;
  void *new_var9;
  unsigned int new_var11;
  double new_var7;
  int new_var12;
  void *new_var6;
  void *new_var10[2];
  volatile int new_var8;
  volatile int new_var4;
  void **new_var5;
  s32 new_var3;
  void *new_var;
  if (!new_var2)
  {
    new_var10[0] = arg2;
    new_var8 = new_var4;
    new_var9 = (new_var = new_var5[0]);
    (void) ((float) new_var8);
    new_var8 = 0;
    new_var10[1] = (new_var10[new_var8] = new_var9);
    new_var6 = new_var;
  }
  else
  {
    new_var5 = new_var10;
    new_var10[0] = arg2;
    new_var11 = 0;
    new_var8 = new_var4;
    new_var12 = 1;
    new_var9 = (new_var = new_var5[new_var11]);
    (void) ((float) new_var8);
    new_var8 = 0;
    new_var10[new_var12] = (new_var10[(unsigned long long) new_var8] = new_var9);
    new_var6 = new_var;
  }
  do
  {
    new_var3 = arg1;
    if (new_var10[0])
    {
      if (new_var6)
      {
        (void) new_var6;
        new_var4 = new_var3;
        new_var2 = 0;
        return (double) inline_fn(new_var2);
      }
      else
      {
        new_var4 = new_var3;
        new_var2 = 0;
        new_var4 = (double) inline_fn((double) new_var2);
        return new_var4;
      }
    }
    else
    {
      (void) new_var6;
      if ((double) 1)
      {
        new_var2 = new_var8;
      }
      new_var7 = (double) inline_fn((double) new_var2);
      return new_var7;
    }
  }
  while ((long long) 0);
  (void) new_var6;
}

