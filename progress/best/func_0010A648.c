inline volatile unsigned int inline_fn(volatile unsigned int *arg0)
{
  return arg0[0];
}

volatile unsigned char func_0010A648(s32 arg0)
{
  volatile unsigned int new_var18;
  volatile unsigned int new_var23[2];
  s32 *new_var5;
  volatile char new_var7;
  volatile unsigned int new_var21;
  unsigned short new_var6;
  volatile unsigned int new_var22;
  s32 *new_var15;
  s32 *new_var9;
  volatile unsigned int new_var12;
  volatile unsigned int new_var20;
  volatile unsigned int new_var17;
  volatile unsigned int new_var;
  volatile unsigned int new_var11;
  volatile unsigned int new_var2;
  volatile unsigned int new_var8;
  unsigned short new_var14;
  volatile unsigned int new_var4;
  volatile unsigned int new_var3;
  int new_var13;
  volatile unsigned int new_var10;
  new_var18 = (new_var2 = new_var8);
  new_var14 = new_var23[0];
  new_var4 = new_var14;
  new_var10 = new_var18;
  new_var2 = 1;
  ;
  new_var13 = new_var2;
  do
  {
  }
  while (new_var23[0] = 0);
  new_var4 = new_var23[0];
  ;
  do
  {
  }
  while (new_var4);
  new_var2 = new_var23[0];
  new_var9 = (new_var15 = &arg0);
  new_var8 = arg0;
  new_var3 = (new_var23[1] = new_var2);
  if (new_var4 || arg0)
  {
    ;
    (void) new_var8;
  }
  else
    if (new_var6)
  {
    new_var10 = new_var6;
    new_var5 = new_var9;
    new_var5 = new_var5;
    new_var11 = new_var10;
    new_var23[0] = *new_var5;
    new_var4 = new_var23[0];
    new_var8 = new_var3;
    arg0 = new_var10;
    if (new_var13)
    {
      new_var2 = (long) new_var11;
      if (1)
      {
        new_var3 = new_var2;
      }
    }
    new_var20 = new_var2;
    (void) new_var20;
    new_var3 = new_var4;
  }
  else
  {
    new_var21 = new_var3;
    new_var22 = new_var21;
    new_var = new_var22;
    new_var23[0] = arg0;
    new_var2 = new_var;
    new_var23[0] = (new_var23[0] = new_var4);
    new_var12 = inline_fn(new_var23);
    new_var17 = new_var2;
    new_var21 = new_var12;
    new_var6 = new_var21;
    do
    {
      (void) new_var17;
    }
    while (0);
  }
}

