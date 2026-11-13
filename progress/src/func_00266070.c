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
void func_00268180();
void func_00266070(void *arg0)
{
  s32 *new_var;
  func_00268180();
  *((s32 *) (((s8 *) arg0) + 0x10)) = 2;
  *((s32 *) (((s8 *) arg0) + 0x30)) = 1;
  *((f32 *) (((s8 *) arg0) + 0x1C)) = 1.0f;
  *((f32 *) (((s8 *) arg0) + 0x18)) = 1.0f;
  *((s32 *) (((s8 *) arg0) + 0x20)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x24)) = 0;
  new_var = (s32 *) (((s8 *) arg0) + 0x28);
  *new_var = 0;
  *((s32 *) (((s8 *) arg0) + 0x2C)) = 0;
}

