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
f32 func_0025D958(void *, s32);
void func_0025D8D0(void *arg0)
{
  int new_var;
  f32 *temp_16;
  s32 *temp_2;
  s32 temp_19;
  s32 temp_3;
  s32 var_17;
  temp_19 = ((s32) ((*((s32 *) (((s8 *) arg0) + 0xA4))) - (*((s32 *) (((s8 *) arg0) + 0xA0))))) >> 2;
  var_17 = 0;
  new_var = 0;
  if (temp_19 > new_var)
  {
    do
    {
      temp_3 = var_17 * 4;
      temp_2 = (*((s32 *) (((s8 *) arg0) + 0xA0))) + temp_3;
      var_17 += 1;
      temp_16 = (*((s32 *) (((s8 *) arg0) + 0x18))) + temp_3;
      *temp_16 = func_0025D958(arg0, *temp_2);
    }
    while (var_17 < temp_19);
  }
}

