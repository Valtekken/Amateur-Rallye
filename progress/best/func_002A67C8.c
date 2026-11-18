#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
M2C_UNK *func_00152D28(M2C_UNK, u32, u32, s32);
M2C_UNK *func_002B1FC0(s32, u32, u32, s32);
M2C_UNK func_002B2028(M2C_UNK *, M2C_UNK *);
M2C_UNK *func_003D2910(s32);
M2C_UNK func_003F931C(M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK D_0040E618;
inline int inline_fn(u32 arg0, u32 arg1)
{
  return (arg0 <= (arg1 - 1)) != 0;
}

void func_002A67C8(M2C_UNK **arg0, s32 arg1, u32 arg2)
{
  M2C_UNK *temp_2;
  short new_var2;
  M2C_UNK *temp_4_2;
  M2C_UNK *temp_5_2;
  M2C_UNK *temp_5_3;
  M2C_UNK *temp_6;
  M2C_UNK *var_16_2;
  M2C_UNK *var_17_2;
  s32 temp_2_2;
  s32 var_16;
  int new_var4;
  int new_var3;
  s32 var_7;
  u32 temp_19;
  u32 temp_4;
  u32 temp_5;
  u32 var_17;
  u32 var_6;
  int new_var;
  void *temp_3;
  var_6 = (temp_19 = arg2);
  var_7 = 0;
  new_var3 = -4;
  *((s32 *) (((s8 *) (*arg0)) + new_var3)) = 0;
  temp_3 = (*arg0) - 0x10;
  temp_4 = arg1 + 1;
  if (((((u32) (*((u32 *) (((s8 *) temp_3) + 8)))) >= 2U) || ((var_6 = *((u32 *) (((s8 *) temp_3) + 4)), inline_fn(var_6, temp_4)))) || (((u32) (((temp_4 > 0xFU) ? (temp_4) : (0x10U)) * 2)) < var_6))
  {
    var_7 = 1;
  }
  temp_5 = arg1;
  temp_5 = temp_5 + 1;
  if (var_7 != 0)
  {
    var_17 = 0x10;
    var_16 = 0x20;
    do
    {
      new_var4 = 0x10U;
      if (temp_5 > new_var4)
      {
        do
        {
        }
        while (0);
        var_17 = 0x10 * 2;
        loop_7:
        if (var_17 < temp_5)
        {
          var_17 *= 2;
          goto loop_7;
        }

        var_16 = var_17 + 0x10;
      }
      if (var_16 != 0)
      {
        temp_2 = func_002B1FC0(var_16, temp_5, var_6, var_7);
        if (temp_2 != NULL)
        {
          var_16_2 = temp_2;
        }
        else
        {
          var_16_2 = func_003D2910(var_16);
        }
      }
      else
      {
        do
        {
          if ((*((M2C_UNK **) (((s8 *) (&D_0040E618)) + new_var3))) != NULL)
          {
            new_var2 = *(*((M2C_UNK **) (((s8 *) (&D_0040E618)) + new_var3)));
            var_16_2 = *((M2C_UNK **) (((s8 *) (&D_0040E618)) + new_var3));
            *((M2C_UNK **) (((s8 *) (&D_0040E618)) + new_var3)) = (M2C_UNK *) new_var2;
          }
          else
          {
            var_16_2 = func_00152D28(0, temp_5, var_6, var_7);
          }
        }
        while (0);
      }
      *((u32 *) (((s8 *) var_16_2) + 4)) = var_17;
      *((s32 *) (((s8 *) var_16_2) - (-8))) = 1;
    }
    while (0);
    *((s32 *) (((s8 *) var_16_2) + 0xC)) = 0;
    new_var = 4;
    if (temp_19 != 0)
    {
      temp_5_2 = *arg0;
      temp_6 = *((M2C_UNK **) (((s8 *) temp_5_2) + (-0x10)));
      var_17_2 = var_16_2 + 0x10;
      if (temp_6 != NULL)
      {
        func_003F931C(var_17_2, temp_5_2, temp_6);
      }
      *((M2C_UNK **) (((s8 *) var_16_2) + 0)) = *((M2C_UNK **) (((s8 *) (*arg0)) + (-0x10)));
    }
    else
    {
      *((M2C_UNK **) (((s8 *) var_16_2) + 0)) = NULL;
      do
      {
        var_17_2 = var_16_2 + 0x10;
      }
      while (0);
    }
    temp_5_3 = *arg0;
    temp_4_2 = temp_5_3 - 0x10;
    temp_2_2 = (*((s32 *) (((s8 *) temp_4_2) + 8))) - 1;
    *((s32 *) (((s8 *) temp_4_2) + 8)) = temp_2_2;
    if (temp_2_2 == 0)
    {
      if (((*((s32 *) (((s8 *) temp_4_2) + new_var))) + 0x10) != 0)
      {
        func_002B2028(temp_4_2, temp_5_3);
      }
      else
      {
        *((M2C_UNK **) (((s8 *) temp_5_3) + (-0x10))) = (M2C_UNK *) (*((M2C_UNK **) (((s8 *) (&D_0040E618)) + (-new_var))));
        *((M2C_UNK **) (((s8 *) (&D_0040E618)) + (-new_var))) = temp_4_2;
      }
    }
    *arg0 = var_17_2;
  }
}

