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
s32 func_003FF150(void *);
s32 func_00401CB0(void *arg1)
{
  s8 *new_var2;
  void *new_var3;
  int new_var4;
  void **new_var;
  s32 temp_2;
  new_var = &arg1;
  new_var2 = ((s8 *) arg1) + 4;
  new_var3 = *new_var;
  if ((*((s32 *) (((s8 *) arg1) + 8))) == 0)
  {
    *((s32 *) new_var2) = 0;
    return 0;
  }
  new_var4 = func_003FF150(*new_var);
  *((s32 *) (((s8 *) new_var3) + 8)) = 0;
  ;
  *((s32 *) (((s8 *) (*new_var)) + 4)) = 0;
  return new_var4;
}

