typedef struct 
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
} Obj;
typedef u32 u32;
extern u32 D_0040E618[];
extern void D_002AD390(void *);
extern void func_002B2028(u32, u32, s32);
inline Obj *inline_fn(void *arg0)
{
  return (Obj *) arg0;
}

void func_001EF728(void *arg0, volatile unsigned int arg1)
{
  volatile unsigned int new_var4;
  volatile unsigned int new_var6;
  Obj *obj = inline_fn(arg0);
  Obj *new_var7;
  int new_var8;
  Obj *new_var5[2];
  int new_var;
  char new_var2;
  Obj *(*new_var10)[2];
  unsigned short new_var11;
  Obj *new_var9;
  if (new_var4)
  {
    ;
  }
  else
  {
    ;
  }
  new_var10 = &new_var5;
  if (arg1 || new_var5)
  {
    new_var11 = new_var8;
    new_var9 = (new_var7 = (*new_var10)[new_var11]);
    new_var4 = new_var4;
    if (1)
    {
      ;
    }
    if (new_var4)
    {
      new_var5[0] = obj;
      new_var = 1;
      new_var4 = arg1;
      obj = new_var5[new_var11];
      new_var5[new_var] = new_var9;
      new_var2 = new_var;
      (void) (*new_var10)[new_var2];
    }
    else
    {
      new_var5[0] = obj;
      new_var = 1;
      new_var4 = arg1;
      obj = new_var5[new_var11];
      new_var5[new_var] = (new_var7 = new_var5[new_var11]);
      new_var2 = new_var;
      (void) new_var5[new_var2];
    }
  }
  else
  {
    new_var4 = new_var4;
    new_var5[0] = obj;
    new_var2 = arg1;
    new_var = 1;
    new_var4 = new_var2;
    obj = (*new_var10)[new_var8];
    new_var5[new_var] = new_var5[0];
    new_var2 = new_var;
    (void) new_var5[new_var2];
  }
}

