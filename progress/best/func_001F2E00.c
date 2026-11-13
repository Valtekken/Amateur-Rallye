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
void *func_001F2E00(void *arg0)
{
  void *temp_3;
  register void *temp_5;
  *((s32 *) (((s8 *) arg0) + 0)) = 0;
  temp_5 = arg0 + 0xC;
  *((s32 *) (((s8 *) arg0) + 4)) = 0;
  temp_3 = arg0 + 0x18;
  *((s32 *) (((s8 *) temp_5) + 8)) = 0;
  *((s32 *) (((s8 *) arg0) + 0xC)) = 0;
  *((s32 *) (((s8 *) arg0) + 8)) = 0;
  *((s32 *) (((s8 *) temp_5) + 4)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x18)) = 0;
  *((s32 *) (((s8 *) temp_3) + 0xC)) = 0;
  temp_5 = ((s8 *) temp_3) + 4;
  *((s32 *) (((s8 *) temp_3) + 8)) = 0;
  *((s32 *) temp_5) = 0;
  *((s32 *) (((s8 *) temp_3) + 0x10)) = 0;
  return arg0;
}

