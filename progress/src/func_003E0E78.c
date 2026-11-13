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
s32 func_003E0E78(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 *temp_3;
  void *new_var;
  int new_var3;
  s8 *new_var2;
  s32 temp_2;
  s32 temp_2_2;
  s32 temp_5;
  new_var2 = (s8 *) (new_var = arg0);
  temp_2_2 = *((s32 *) (new_var2 + 0x40));
  new_var3 = temp_2_2 + 0xC;
  temp_5 = arg1 * 8;
  temp_3 = new_var3 + temp_5;
  *((s32 *) (((s8 *) (temp_2_2 + temp_5)) + 0x10)) = arg3;
  temp_2 = *temp_3;
  *temp_3 = arg2;
  return temp_2;
}

