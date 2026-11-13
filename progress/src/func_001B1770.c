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
void func_00205CE0(s32, s32);
M2C_UNK func_002060F8(s32);
void func_001B1770(void *arg0, void *arg1)
{
  s32 temp_4;
  temp_4 = *((s32 *) (((s8 *) arg1) + 0x4C));
  if (temp_4 != 0)
  {
    func_002060F8(temp_4);
    func_00205CE0(*((s32 *) (((s8 *) arg1) + 0x4C)), *((s32 *) (((s8 *) arg0) + 0x14)));
    *((s32 *) (((s8 *) arg0) + 0xC)) = (s32) (*((s32 *) (((s8 *) arg0) + 0x14)));
  }
}

