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
M2C_UNK func_003F94D0(void *, M2C_UNK, M2C_UNK);
extern M2C_UNK D_004815E8;
void *func_002C2740(void *arg0)
{
  void *temp_2;
  s8 *new_var;
  temp_2 = arg0 + 0x1C;
  *((M2C_UNK **) (((s8 *) arg0) + 0)) = &D_004815E8;
  *((s32 *) (((s8 *) arg0) + 0x1C)) = 0;
  *((s32 *) (((s8 *) temp_2) + 4)) = 0;
  *((s32 *) (((s8 *) temp_2) + 0x28)) = 0;
  new_var = temp_2;
  *((s32 *) (((s8 *) new_var) + 0xC)) = (*((s32 *) (((s8 *) new_var) + 0x14)) = (*((s32 *) (((s8 *) temp_2) + 0x10)) = (*((s32 *) (((s8 *) temp_2) + 8)) = 0)));
  *((s32 *) (((s8 *) new_var) + 0x18)) = 0;
  *((s32 *) (((s8 *) temp_2) + 0x20)) = 0;
  *((s32 *) (((s8 *) new_var) + 0x1C)) = 0;
  new_var = (s8 *) arg0;
  *((s32 *) (((s8 *) new_var) + 0x24)) = 0;
  *((s32 *) (new_var + 4)) = 0;
  temp_2 = (s8 *) arg0;
  *((s32 *) (temp_2 + 8)) = 0;
  *((s32 *) (((s8 *) arg0) + 0xC)) = 0;
  *((s32 *) (temp_2 + 0x14)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x60)) = 0;
  *((s32 *) (temp_2 + 0x64)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x68)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x6C)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x70)) = 0;
  func_003F94D0(arg0 + 0x78, 0, 0x48);
  *((s32 *) (temp_2 + 0x18)) = 0;
  *((s32 *) (temp_2 + 0x10)) = 0;
  return arg0;
}

