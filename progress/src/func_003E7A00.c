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
s32 func_003E7650();
M2C_UNK func_003E7828(s32, void *);
void func_003E7A00(void *arg0)
{
  s32 new_var;
  new_var = *((s32 *) (((s8 *) arg0) + 8));
  if (new_var == 0)
  {
    func_003E7828(func_003E7650(), arg0);
    new_var = 1;
    *((s32 *) (((s8 *) arg0) + 8)) = new_var;
  }
}

