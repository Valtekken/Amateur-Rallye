inline int inline_fn(int arg0, int *arg1)
{
  return arg0 || arg1;
}

inline int inline_fn2(int arg0)
{
  return arg0;
}

void func_00109440(int a, int b, int c)
{
  int new_var8[2];
  unsigned int new_var11;
  int *new_var2;
  int new_var18;
  int new_var14;
  int new_var15;
  int new_var6;
  int new_var10;
  int new_var4;
  int new_var;
  volatile unsigned int new_var17;
  unsigned int new_var13;
  int new_var16;
  int new_var5;
  unsigned int new_var3[2];
  int new_var7;
  new_var = inline_fn(new_var6, new_var8);
  if (new_var)
  {
    new_var3[0] = new_var8[1];
    new_var = 0;
    new_var3[1] = (double) new_var;
    new_var15 = new_var8[0];
    new_var17 = new_var15;
    ;
    new_var15 = new_var17;
    new_var6 = new_var3[1];
    new_var14 = new_var6;
    new_var = 0;
    new_var5 = new_var;
    new_var8[new_var5] = new_var14;
    {
      if (1)
      {
        new_var = new_var15;
        new_var = (new_var7 = (new_var16 = (new_var13 = new_var)));
        new_var8[1] = new_var;
      }
      do
      {
        new_var6 = new_var3[0];
      }
      while (0);
    }
    new_var = new_var6;
    new_var7 = new_var;
  }
  else
  {
    new_var = 0;
    ;
    new_var6 = new_var;
    new_var14 = new_var6;
    new_var = 0;
    new_var18 = inline_fn2(new_var);
    new_var3[1] = new_var18;
    new_var16 = new_var3[1];
    new_var8[new_var16] = new_var14;
    new_var5 = 0;
    new_var14 = new_var8[new_var5];
    new_var = new_var14;
    new_var3[1] = new_var;
    new_var10 = (new_var7 = new_var3[1]);
    new_var = new_var10;
    new_var13 = new_var;
    ;
    new_var = (new_var10 = (new_var2 = new_var8)[1]);
    new_var8[1] = new_var13;
    new_var7 = new_var10;
    new_var6 = new_var7;
    new_var = new_var6;
  }
  if (new_var7 = new_var || new_var14)
  {
    new_var4 = new_var7;
  }
  else
  {
    new_var4 = new_var7;
  }
  do
  {
    do
    {
    }
    while (0);
    do
    {
    }
    while (new_var15 = 0);
  }
  while (new_var4);
}

