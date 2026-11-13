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
inline s32 *inline_fn(void *arg0)
{
  return (s32 *) (((s8 *) arg0) + 0x120);
}

void func_0027F410(void *arg0, f32 fparg0)
{
  void *new_var;
  s32 temp_3;
  new_var = arg0 + ((*inline_fn(arg0)) * 4);
  *((f32 *) (((s8 *) new_var) + 0x30)) = fparg0;
  temp_3 = *inline_fn(arg0);
  temp_3 = temp_3 + 1;
  *inline_fn(arg0) = temp_3;
  if (temp_3 >= 0x3C)
  {
    if (arg0)
    {
      *((s32 *) (((s8 *) arg0) + 0x120)) = 0;
    }
    else
    {
      *((s32 *) (((s8 *) arg0) + 0x120)) = 0;
    }
  }
}

