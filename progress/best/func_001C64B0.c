typedef struct 
{
  s32 unk0;
  void *unk4;
  s32 unk8;
} Obj;
extern void *D_0040E618[];
extern void func_00152D28(s32);
extern void func_002B1FC0(s32);
extern void func_002B2028(s32, s32, s32);
extern void func_003D2910(s32);
extern void func_003F93CC(void *, s32, s32);
inline void *inline_fn(void *arg0)
{
  return arg0;
}

void func_001C64B0(void *arg0, void *arg1, void **arg2)
{
  volatile unsigned int *new_var3[2];
  volatile unsigned int pad;
  volatile unsigned int new_var2;
  volatile unsigned int *new_var;
  if (arg0)
  {
    pad = *new_var3[1];
  }
  else
  {
    pad = *new_var3[1];
  }
  do
  {
    new_var2 = (pad = pad);
    new_var3[pad = 1] = &pad;
    ;
    if (new_var2)
    {
      new_var = new_var3[0];
      (void) new_var;
      (void) arg2;
    }
    pad = 1;
    (void) inline_fn(arg1);
  }
  while (0);
  new_var3[0] = arg0;
  pad = 1;
}

