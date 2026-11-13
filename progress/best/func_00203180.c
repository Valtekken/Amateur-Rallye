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
s32 func_00203180(void *arg0, void *arg1)
{
  f32 *var_3;
  f32 temp_f3;
  s32 var_2;
  s32 var_4;
  s32 var_4_2;
  void *temp_2;
  void *temp_3;
  temp_2 = arg1 + 0xC;
  temp_3 = arg1 + 0x18;
  *((f32 *) (((s8 *) arg1) + 0)) = (f32) (((*((f32 *) (((s8 *) arg0) + 0x10))) * (*((f32 *) (((s8 *) arg0) + 0x20)))) - ((*((f32 *) (((s8 *) arg0) + 0x14))) * (*((f32 *) (((s8 *) arg0) + 0x1C)))));
  *((f32 *) (((s8 *) arg1) + 4)) = (f32) (((*((f32 *) (((s8 *) arg0) + 8))) * (*((f32 *) (((s8 *) arg0) + 0x1C)))) - ((*((f32 *) (((s8 *) arg0) + 4))) * (*((f32 *) (((s8 *) arg0) + 0x20)))));
  *((f32 *) (((s8 *) arg1) + 8)) = (f32) (((*((f32 *) (((s8 *) arg0) + 4))) * (*((f32 *) (((s8 *) arg0) + 0x14)))) - ((*((f32 *) (((s8 *) arg0) + 8))) * (*((f32 *) (((s8 *) arg0) + 0x10)))));
  *((f32 *) (((s8 *) arg1) + 0xC)) = (f32) (((*((f32 *) (((s8 *) arg0) + 0x14))) * (*((f32 *) (((s8 *) arg0) + 0x18)))) - ((*((f32 *) (((s8 *) arg0) + 0xC))) * (*((f32 *) (((s8 *) arg0) + 0x20)))));
  *((f32 *) (((s8 *) temp_2) + 4)) = (f32) (((*((f32 *) (((s8 *) arg0) + 0))) * (*((f32 *) (((s8 *) arg0) + 0x20)))) - ((*((f32 *) (((s8 *) arg0) + 8))) * (*((f32 *) (((s8 *) arg0) + 0x18)))));
  *((f32 *) (((s8 *) temp_2) + 8)) = (f32) (((*((f32 *) (((s8 *) arg0) + 8))) * (*((f32 *) (((s8 *) arg0) + 0xC)))) - ((*((f32 *) (((s8 *) arg0) + 0))) * (*((f32 *) (((s8 *) arg0) + 0x14)))));
  *((f32 *) (((s8 *) arg1) + 0x18)) = (f32) (((*((f32 *) (((s8 *) arg0) + 0xC))) * (*((f32 *) (((s8 *) arg0) + 0x1C)))) - ((*((f32 *) (((s8 *) arg0) + 0x10))) * (*((f32 *) (((s8 *) arg0) + 0x18)))));
  *((f32 *) (((s8 *) temp_3) + 4)) = (f32) (((*((f32 *) (((s8 *) arg0) + 4))) * (*((f32 *) (((s8 *) arg0) + 0x18)))) - ((*((f32 *) (((s8 *) arg0) + 0))) * (*((f32 *) (((s8 *) arg0) + 0x1C)))));
  *((f32 *) (((s8 *) temp_3) + 8)) = (f32) (((*((f32 *) (((s8 *) arg0) + 0))) * (*((f32 *) (((s8 *) arg0) + 0x10)))) - ((*((f32 *) (((s8 *) arg0) + 4))) * (*((f32 *) (((s8 *) arg0) + 0xC)))));
  temp_f3 = (((*((f32 *) (((s8 *) arg0) + 0))) * (*((f32 *) (((s8 *) arg1) + 0)))) + ((*((f32 *) (((s8 *) arg0) + 4))) * (*((f32 *) (((s8 *) arg1) + 0xC))))) + ((*((f32 *) (((s8 *) arg0) + 8))) * (*((f32 *) (((s8 *) arg1) + 0x18))));
  var_4 = 0;
  if (fabsf(temp_f3) <= 0.000001f)
  {
    return 0;
  }
  var_2 = 0 * 0xC;
  do
  {
 do { var_3 = var_2 + arg1; var_4_2 = 2; loop_4: var_4_2 -= 1; *var_3 *= 1.0f / temp_f3; var_3 += 4; if (var_4_2 >= 0) { goto loop_4; } var_4 += 1; var_2 = var_4 * 0xC; } while (0);
  }
  while (var_4 < 3);
  return 1;
}
