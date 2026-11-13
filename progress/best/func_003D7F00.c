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
M2C_UNK func_002B2028(s32);
M2C_UNK func_003D7DE0();
void func_003D7F00(void *arg0)
{
  if ((*((s32 *) (((s8 *) arg0) + 0))) & 0x100)
  {
    func_003D7DE0();
  }
  func_002B2028(*((s32 *) (((s8 *) arg0) + 0x24)));
  *((s32 *) (((s8 *) arg0) + 0x2C)) = (*((s32 *) (((s8 *) arg0) + 0x28)) = 0);
  *((s32 *) (((s8 *) arg0) + 0x24)) = 0;
}

