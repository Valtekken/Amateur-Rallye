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
void func_00358D90(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4)
{
  f32 temp_f0;
  f32 temp_f10;
  f32 temp_f11;
  f32 temp_f12;
  f32 temp_f1;
  s8 *new_var;
  f32 temp_f1_2;
  f32 temp_f1_3;
  f32 temp_f1_4;
  f32 temp_f2;
  f32 temp_f2_2;
  f32 temp_f3;
  f32 temp_f3_2;
  f32 new_var2;
  s8 *new_var3;
  f32 temp_f4;
  f32 temp_f5;
  f32 temp_f6;
  f32 temp_f7;
  f32 temp_f8;
  f32 temp_f9;
  temp_f10 = *((f32 *) (((s8 *) arg2) + 8));
  temp_f7 = (*((f32 *) (((s8 *) arg3) + 8))) - temp_f10;
  temp_f9 = *((f32 *) (((s8 *) arg2) + 0));
  temp_f8 = *((f32 *) (((s8 *) arg0) + 8));
  temp_f6 = *((f32 *) (((s8 *) arg0) + 0));
  temp_f5 = (*((f32 *) (((s8 *) arg3) + 0))) - temp_f9;
  temp_f12 = (*((f32 *) (((s8 *) arg1) + 8))) - temp_f8;
  temp_f11 = (*((f32 *) (((s8 *) arg1) + 0))) - temp_f6;
  temp_f1 = temp_f5 * temp_f12;
  temp_f0 = temp_f7 * temp_f11;
  new_var2 = temp_f1 - temp_f0;
  temp_f4 = temp_f0 - temp_f1;
  temp_f1_2 = new_var2;
  if (!((temp_f1_2 * temp_f1_2) < (temp_f4 * temp_f4)))
  {
    temp_f3 = ((temp_f7 * (temp_f6 - temp_f9)) - (temp_f5 * (temp_f8 - temp_f10))) / temp_f1_2;
    new_var = ((s8 *) arg4) + 8;
    *((f32 *) new_var) = (f32) (temp_f8 + (temp_f3 * temp_f12));
    new_var3 = ((s8 *) arg0) + 0;
    temp_f1_3 = *((f32 *) (((s8 *) arg0) + 4));
    *((f32 *) (((s8 *) arg4) + 4)) = (f32) (temp_f1_3 + (temp_f3 * ((*((f32 *) (((s8 *) arg1) + 4))) - temp_f1_3)));
    temp_f2 = *((f32 *) new_var3);
    new_var2 = temp_f2;
    *((f32 *) (((s8 *) arg4) + 0)) = (f32) (temp_f2 + (temp_f3 * ((*((f32 *) (((s8 *) arg1) + 0))) - new_var2)));
    return;
  }
  temp_f3_2 = ((temp_f5 * (temp_f8 - temp_f10)) - (temp_f7 * (temp_f6 - temp_f9))) / temp_f4;
  *((f32 *) (((s8 *) arg4) + 0)) = (f32) (temp_f6 + (temp_f3_2 * temp_f11));
  temp_f1_4 = *((f32 *) (((s8 *) arg0) + 4));
  *((f32 *) (((s8 *) arg4) + 4)) = (f32) (temp_f1_4 + (temp_f3_2 * ((*((f32 *) (((s8 *) arg1) + 4))) - temp_f1_4)));
  temp_f2_2 = *((f32 *) (((s8 *) arg0) + 8));
  *((f32 *) new_var) = (f32) (temp_f2_2 + (temp_f3_2 * ((*((f32 *) (((s8 *) arg1) + 8))) - temp_f2_2)));
}

