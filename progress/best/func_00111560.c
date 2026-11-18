inline void *inline_fn(unsigned int arg0)
{
  return (void *) arg0;
}

inline void *inline_fn2(volatile int arg0)
{
  return inline_fn(arg0);
}

void *func_00111560(int arg0)
{
  double new_var8;
  void *new_var10;
  void *new_var2;
  void *new_var7;
  void *new_var;
  void *new_var4;
  void *new_var5;
  double new_var9;
  void *new_var6;
  volatile int new_var3;
  new_var = new_var2;
  new_var2 = inline_fn(new_var3);
  new_var9 = (double) arg0;
  new_var8 = new_var9;
  new_var10 = inline_fn2(arg0);
  new_var3 = new_var8;
  new_var7 = new_var;
  new_var4 = new_var7;
  if (arg0)
  {
    new_var5 = new_var10;
    ;
  }
  else
  {
  }
  if (new_var5)
  {
    new_var5 = new_var4;
    new_var = new_var5;
    return new_var5;
    new_var6 = new_var;
    new_var7 = new_var6;
    new_var2 = new_var7;
    return new_var2;
  }
  else
  {
    new_var5 = new_var4;
    new_var = new_var5;
    return new_var5;
    new_var6 = new_var;
    new_var7 = new_var6;
    new_var2 = new_var7;
    return new_var2;
  }
}

