inline int inline_fn(int arg0)
{
  return arg0;
}

inline double inline_fn2(int arg0)
{
  return (double) arg0;
}

inline int inline_fn23(int arg0)
{
  return arg0;
}

void func_001033F8(s32 arg0, unsigned long long arg1)
{
  int new_var;
  int new_var10;
  int new_var5;
  int new_var3;
  volatile unsigned long long new_var8;
  int new_var9;
  int new_var2;
  int new_var6;
  int new_var7;
  int new_var11;
  int new_var4;
  new_var2 = new_var;
  new_var4 = new_var2;
  new_var5 = (long) new_var4;
  new_var2 = 1;
  new_var = new_var2;
  if (new_var11 = new_var5)
  {
  }
  else
    if (new_var2)
  {
    do
    {
    }
    while (0);
    new_var11 = 0;
    do
    {
      new_var = inline_fn2(new_var2);
    }
    while (new_var11);
  }
  else
    if (new_var9)
  {
    new_var = inline_fn2(new_var2);
  }
  else
  {
    new_var10 = (double) new_var2;
    new_var = new_var10;
  }
  new_var7 = new_var;
  new_var2 = new_var7;
  new_var6 = new_var2;
  new_var4 = inline_fn23(new_var6);
  new_var7 = new_var4;
  new_var3 = new_var7;
  new_var8 = new_var3;
  new_var9 = new_var8;
  new_var9 = (new_var8 && inline_fn(new_var9)) && (new_var10 = new_var7);
  new_var6 = new_var9;
  if (new_var4)
  {
  }
  if (new_var6)
  {
  }
}

