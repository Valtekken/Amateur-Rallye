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
extern s32 D_00426388;
extern s32 D_00492278;
s32 *func_001E5CC0(void *arg0)
{
  int new_var;
  s8 *new_var2;
  if (D_00426388)
  {
    new_var = D_00426388 == 0;
    new_var2 = (s8 *) arg0;
  }
  else
  {
    new_var = D_00426388 == 0;
    new_var2 = (s8 *) arg0;
  }
  if (1)
  {
    if (new_var)
    {
      D_00426388 = 1;
      D_00492278 = 0;
    }
    if ((*((s32 *) (new_var2 + 8))) == 8)
    {
      return *((s32 **) (new_var2 + 4));
    }
    return &D_00492278;
  }
}

