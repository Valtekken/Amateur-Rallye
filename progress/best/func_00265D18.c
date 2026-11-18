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
void *func_001E36D8(s32, s32);
M2C_UNK func_001E3EC0(s32, s32, s32);
inline s8 *inline_fn(void *arg0)
{
  return (s8 *) arg0;
}

void func_00265D18(s32 arg0, void *arg1)
{
  s32 temp_18;
  void *temp_10;
  s8 *new_var2;
  void *temp_2;
  void *temp_3;
  void *temp_4;
  unsigned int new_var3;
  void *temp_4_2;
  f32 new_var5;
  void *temp_5;
  void *temp_5_2;
  void *temp_6;
  void *temp_7;
  f32 *new_var4;
  int new_var;
  void *temp_8;
  void *temp_9;
  temp_18 = arg0 + 0x10;
  temp_2 = func_001E36D8(func_001E4280(), arg0 + 0xC);
  temp_3 = *((void **) (inline_fn(arg1) + 0x50));
  temp_6 = temp_2 + 0x10;
  temp_7 = temp_2 + 0x20;
  temp_4 = temp_3 + 0x20;
  temp_5 = temp_3 + 0x30;
  *((f32 *) (inline_fn(temp_3) + 0x20)) = (f32) (*((f32 *) (inline_fn(temp_2) + 0)));
  temp_8 = temp_3 + 0x40;
  *((f32 *) (inline_fn(temp_8) + 4)) = (f32) (*((f32 *) (inline_fn(temp_7) + 4)));
  new_var4 = (f32 *) (inline_fn(temp_2) + 4);
  temp_10 = temp_2 + 0x30;
  new_var5 = (f32) (*new_var4);
  temp_9 = temp_3 + 0x50;
  *((f32 *) (inline_fn(temp_4) + 4)) = new_var5;
  *((f32 *) (inline_fn(temp_4) + 8)) = (f32) (*((f32 *) (inline_fn(temp_2) + 8)));
  *((f32 *) (inline_fn(temp_4) + 0xC)) = (f32) (*((f32 *) (inline_fn(temp_2) + 0xC)));
  *((f32 *) (inline_fn(temp_3) + 0x30)) = (f32) (*((f32 *) (inline_fn(temp_2) + 0x10)));
  new_var2 = inline_fn(temp_9);
  *((f32 *) (inline_fn(temp_5) + 4)) = (f32) (*((f32 *) (inline_fn(temp_6) + 4)));
  *((f32 *) (inline_fn(temp_5) + 8)) = (f32) (*((f32 *) (inline_fn(temp_6) + 8)));
  *((f32 *) (inline_fn(temp_5) + 0xC)) = (f32) (*((f32 *) (inline_fn(temp_6) + 0xC)));
  *((f32 *) (inline_fn(temp_3) + 0x40)) = (f32) (*((f32 *) (inline_fn(temp_2) + 0x20)));
  *((f32 *) (inline_fn(temp_8) + 8)) = (f32) (*((f32 *) (inline_fn(temp_7) + 8)));
  *((f32 *) (inline_fn(temp_3 + 0x40) + 0xC)) = (f32) (*((f32 *) (inline_fn(temp_7) + 0xC)));
  *((f32 *) (inline_fn(temp_3) + 0x50)) = (f32) (*((f32 *) (inline_fn(temp_2) + 0x30)));
  *((f32 *) (new_var2 + 4)) = (f32) (*((f32 *) (inline_fn(temp_10) + 4)));
  new_var3 = 0x10;
  *((f32 *) (new_var2 + 8)) = (f32) (*((f32 *) (inline_fn(temp_10) + 8)));
  *((f32 *) (new_var2 + 0xC)) = (f32) (*((f32 *) (inline_fn(temp_10) + 0xC)));
  arg0 = func_001E3650(func_001E4280(), temp_18);
  if (arg0 == 0)
  {
    temp_5_2 = *((void **) (inline_fn(arg1) + 0x50));
    *((s64 *) (inline_fn(temp_5_2) + 0x70)) = (s64) (((*((s64 *) (inline_fn(temp_5_2) + 0x70))) & ((0xBFFFFFFF * 0x10) | 0xF)) | (0x8000 << 0x13));
    return;
  }
  new_var = arg0 - 1;
  func_001E3EC0(func_001E4280(), temp_18, new_var);
  temp_4_2 = *((void **) (inline_fn(arg1) + 0x50));
  *((s64 *) (inline_fn(temp_4_2) + 0x70)) = (s64) ((*((s64 *) (inline_fn(temp_4_2) + 0x70))) & ((0xBFFFFFFF * new_var3) | 0xF));
}

