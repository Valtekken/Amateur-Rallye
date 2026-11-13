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
void *func_00198980(void *arg0)
{
  register void *temp_6;
  void *new_var;
  void *temp_5;
  void *temp_3;
  int new_var2;
  *((s32 *) (((s8 *) arg0) + 0)) = 0;
  temp_3 = arg0 + 4;
  temp_5 = arg0 + 0x20;
  new_var = arg0;
  *((s32 *) (((s8 *) new_var) + 4)) = 0;
  temp_6 = new_var + 0x3C;
  *((s32 *) (((s8 *) temp_3) + 0x18)) = 0;
  *((s32 *) (((s8 *) temp_3) + 4)) = 0;
  *((s32 *) (((s8 *) temp_3) + 8)) = 0;
  *((s32 *) (((s8 *) temp_3) + 0xC)) = 0;
  *((s32 *) (((s8 *) temp_3) + 0x10)) = 0;
  *((s32 *) (((s8 *) new_var) + 0x20)) = 0;
  *((s32 *) (((s8 *) temp_3) + 0x14)) = 0;
  *((s32 *) (((s8 *) temp_5) + 0x18)) = 0;
  *((s32 *) (((s8 *) temp_5) + 4)) = 0;
  new_var2 = 0x10;
  *((s32 *) (((s8 *) temp_5) + 0xC)) = 0;
  *((s32 *) (((s8 *) temp_5) + 0x10)) = 0;
  *((s32 *) (((s8 *) temp_5) + 0x14)) = 0;
  *((s32 *) (((s8 *) temp_5) + 8)) = 0;
  *((s32 *) (((s8 *) new_var) + 0x3C)) = 0;
  *((s32 *) (((s8 *) temp_6) + 0x18)) = 0;
  *((s32 *) (((s8 *) temp_6) + 4)) = 0;
  *((s32 *) (((s8 *) temp_6) + 0xC)) = 0;
  *((s32 *) (((s8 *) temp_6) + 8)) = 0;
  *((s32 *) (((s8 *) temp_6) + new_var2)) = 0;
  *((s32 *) (((s8 *) temp_6) + 0x14)) = 0;
  return new_var;
}

