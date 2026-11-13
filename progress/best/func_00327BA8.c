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
M2C_UNK D_002AD530(s32);
s32 D_002AD5A8(s32);
M2C_UNK func_003F931C(s32, s32, s32);
extern s32 D_0043C000;
void func_00327BA8(void *arg0)
{
  s32 temp_17;
  void *temp_16_2;
  s32 temp_18;
  s32 temp_2_2;
  s32 temp_2;
  s32 temp_18_2;
  s32 temp_4;
  s32 temp_6_2;
  s32 temp_6;
  s32 temp_4_2;
  void *temp_16;
  s32 temp_17_2;
  temp_16 = *((void **) (((s8 *) arg0) + 0x10));
  temp_17 = *((s32 *) (((s8 *) temp_16) + 0xC));
  if (temp_17 < (*((s32 *) (((s8 *) temp_16) + 8))))
  {
    D_0043C000 = *((s32 *) (((s8 *) temp_16) + 0x10));
    temp_2 = D_002AD5A8((temp_17 << 6) + 0x80);
    temp_6 = *((s32 *) (((s8 *) temp_16) + 0xC));
    temp_18 = (temp_2 + 0x7F) & 0xFFFFFF80;
    if (temp_6 > 0)
    {
      func_003F931C(temp_18, *((s32 *) (((s8 *) temp_16) + 0)), temp_6 << 6);
    }
    temp_4 = *((s32 *) (((s8 *) temp_16) + 4));
    if (temp_4 != 0)
    {
      D_002AD530(temp_4);
    }
    *((s32 *) (((s8 *) temp_16) + 8)) = temp_17;
    *((s32 *) (((s8 *) temp_16) + 0)) = temp_18;
    *((s32 *) (((s8 *) temp_16) + 4)) = temp_2;
    D_0043C000 = 0;
  }
  temp_16_2 = *((void **) (((s8 *) arg0) + 0x14));
  temp_17_2 = *((s32 *) (((s8 *) temp_16_2) + 0xC));
  if (temp_17_2 < (*((s32 *) (((s8 *) temp_16_2) + 8))))
  {
    D_0043C000 = *((s32 *) (((s8 *) temp_16_2) + 0x10));
    temp_2_2 = D_002AD5A8((temp_17_2 + 0x20) * 4);
    temp_6_2 = *((s32 *) (((s8 *) temp_16_2) + 0xC));
    temp_18_2 = (temp_2_2 + 0x7F) & 0xFFFFFF80;
    if (temp_6_2 > 0)
    {
      func_003F931C(temp_18_2, *((s32 *) (((s8 *) temp_16_2) + 0)), temp_6_2 * 4);
    }
    temp_4_2 = *((s32 *) (((s8 *) temp_16_2) + 4));
    if (temp_4_2 != 0)
    {
      D_002AD530(temp_4_2);
    }
    *((s32 *) (((s8 *) temp_16_2) + 0)) = temp_18_2;
    *((s32 *) (((s8 *) temp_16_2) + 4)) = temp_2_2;
    *((s32 *) (((s8 *) temp_16_2) + 8)) = temp_17_2;
    D_0043C000 = 0;
  }
}

