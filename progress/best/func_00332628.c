inline int inline_fn(int *arg0)
{
  return *arg0;
}

volatile unsigned int func_00332628(void *arg0, void *arg1)
{
  char new_var2;
  volatile unsigned int new_var3;
  int *new_var5;
  int *new_var17[2];
  int new_var4;
  volatile unsigned int new_var9;
  volatile int new_var11;
  int **new_var7;
  int new_var10;
  volatile int new_var13;
  int *new_var6;
  volatile int new_var16;
  volatile int new_var15;
  volatile unsigned int new_var14;
  int *new_var18;
  volatile int new_var19;
  volatile int new_var8;
  int new_var12;
  int new_var;
  new_var11 = new_var8;
  new_var14 = new_var11;
  new_var9 = !new_var;
  new_var16 = (new_var15 = new_var13);
  new_var13 = 0;
  new_var13 = new_var15;
  if (new_var9)
  {
    if (new_var14)
    {
      new_var19 = new_var16;
      new_var3 = new_var19;
      do
      {
      }
      while (new_var3);
      ;
    }
    else
      if (new_var8)
    {
      ;
    }
    else
    {
      new_var = new_var13;
      ;
    }
  }
  else
  {
    new_var4 = new_var13;
    new_var18 = &new_var;
    new_var9 = (new_var3 = new_var4);
    new_var17[0] = new_var18;
    new_var7 = new_var17;
    new_var5 = new_var7[0];
    ;
    new_var = new_var9;
    do
    {
    }
    while (new_var10 = inline_fn(new_var6 = new_var18));
    new_var17[1] = &new_var4;
  }
  {
    new_var12 = inline_fn(new_var7[1]);
    new_var3 = new_var12;
    new_var = new_var3;
  }
  new_var8 = inline_fn(new_var5);
  new_var = (new_var2 = new_var8);
  new_var4 = new_var;
  do
  {
  }
  while (new_var4);
}

