#include "context.h"
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern void func_0015ACE0(f32, f32, f32);
extern s32 func_00151930(void *);
inline int inline_fn(int arg0, s32 *arg1)
{
  return arg0 || arg1;
}

inline s32 *inline_fn2(s32 *arg0)
{
  return &(*arg0);
}

s32 func_00305038(void)
{
  s32 new_var10;
  s32 new_var3;
  s32 var_1;
  int new_var23;
  int new_var32;
  s32 var_3;
  int new_var21;
  s32 new_var28;
  int new_var18;
  s32 *new_var8;
  s32 *new_var13;
  s32 **new_var19;
  int new_var4;
  s32 *new_var20;
  s32 var_4;
  s32 *new_var16;
  s32 new_var31[2];
  s32 *new_var33;
  s32 new_var2[2];
  s32 *new_var22;
  s32 new_var29;
  int new_var30;
  s32 *new_var11;
  s32 *new_var6;
  s32 *new_var14;
  s32 *new_var27;
  s32 new_var24;
  s32 *new_var17;
  s32 *new_var5;
  s32 var_7;
  s32 new_var25;
  s32 *new_var15;
  s32 var_8;
  s32 *new_var9;
  s32 var_9;
  s32 *new_var7;
  s32 *new_var12;
  s32 new_var;
  s32 param = *((s32 *) 0x0);
  s32 var_6;
  s32 new_var26;
  new_var11 = new_var2;
  new_var6 = new_var22;
  new_var18 = *(new_var14 = *new_var19);
  if (inline_fn(new_var31[0], new_var11))
  {
    new_var19 = &new_var15;
    new_var27 = &param;
    var_7 = (new_var31[0] = 1);
    new_var4 = 0;
    param = var_7;
    new_var6 = (new_var5 = new_var27);
    new_var2[param] = *new_var5;
    new_var22 = (new_var13 = &var_1);
    new_var31[0] = new_var4;
    new_var9 = new_var11;
    new_var6 = new_var22;
    new_var31[0] = (new_var31[0] = new_var9[new_var31[0]]);
    new_var7 = new_var5;
    new_var31[0] = new_var31[0] != new_var31[0];
    var_4 = *new_var7;
  }
  else
  {
    if (var_3)
    {
      do
      {
      }
      while (0);
    }
    new_var31[0] = 1;
    new_var4 = 0;
    var_7 = new_var31[0];
    new_var6 = &param;
    ;
    new_var20 = (new_var8 = inline_fn2(new_var5));
    new_var15 = new_var20;
    new_var21 = new_var18;
    var_8 = var_7;
    new_var2[var_8] = new_var21;
    new_var32 = (new_var31[0] = new_var9[new_var31[0]]);
    new_var23 = new_var32;
    new_var31[0] = (param = (double) new_var4);
    new_var12 = &var_1;
    new_var17 = (new_var9 = new_var12);
    new_var6 = new_var17;
    new_var31[0] = new_var23;
    new_var7 = new_var16;
    new_var31[0] = new_var31[0] != new_var31[0];
    var_4 = *new_var7;
  }
  new_var = new_var31[0];
  {
    s32 temp = func_00151930(new_var6);
    var_4 = temp;
    if (new_var17 || new_var4)
    {
      var_9 = 0;
    }
    else
    {
      var_9 = 0;
    }
    do
    {
      new_var16 = new_var5;
      if (new_var31[0])
      {
        do
        {
        }
        while (0);
        new_var21 = var_4;
        var_1 = func_001E3650(new_var21, var_1);
      }
      else
      {
        var_1 = func_001E3650(temp, var_1);
      }
    }
    while (var_9);
  }
  do
  {
    new_var30 = 0;
    new_var33 = new_var31;
    do
    {
      if (!new_var6)
      {
        new_var28 = var_4;
        if (var_3)
        {
          new_var18 = (int) (var_6 = (var_8 = 0));
          new_var31[0] = new_var18;
          new_var3 = new_var28;
          new_var10 = new_var3;
          var_4 = 0;
          new_var2[0] = new_var10;
          new_var31[1] = new_var9[var_6];
          var_3 = new_var33[new_var24 = 1];
          return var_3;
        }
        else
        {
          new_var25 = var_4;
          new_var26 = new_var25;
          do
          {
            new_var31[0] = (var_8 = new_var26);
            new_var3 = new_var26;
            new_var10 = new_var3;
          }
          while (0);
          new_var24 = new_var10;
          new_var29 = new_var9[(long long) new_var];
          new_var2[new_var25] = new_var24;
          new_var31[1] = (var_3 = new_var29);
          do
          {
            if (1)
            {
              return var_3;
            }
          }
          while (0);
        }
        do
        {
        }
        while (new_var26);
      }
      else
      {
        var_6 = (unsigned long) new_var3;
        new_var10 = new_var26;
        new_var31[0] = new_var10;
        new_var2[new_var25] = var_6;
        return (double) new_var2[new_var33[0]];
      }
    }
    while (new_var30);
  }
  while (0);
}

