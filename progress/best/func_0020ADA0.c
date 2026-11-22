inline volatile int inline_fn(volatile int arg0)
{
  return arg0;
}

inline volatile int inline_fn2(volatile int arg0)
{
  return inline_fn(arg0);
}

inline volatile int inline_fn23(volatile int arg0)
{
  return arg0;
}

unsigned int func_0020ADA0(void *arg0)
{
  void *new_var;
  int new_var5;
  void *new_var17[2];
  volatile unsigned int new_var12;
  volatile int new_var2;
  int new_var13;
  volatile unsigned int new_var7;
  void *new_var10;
  volatile int new_var4;
  void *new_var16;
  void *new_var18;
  unsigned char new_var15;
  void *new_var3;
  void *new_var6;
  void *new_var19;
  volatile int new_var11;
  volatile int new_var14;
  volatile int new_var9;
  volatile int new_var8;
  new_var4 = 0;
  new_var19 = new_var17[1];
  new_var18 = new_var19;
  new_var3 = arg0;
  new_var = new_var3;
  new_var7 = 0;
  new_var17[1] = new_var;
  new_var17[new_var7] = (new_var10 = new_var18);
  ;
  new_var4 = inline_fn23(inline_fn2(new_var4));
  new_var2 = new_var4;
  new_var16 = new_var17[new_var7];
  new_var9 = new_var2;
  new_var6 = new_var16;
  new_var8 = new_var9;
  (void) new_var6;
  new_var5 = new_var8;
  new_var13 = new_var5;
  new_var7 = new_var13;
  new_var4 = new_var7;
  new_var15 = (new_var12 = new_var4);
  new_var8 = new_var15;
  new_var4 = new_var8;
  new_var11 = new_var4;
  new_var14 = new_var11;
  new_var8 = new_var14 & 0xFFFFFFFFFFFFFFFFu;
  new_var2 = new_var8;
  {
  }
}

