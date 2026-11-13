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
void func_003593E8(void *arg0, void *arg1, void *arg2, void *arg3)
{
  f32 temp_f0;
  f32 temp_f0_2;
  f32 temp_f10;
  f32 temp_f11;
  f32 temp_f12;
  f32 temp_f13;
  f32 temp_f16;
  f32 temp_f1;
  f32 temp_f1_2;
  f32 temp_f3;
  f32 temp_f4;
  f32 temp_f4_2;
  f32 temp_f5;
  float new_var;
  f32 temp_f5_2;
  f32 temp_f6;
  f32 temp_f9;
  temp_f4 = *((f32 *) (((s8 *) arg0) + 0));
  temp_f5 = *((f32 *) (arg0 + 4));
  temp_f3 = (*((f32 *) (((s8 *) arg1) + 0))) - temp_f4;
  temp_f0 = (*((f32 *) (((s8 *) arg1) + 4))) - temp_f5;
  temp_f1 = (*((f32 *) (((s8 *) arg2) + 0))) - temp_f4;
  temp_f12 = (*((f32 *) (((s8 *) arg2) + 4))) - temp_f5;
  temp_f16 = *((f32 *) (((s8 *) arg0) + 8));
  temp_f13 = 1.0f / temp_f5;
  temp_f10 = 1.0f / temp_f4;
  temp_f9 = (*((f32 *) (((s8 *) arg1) + 8))) - temp_f16;
  temp_f11 = (*((f32 *) (((s8 *) arg2) + 8))) - temp_f16;
  temp_f6 = temp_f3 * temp_f12;
  temp_f6 = 1.0f / (temp_f6 - (temp_f0 * temp_f1));
  temp_f5_2 = temp_f5 * temp_f6;
  temp_f4_2 = temp_f4 * temp_f6;
  new_var = ((temp_f0 * temp_f4_2) * temp_f11) - (temp_f9 * (temp_f12 * temp_f4_2));
  temp_f1_2 = (temp_f9 * (temp_f1 * temp_f5_2)) - ((temp_f3 * temp_f5_2) * temp_f11);
  temp_f0_2 = new_var;
  *((f32 *) (((s8 *) arg3) + 8)) = (f32) (((((temp_f0_2 - (temp_f0_2 * (temp_f10 * 0.0f))) + (temp_f1_2 - (temp_f1_2 * (temp_f13 * 0.0f)))) + temp_f16) + ((*((f32 *) (((s8 *) arg3) + 0))) * (temp_f0_2 * (-temp_f10)))) + ((*((f32 *) (((s8 *) arg3) + 4))) * (temp_f1_2 * (-temp_f13))));
}

