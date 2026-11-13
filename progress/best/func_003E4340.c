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
M2C_UNK func_003E16D0(void *, M2C_UNK *, s32);
M2C_UNK func_003E1708(void *, M2C_UNK *, s32);
s32 func_003E4128(void *);
s32 func_003E5240(void *, M2C_UNK);
M2C_UNK func_003E5348(void *, M2C_UNK);
M2C_UNK func_003E5588();
s32 func_003E5608(void *);
extern M2C_UNK D_00489CE8;
extern M2C_UNK D_00489D10;
s32 func_003E4340(void *arg0, s32 *arg2, s32 *arg3, void *arg4)
{
  s32 temp_19;
  s32 temp_2;
  s32 temp_2_2;
  *((s32 *) (((s8 *) arg0) + 0x11C)) = 0;
  func_003E5588();
  temp_2 = func_003E5240(arg0, 0x20);
  if (((u32) (temp_2 - 0x101)) >= 0xAFU)
  {
    func_003E16D0(arg0, &D_00489CE8, temp_2);
    return 2;
  }
  func_003E5348(arg0, 0x20);
  temp_19 = func_003E5608(arg0);
  temp_2_2 = func_003E4128(arg0);
  *arg3 = temp_2_2;
  if ((*((s32 *) (((s8 *) arg0) + 0x11C))) != 0)
  {
    func_003E1708(arg0, &D_00489D10, temp_2_2);
    return 1;
  }
  *arg2 = (((((temp_19 << 7) + (temp_2 & 0xFF)) - 1) * (*((s32 *) (((s8 *) arg0) + 0x12C)))) + temp_2_2) - 1;
  *arg3 = 1;
  *((s32 *) (((s8 *) arg0) + 0x1B0)) = 1;
  *((s32 *) (((s8 *) arg4) + 8)) = 0;
  *((s32 *) (((s8 *) arg4) + 0x14)) = 0;
  *((s32 *) (((s8 *) arg4) + 0x10)) = (*((s32 *) (((s8 *) arg4) + 4)) = 0);
  if (1)
  {
  }
  *((s32 *) (((s8 *) arg4) + 0)) = (*((s32 *) (((s8 *) arg4) + 0x1C)) = 0);
  *((s32 *) (((s8 *) arg4) + 0x18)) = 0;
  *((s32 *) (((s8 *) arg4) + 0xC)) = 0;
  return 0;
}

