inline int inline_fn(int arg0)
{
  return arg0;
}

inline int inline_fn2(int arg0)
{
  return arg0;
}

inline int inline_fn23(int arg0)
{
  return arg0;
}

s8 *func_001BC5A8(void)
{
  int new_var8;
  volatile int new_var10;
  int new_var2;
  int new_var5;
  int new_var7;
  int new_var4;
  int new_var6;
  int new_var3;
  int new_var;
  int new_var9;
  if (new_var7)
  {
    new_var4 = inline_fn2(inline_fn(new_var8));
    new_var7 = new_var4;
    new_var4 = 0;
    new_var2 = new_var3;
    new_var6 = new_var2;
    new_var = new_var6;
  }
  else
  {
    new_var = new_var2;
    new_var7 = new_var8;
    new_var4 = 0;
    new_var3 = new_var3;
    new_var2 = (double) new_var3;
  }
  new_var10 = 0;
  do
  {
  }
  while (new_var10);
  do
  {
    if (new_var4 || new_var7)
    {
      new_var3 = new_var6;
      new_var4 = new_var4;
      new_var5 = inline_fn23(new_var4);
      new_var6 = new_var5;
      new_var2 = new_var;
      new_var9 = new_var2;
      new_var8 = new_var9;
      return new_var8;
      ;
      new_var7 = new_var6;
    }
    else
    {
      new_var4 = new_var4;
      new_var5 = new_var4;
      new_var6 = new_var5;
      return new_var;
      new_var = new_var6;
      new_var3 = new_var;
      ;
      new_var8 = new_var;
      new_var2 = new_var8;
      new_var7 = new_var2;
    }
    do
    {
    }
    while (new_var7);
  }
  while (new_var4);
}

