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
void func_002BCA28(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
  *((s32 *) (((s8 *) arg0) + 0x14)) = arg2;
  *((s32 *) (((s8 *) arg0) + 0xC)) = (s32) (arg1 & 0xFFFF);
  *((s32 *) (((s8 *) arg0) + 0x18)) = arg3;
  *((s32 *) (((s8 *) arg0) + 0x1C)) = arg4;
  *((s32 *) (((s8 *) arg0) + 0x40)) = arg5;
  *((s32 *) (((s8 *) arg0) + 0x48)) = arg6;
  *((s32 *) (((s8 *) arg0) + 0x54)) = 0;
  *((void **) (((s8 *) arg0) + 0x20)) = arg0;
  *((s32 *) (((s8 *) arg0) + 0x44)) = 0;
 do { } while (0);
  *((s32 *) (((s8 *) arg0) + 0x50)) = 0;
}
