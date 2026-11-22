#include "context.h"
extern u32 D_0042DEC0[];
extern u32 D_0042DE10[];
extern u32 D_0042DE0C[];
extern u32 D_0042DE14[];
extern u32 D_0042DEC8[];
extern u32 D_0042DE60[];
extern void func_0031B8C8(void *arg0, s32 arg1, s32 arg2, f32 fparg0);
extern void (*jtbl_004850C0[])(void);
inline volatile int inline_fn(volatile int arg0)
{
  return arg0;
}

inline int inline_fn2(int arg0)
{
  return 0x19 > arg0;
}

inline volatile int inline_fn23(volatile int arg0)
{
  return inline_fn(arg0);
}

void func_00312610(void *arg0, volatile unsigned int arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5)
{
  volatile unsigned int new_var6;
  volatile int new_var5;
  volatile unsigned short new_var;
  volatile int new_var12;
  unsigned short new_var8;
  unsigned short new_var9;
  volatile int new_var3;
  volatile int *new_var7;
  float new_var11;
  volatile unsigned char new_var2;
  int new_var4;
  volatile int new_var13;
  short new_var10;
  if (new_var4)
  {
    u32 mask = 0x7FFFFFFF;
    arg3 = 0;
    if (*new_var7)
    {
      D_0042DEC0[0] = (new_var3 = (new_var2 = 0xFFFFFFFF));
      new_var4 = inline_fn2(new_var6 = arg1);
    }
    else
    {
      new_var3 = (new_var2 = 0xFFFFFFFF);
      new_var5++;
      new_var5--;
      D_0042DEC0[0] &= *new_var7;
      new_var4 = arg1;
      new_var4 = inline_fn2(new_var4);
    }
    new_var10 = 0x8000;
    do
    {
      {
        if (new_var9 != 0)
        {
          D_0042DE10[0]++;
          new_var9 = arg3;
          ;
          D_0042DE0C[new_var9] |= new_var5;
        }
        else
        {
          D_0042DE10[0]++;
          new_var9 = arg3;
          ;
          D_0042DE0C[new_var9] |= new_var5;
        }
      }
    }
    while (new_var2 = 0);
    new_var12 = (new_var3 = new_var10);
    new_var5 = new_var12;
    new_var5 = 1;
    new_var6 = inline_fn23(new_var5);
    new_var8 = new_var5;
    new_var9 = (float) new_var6;
    {
      new_var13 = new_var5;
      if (new_var13 || new_var7)
      {
        new_var11 = (float) new_var6;
        mask = !new_var11;
      }
      else
      {
        new_var11 = new_var9;
        mask = !new_var11;
      }
      if (mask)
      {
      }
    }
    new_var7 = &new_var3;
  }
  {
  }
}

