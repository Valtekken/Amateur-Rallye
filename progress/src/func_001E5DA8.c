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
extern s32 D_00426398;
extern s32 D_004922B0;
s32 *func_001E5DA8(void *arg0)
{
  if (D_00426398 == 0)
  {
    D_004922B0 = 0;
    D_00426398 = 1;
  }
  if ((*((s32 *) (((s8 *) arg0) + 8))) == 0xB)
  {
    return *((s32 **) (((s8 *) arg0) + 4));
  }
  return &D_004922B0;
}

