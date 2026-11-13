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
s32 func_001D7210(s32);
M2C_UNK func_003F931C(s32, s32, s32);
inline s8 *inline_fn(s8 *arg0)
{
  return arg0 + 0xC;
}

void func_001D71A8(void *arg0, s32 arg1, s32 arg2)
{
  s32 new_var4;
  s8 *new_var2;
  int new_var3;
  s8 *new_var;
  do
  {
  }
  while (0);
  new_var3 = 0;
  new_var3 = (unsigned long) (func_001D7210(arg2) != new_var3);
  if (new_var3)
  {
    new_var = (s8 *) arg0;
    new_var2 = (s8 *) arg0;
    new_var4 = *((s32 *) inline_fn(new_var));
    func_003F931C(arg1, (*((s32 *) (new_var2 + 0))) + new_var4, arg2);
    *((s32 *) (new_var + 0xC)) = (s32) ((*((s32 *) inline_fn(new_var))) + arg2);
  }
}

