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
M2C_UNK func_001D4F68(void *);
s32 func_002B1FC0(s32, s32);
inline s8 *inline_fn(void *arg0, int arg1)
{
  return ((s8 *) arg0) + arg1;
}

s32 func_001D50E0(void *arg0)
{
  s8 *new_var3;
  s32 temp_2;
  volatile unsigned int pad;
  s32 temp_2_2;
  s32 temp_3;
  int new_var;
  s32 temp_4;
  int new_var2;
  s32 temp_5;
  s32 temp_lo_2;
  unsigned int new_var4;
  s32 var_2;
  new_var2 = new_var;
  if (!new_var2)
  {
    var_2 = 1;
  }
  else
  {
    var_2 = 1;
  }
  temp_3 = 1;
  if ((*((s32 *) inline_fn(arg0, 0x2C))) != temp_3)
  {
    new_var = 0;
    do
    {
      var_2 = new_var;
      if ((*((s32 *) inline_fn(arg0, 0x14))) >= new_var)
      {
        var_2 = new_var;
        if ((*((s32 *) (((s8 *) arg0) + 0x18))) >= new_var)
        {
          temp_2 = *((s32 *) (((s8 *) arg0) + 0x1C));
          if (temp_2 <= new_var)
          {
            return new_var;
          }
          temp_3 = *((s32 *) (((s8 *) arg0) + 0x20));
          if (temp_3 <= new_var)
          {
            return new_var;
          }
          temp_4 = *((s32 *) inline_fn(arg0, 0x24));
          if (temp_4 <= new_var)
          {
            return new_var;
          }
          temp_5 = *((s32 *) (((s8 *) arg0) + 0x28));
          if (temp_5 <= new_var)
          {
            return new_var;
          }
          new_var4 = 0x34;
          temp_5 = (*((s32 *) inline_fn(arg0, new_var4)) = temp_2 / temp_4);
          temp_lo_2 = temp_5;
          ;
          *((s32 *) (((s8 *) arg0) + 0x38)) = temp_3 / temp_lo_2;
          new_var3 = (s8 *) arg0;
          temp_2_2 = func_002B1FC0(temp_5 * temp_lo_2, temp_5);
          *((s32 *) (new_var3 + 0x3C)) = temp_2_2;
          if (temp_2_2 == new_var)
          {
            return new_var;
          }
          *((s32 *) (((s8 *) arg0) + 0x2C)) = 1;
          func_001D4F68(arg0);
          var_2 = 1;
          new_var2 = var_2;
          return new_var2;
        }
      }
    }
    while (new_var);
  }
  return new_var2;
}

