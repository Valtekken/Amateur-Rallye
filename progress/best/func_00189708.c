inline int inline_fn(int *arg0, int arg1)
{
  return arg0[arg1];
}

void *func_00189708(void *a)
{
  int new_var6[2];
  int new_var7;
  int new_var;
  int new_var8[2];
  int new_var3[2];
  int *new_var4;
  int new_var5;
  {
  }
  if (!inline_fn(new_var3, 0))
  {
    do
    {
      if (new_var3)
      {
        a;
        new_var3[1] = (double) (new_var3[0] = new_var6[1]);
      }
      else
      {
        a;
        new_var3[1] = (double) (new_var3[0] = new_var6[1]);
      }
    }
    while (0);
    new_var4 = new_var3;
    return inline_fn(new_var4, (double) 0);
  }
  else
  {
    (void) a;
    new_var = (new_var6[1] = 0);
    new_var3[0] = (double) 0;
    ;
    new_var8[1] = (new_var6[0] = inline_fn(new_var3, 0));
    new_var7 = 0;
    new_var8[0] = inline_fn(new_var3, new_var);
    new_var3[1] = (new_var3[new_var7] = new_var8[0]);
    return new_var6[0];
  }
}

