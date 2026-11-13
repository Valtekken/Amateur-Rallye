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
M2C_UNK func_003D7F00();
void func_003D77E0(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 *new_var;
  if ((*((s32 *) (((s8 *) arg0) + 0))) & 0x100)
  {
    func_003D7F00();
  }
  *((s32 *) (((s8 *) arg0) + 8)) = arg3;
  *((s32 *) (((s8 *) arg0) + 4)) = arg2;
  new_var = &arg1;
  *((s32 *) (((s8 *) arg0) + 0xC)) = *new_var;
}

