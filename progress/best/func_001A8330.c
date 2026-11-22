inline int inline_fn(int *arg0)
{
  return arg0[1];
}

extern s32 func_001A8330(void *arg0)
{
  int new_var[2];
  float new_var5;
  int new_var2;
  int *new_var3;
  int new_var4;
  new_var3 = &new_var[0];
  new_var[1] = (new_var5 = (float) 0);
  new_var2 = new_var3[1];
  new_var[0] = new_var2;
  new_var[0] = *new_var3;
  new_var[1] = new_var[0];
  return 0;
  do
  {
    if (1)
    {
      new_var4 = (new_var[0] = 1);
      if (new_var2)
      {
        new_var[1] = new_var4;
      }
      else
      {
        new_var[1] = (new_var[0] = 1);
      }
    }
    do
    {
      do
      {
 do { } while (0);
      }
      while (0);
      if (new_var3[1])
      {
      }
    }
    while (0);
    new_var3 = new_var;
  }
  while (inline_fn(new_var));
}
