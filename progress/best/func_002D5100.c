inline int *inline_fn(int **arg0, volatile unsigned short arg1)
{
  return arg0[arg1];
}

inline int *inline_fn2(int **arg0, volatile int arg1)
{
  return inline_fn(arg0, arg1);
}

void func_002D5100(void)
{
  long long new_var12;
  int *new_var4[2];
  long long new_var19;
  int new_var;
  volatile int new_var11;
  volatile int new_var18;
  int new_var9;
  volatile int new_var21;
  int **new_var2;
  int new_var6;
  unsigned long new_var22;
  volatile int new_var3;
  volatile int new_var8;
  volatile int new_var5;
  volatile unsigned int new_var13;
  int *new_var17;
  volatile unsigned int new_var10;
  volatile int new_var15;
  volatile unsigned int new_var16;
  volatile int new_var20;
  volatile int new_var14;
  volatile unsigned int new_var7;
  if (new_var7)
  {
    new_var6 = 0;
    new_var21 = new_var6;
    new_var10 = (float) new_var6;
    new_var21 = (new_var3 = new_var10);
    new_var14 = new_var21;
    new_var11 = new_var14;
    new_var10 = (new_var5 = (new_var = new_var11));
    new_var16 = (new_var7 = new_var9);
    new_var13 = new_var16;
    new_var5 = new_var13;
    new_var7 = new_var10;
    new_var6 = new_var3;
    new_var15 = new_var6;
    new_var = *new_var4[new_var7];
    new_var4[new_var15] = &new_var;
    new_var7 = (new_var3 = new_var7);
    new_var3 = new_var7;
    new_var21 = new_var3;
    new_var16 = new_var21;
    new_var12 = 1;
    new_var3 = new_var16;
    new_var15 = new_var21;
    new_var19 = new_var12;
    new_var2 = new_var4;
    new_var20 = new_var15;
    new_var9 = new_var19;
    new_var18 = new_var20;
    new_var3 = new_var18;
    new_var3 = new_var3;
    new_var18 = new_var3;
    new_var8 = new_var18;
    new_var17 = inline_fn2(new_var2, new_var8);
    new_var7 = new_var3;
    new_var4[new_var7] = new_var17;
  }
  else
  {
    new_var6 = 0;
    new_var21 = new_var6;
    new_var10 = (float) new_var6;
    new_var21 = (new_var3 = new_var10);
    new_var14 = new_var21;
    new_var11 = new_var14;
    new_var10 = (new_var5 = (new_var = new_var11));
    new_var16 = (new_var7 = new_var9);
    new_var13 = new_var16;
    new_var5 = new_var13;
    new_var7 = new_var10;
    new_var6 = new_var3;
    new_var15 = new_var6;
    new_var = *new_var4[new_var7];
    new_var4[new_var15] = &new_var;
    new_var7 = (new_var3 = new_var7);
    new_var3 = new_var7;
    new_var21 = new_var3;
    new_var16 = new_var21;
    new_var12 = 1;
    new_var3 = new_var16;
    new_var15 = (new_var19 = (new_var22 = new_var21));
    new_var19 = new_var12;
    new_var2 = new_var4;
    new_var20 = new_var15;
    new_var9 = new_var19;
    new_var18 = new_var20;
    new_var3 = new_var18;
    new_var3 = new_var3;
    new_var18 = new_var3;
    new_var8 = new_var18;
    new_var17 = inline_fn(new_var2, new_var8);
    new_var7 = new_var3;
    new_var4[new_var7] = new_var17;
  }
  do
  {
  }
  while (new_var);
}

