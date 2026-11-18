extern void func_00194C40(void);
extern s32 func_00193FD8(s32);
extern s32 func_001189C0(void);
extern s32 func_00193B60(void);
extern s32 func_00192398(s32, s32);
extern void func_00107EF8(void *, void *, s32, s32);
extern void func_001D2CD8(void *, void *);
extern void D_002AD390(void *);
extern void func_0018FAC0(void *);
extern void func_00171308(void *);
extern void func_001E3E90(s32, void *, f32);
extern void func_002B2028(void *, void *);
extern s32 func_003FA9B8(void *);
extern char D_00444F18[];
extern char D_00444858[];
extern u32 D_0040E618[];
extern u32 D_0040E658[];
inline s32 inline_fn(s32 arg0)
{
  return arg0;
}

inline s32 inline_fn2(s32 *arg0)
{
  return *arg0;
}

void func_00104748(s32 arg0, s32 arg1)
{
  s32 new_var2;
  s32 *new_var5;
  s32 *new_var3;
  s32 new_var6;
  s32 *new_var;
  s32 new_var4;
  new_var5 = &new_var2;
  new_var = &arg0;
  new_var3 = (new_var = new_var);
  new_var4 = inline_fn2(new_var3);
  new_var2 = (double) new_var4;
  do
  {
    new_var2 = *new_var5;
    if (new_var)
    {
      do
      {
        new_var6 = *new_var5;
        do
        {
          (void) inline_fn(new_var6);
        }
        while (0);
      }
      while (0);
    }
    else
    {
      (void) inline_fn(new_var2);
    }
  }
  while (0);
  new_var6 = 0;
  do
  {
    if (new_var)
    {
      arg1;
      func_001E4280();
      return;
    }
    else
      if (new_var6 || new_var2)
    {
      arg1;
      return;
      func_001E4280();
    }
    else
    {
      arg1;
      func_001E4280();
      return;
    }
  }
  while (new_var6);
}

