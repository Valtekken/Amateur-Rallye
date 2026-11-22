inline unsigned char inline_fn()
{
  return (unsigned char) 0;
}

inline unsigned char inline_fn2()
{
  return inline_fn();
}

volatile int func_001AB978(void)
{
  unsigned int new_var10;
  unsigned int new_var8;
  unsigned int new_var6;
  int new_var12;
  double new_var11;
  int *new_var9;
  int *new_var15[2];
  unsigned char new_var;
  int new_var3;
  unsigned int new_var2;
  volatile int new_var7;
  unsigned int new_var5;
  int new_var4[2];
  int new_var14;
  new_var14 = new_var4[0];
  new_var15[1] = (new_var9 = new_var4);
  new_var2 = new_var15[1][1];
  new_var2 = 0xFFFFFFFFFFFFFFFF;
  new_var2 = new_var2;
  new_var2 = new_var2 & new_var2;
  new_var12 = new_var14;
  new_var15[0] = new_var4;
  if (new_var12)
  {
    do
    {
      new_var4[0] = (new_var3 = 0xFFFFFFFFFFFFFFFF);
      new_var10 = 0xFFFFu;
      new_var3 = new_var10;
      new_var3 = (new_var2 & new_var3) & new_var3;
      new_var3 = inline_fn();
      new_var2 = (new_var5 = new_var3);
    }
    while (0);
    new_var7 = 1;
    new_var6 = new_var5;
    new_var8 = new_var6;
    new_var10 = new_var8;
    new_var11 = (double) (new_var10 ^ 0);
    new_var4[new_var7] = new_var11;
  }
  else
    if (new_var9)
  {
    new_var4[0] = inline_fn2();
    do
    {
    }
    while (0);
  }
  else
    if (new_var2)
  {
    do
    {
      new_var4[0] = inline_fn();
    }
    while (0);
  }
  else
  {
    do
    {
      new_var4[0] = inline_fn();
    }
    while (0);
  }
  do
  {
    do
    {
    }
    while (0);
    goto dummy_label_428762;
    dummy_label_428762:
    ;

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    if (new_var7 || new_var5)
    {
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
    else
    {
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
  while (0);
  ;
  ;
  do
  {
    ;
    ;
    ;
    ;
    do
    {
    }
    while (new_var15[0][0]);
  }
  while (0);
}

