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
void *func_0034D6F0(void *arg0)
{
  *((f32 *) (((s8 *) arg0) + 0xC)) = 0.122499995f;
  *((f32 *) (((s8 *) arg0) + 0x10)) = 0.1f;
  *((f32 *) (((s8 *) ((unsigned) arg0)) + 0x14)) = 0.040000003f;
  *((s32 *) (((s8 *) arg0) + 0)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x28)) = 1;
  *((f32 *) (((s8 *) arg0) + 0x18)) = 3.0f;
  *((f32 *) (((s8 *) arg0) + 0x1C)) = 2.0f;
  *((s32 *) (((s8 *) arg0) + 0x20)) = 1;
  *((s32 *) (((s8 *) arg0) + 4)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x24)) = 1;
  return arg0;
}

