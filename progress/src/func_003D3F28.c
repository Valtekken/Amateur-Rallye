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
M2C_UNK func_003D4D70(s32);
s32 func_003D4EA0(void **);
M2C_UNK func_003D68D0(void **, M2C_UNK *, s32);
extern M2C_UNK D_00488ED0;
void **func_003D3F28(void **arg0, s32 arg1)
{
  s32 temp_4;
  u8 temp_2;
  s32 new_var;
  void *temp_3;
  temp_3 = *arg0;
  temp_2 = *((u8 *) (((s8 *) temp_3) + 0x1A));
  if (temp_2 != 0)
  {
    new_var = 0;
    *((u8 *) (((s8 *) temp_3) + 0x1A)) = (u8) (temp_2 | 2);
  }
  else
  {
    temp_4 = *((s32 *) (((s8 *) temp_3) + 4));
    new_var = temp_4;
    if (new_var != 0)
    {
      func_003D4D70(temp_4);
    }
    new_var = 1;
    temp_4 = (((s64) (((*((s64 *) (((s8 *) (*arg0)) + 0x10))) & 1) << 0x20)) >> 0x20) != 0;
    if (temp_4)
    {
      new_var = func_003D4EA0(arg0);
    }
  }
  if (new_var != 0)
  {
    func_003D68D0(arg0, &D_00488ED0, arg1);
  }
  return arg0;
}

