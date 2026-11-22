extern void func_003F7320(void);
extern void func_003FA9B8(void *);
extern s32 func_00151930(void *);
extern void func_00151A28(void *, void *, void *, void *, void *, void *, void *, void *);
extern void func_00152720(void);
extern void func_001537E8(void *, void *, s32);
extern void func_00153F40(void *, void *, void *, void *, void *, void *, void *, void *);
extern void func_001D9628(void *, void *, s32);
extern void func_001D9A90(void *, void *);
extern void func_002B2028(void *);
extern void func_002C5E98(void *, void *, s32);
extern void func_002C6218(void *, s32);
extern void func_002C67F8(void *, s32);
extern void func_002FD7D0(s32, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void func_002FDDD0(void);
extern void func_0030B940(void *, void *, void *);
extern void func_0030B968(void *, void *, void *);
extern void func_00377EE0(void *, void *, void *, s32);
extern void func_003F93CC(void *, void *, void *, void *, void *, void *, void *, void *);
extern u32 D_0042D530[];
extern u32 D_0049B228[];
extern u32 D_00486E78[];
extern u32 D_0042D510[];
extern u32 D_004262D0[];
extern u32 D_0040E618[];
extern u32 D_0040E658[];
extern u32 D_00484658[];
extern u32 D_00484750[];
extern u32 D_00484770[];
extern u32 D_00484798[];
inline volatile int inline_fn(volatile int arg0)
{
  return arg0;
}

inline u32 inline_fn2(u32 *arg0, volatile int arg1)
{
  return arg0[arg1];
}

void func_002FDDF8(unsigned long long arg0)
{
  u32 new_var11;
  u32 *d530 = D_0042D530;
  volatile int new_var14;
  unsigned char new_var;
  volatile int new_var10;
  char *new_var8;
  volatile int new_var2;
  u32 *new_var9;
  volatile short new_var4;
  u32 *new_var7;
  int new_var12;
  volatile int new_var5;
  volatile int new_var13;
  int new_var3;
  volatile int new_var6;
  new_var5 = 0x20;
  new_var6 = 1;
  new_var11 = (u32) (-new_var6);
  if (d530[0] == 0)
  {
    D_0049B228[0] = new_var11;
    new_var2 = (new_var = 3);
    D_00486E78[new_var2] = 0;
    new_var14 = (new_var2 = 0);
    new_var3 = 2;
    D_0049B228[4] = new_var14;
    new_var10 = new_var2;
    D_0049B228[1] = new_var10;
    D_0049B228[new_var3] = inline_fn(new_var2);
    func_003F7320();
    new_var13 = new_var2;
    D_0042D530[new_var13] = new_var6;
  }
  u32 *sp_114 = (u32 *) (((char *) (&arg0)) + new_var5);
  ;
  new_var8 = (char *) (&arg0);
  new_var7 = (u32 *) (new_var8 + 0x60);
  new_var9 = &d530[new_var6];
  new_var14 = 0x10;
  do
  {
    u32 *sp_110 = (u32 *) (((char *) (&arg0)) + new_var14);
    u32 *sp_118 = (u32 *) (new_var8 + 0x30);
    u32 *sp_120 = new_var7;
  }
  while (new_var13);
  u32 *d510_4 = new_var9;
  new_var5 = new_var2;
  volatile unsigned int val = inline_fn2(d510_4, new_var5);
  new_var12 = val;
  new_var12 = new_var5;
  new_var12 = new_var12 != new_var12;
  new_var6 = new_var5;
  new_var2 = val;
  new_var4 = 1;
  if (new_var6 == new_var2)
  {
    goto L002FEC58;
  }
  while (new_var4)
  {
    if (new_var12)
    {
      func_003FA9B8(d510_4);
    }
    if (new_var5)
    {
      val = new_var5;
      if (val)
      {
        break;
      }
      else
      {
        break;
      }
    }
  }

  L002FEC58:
  return;

}

