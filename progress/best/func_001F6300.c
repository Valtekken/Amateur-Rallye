inline void *inline_fn(void *arg0)
{
  return arg0;
}

inline void *inline_fn2(void **arg0)
{
  return *arg0;
}

inline void *inline_fn23(void **arg0)
{
  return arg0[0];
}

volatile unsigned int func_001F6300(void *a)
{
  int new_var22[2];
  void *new_var15;
  void **new_var9;
  void *new_var;
  void *new_var10;
  void *new_var18;
  void **new_var14;
  void *new_var12;
  void *new_var6;
  void *new_var3;
  void *new_var13;
  void *new_var2;
  int new_var17;
  void *new_var11[2];
  void **new_var16;
  void *new_var5;
  void *new_var20;
  void *new_var8;
  void *new_var21;
  void *new_var4;
  void *new_var7;
  new_var17 = 0;
  new_var22[0] = new_var3 || new_var7;
  if (new_var22[0])
  {
    new_var10 = a;
    new_var7 = new_var10;
  }
  else
    if (new_var || new_var7)
  {
    new_var10 = a;
    new_var7 = new_var10;
  }
  else
  {
    new_var10 = a;
    new_var7 = new_var10;
  }
  dummy_label_153342:
  ;

  ;
  ;
  ;
  ;
  ;
  ;
  ;
  ;
  {
    ;
    new_var9 = &new_var4;
    new_var5 = new_var3;
    if (new_var5)
    {
      new_var3 = new_var7;
      if (!(new_var16 = new_var11)[new_var17])
      {
      }
      if (new_var2)
      {
        new_var11[1] = new_var3;
        new_var14 = new_var11;
        new_var13 = new_var14[1];
        new_var15 = new_var13;
        new_var6 = new_var15;
        new_var21 = inline_fn2(new_var9);
        new_var20 = new_var6;
        new_var12 = new_var21;
        new_var2 = new_var20;
        new_var8 = new_var2;
        new_var18 = new_var8;
        new_var4 = new_var18;
        new_var = new_var12;
        (void) inline_fn(new_var18);
        new_var2 = new_var;
      }
      else
      {
        new_var11[1] = new_var3;
        new_var14 = new_var11;
        new_var13 = new_var14[1];
        new_var6 = new_var13;
        new_var21 = inline_fn2(new_var9);
        new_var20 = new_var6;
        new_var12 = new_var21;
        new_var2 = new_var20;
        new_var8 = new_var2;
        new_var18 = new_var8;
        new_var4 = new_var18;
        new_var = new_var12;
        (void) inline_fn(new_var18);
        new_var2 = new_var;
      }
    }
    else
    {
      new_var3 = new_var7;
      new_var2 = new_var3;
      new_var11[new_var22[1] = new_var17] = new_var2;
      new_var4 = inline_fn23(new_var16);
      new_var = inline_fn2(new_var9);
      new_var2 = new_var;
      (void) new_var;
    }
  }
}

