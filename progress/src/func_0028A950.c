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
void func_0028A950(void *arg0, void *arg1)
{
  f32 temp_f2;
  f32 temp_f3;
  void *new_var;
  void *temp_2;
  new_var = arg0;
  temp_f3 = *((f32 *) (((s8 *) arg0) + 0x10));
  temp_f2 = (*((f32 *) (((s8 *) new_var) + 0xC))) + temp_f3;
  *((f32 *) (((s8 *) new_var) + 0xC)) = temp_f2;
  if (((*((f32 *) (((s8 *) new_var) + 0x14))) < temp_f2) || (temp_f2 < 0.0f))
  {
    *((f32 *) (((s8 *) arg0) + 0x10)) = (f32) (-temp_f3);
  }
  temp_2 = *((void **) (((s8 *) arg1) + 0x50));
  *((f32 *) (((s8 *) temp_2) + 0x54)) = (f32) ((*((f32 *) (((s8 *) temp_2) + 0x54))) + (*((f32 *) (((s8 *) new_var) + 0x10))));
}

