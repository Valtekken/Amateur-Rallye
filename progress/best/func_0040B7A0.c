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
s32 _SetTLBEntry_4();
s32 func_0040B7A0(s32 arg0)
{
  u32 new_var;
  new_var = (u32) (arg0 - 0xD);
  if (new_var >= 0x23U)
  {
    return -1;
  }
  if (new_var)
  {
    return _SetTLBEntry_4();
  }
  else
  {
    return _SetTLBEntry_4();
  }
}

