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
M2C_UNK func_001B1D10(void *);
M2C_UNK func_001D5DE0(void *);
extern M2C_UNK D_004731D8;
void *func_001B21D8(void *arg0)
{
  void *temp_17;
  void *temp_3;
  register void *temp_2;
  void *temp_3_2;
  void *temp_4;
  *((f32 *) (((s8 *) arg0) + 0x38)) = 100.0f;
  temp_3 = arg0 + 0x38;
  *((M2C_UNK **) (((s8 *) arg0) + 0xDC)) = &D_004731D8;
  temp_17 = arg0 + 0xA4;
  temp_2 = arg0 + 0x54;
  temp_4 = (s8 *) arg0;
  *((s32 *) (temp_4 + 0xC)) = 0;
  *((s32 *) (temp_4 + 0x1C)) = 0;
  *((s32 *) (temp_4 + 0x24)) = 0;
  *((s32 *) (temp_4 + 0x2C)) = 0;
  *((s32 *) (temp_4 + 0x34)) = 0;
  *((f32 *) (((s8 *) temp_3) + 8)) = 100.0f;
  *((f32 *) (((s8 *) temp_3) + 4)) = 100.0f;
  *((s32 *) (temp_4 + 0x44)) = 0;
  *((s32 *) (temp_4 + 0x54)) = 0;
  *((s32 *) (((s8 *) temp_2) + 8)) = (*((s32 *) (((s8 *) temp_2) + 4)) = 0);
  *((s32 *) (temp_4 + 0x68)) = 0;
  *((s32 *) (temp_4 + 0x74)) = 0;
  *((s32 *) (temp_4 + 0x78)) = 0;
  *((s32 *) (temp_4 + 0x80)) = 0;
  *((s32 *) (temp_4 + 0x88)) = 0;
  *((s32 *) (temp_4 + 0x90)) = 0;
  *((s32 *) (temp_4 + 0x9C)) = 0;
  *((f32 *) (((s8 *) arg0) + 0x98)) = 100.0f;
  *((f32 *) (((s8 *) arg0) + 0x64)) = 100.0f;
  *((f32 *) (((s8 *) arg0) + 0x60)) = 100.0f;
  *((f32 *) (((s8 *) arg0) + 0x8C)) = 100.0f;
  *((f32 *) (((s8 *) arg0) + 0x7C)) = 100.0f;
  func_001B1D10(temp_17);
  *((s32 *) (((s8 *) arg0) + 0xC8)) = 0;
  *((s32 *) (((s8 *) arg0) + 0xD4)) = 0;
  *((s32 *) (((s8 *) arg0) + 0xD0)) = 1;
  *((s32 *) (((s8 *) arg0) + 0xCC)) = 1;
  func_001D5DE0(arg0 + 0xD8);
  temp_4 = arg0 + 0xB0;
  temp_3_2 = arg0 + 0x10;
  *((f32 *) (((s8 *) arg0) + 0)) = (f32) (*((f32 *) (((s8 *) arg0) + 0xA4)));
  *((f32 *) (((s8 *) arg0) + 0x10)) = (f32) (*((f32 *) (((s8 *) arg0) + 0xB0)));
  *((f32 *) (((s8 *) arg0) + 4)) = (f32) (*((f32 *) (((s8 *) temp_17) + 4)));
  *((f32 *) (((s8 *) arg0) + 8)) = (f32) (*((f32 *) (((s8 *) temp_17) + 8)));
  *((f32 *) (((s8 *) temp_3_2) + 4)) = (f32) (*((f32 *) (((s8 *) temp_4) + 4)));
  *((f32 *) (((s8 *) temp_3_2) + 8)) = (f32) (*((f32 *) (((s8 *) temp_4) + 8)));
  *((f32 *) (((s8 *) arg0) + 0x20)) = (f32) (*((f32 *) (((s8 *) temp_17) + 0x18)));
  *((f32 *) (((s8 *) arg0) + 0x28)) = (f32) (*((f32 *) (((s8 *) temp_17) + 0x1C)));
  *((f32 *) (((s8 *) arg0) + 0x30)) = (f32) (*((f32 *) (((s8 *) temp_17) + 0x20)));
  return arg0;
}

