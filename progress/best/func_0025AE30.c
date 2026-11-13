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
M2C_UNK func_00233988(s32 *);
M2C_UNK func_00233CA8(void *);
void func_0023F7D8(void *);
void func_0025AE30(void *arg0)
{
  s8 *new_var;
  *(*((s32 **) (((s8 *) arg0) + 0xC))) = 1;
  func_00233988(*((s32 **) (((s8 *) arg0) + 0xC)));
  *((s32 *) (((s8 *) (*((void **) (((s8 *) arg0) + 4)))) + 0x34)) = 1;
  new_var = ((s8 *) arg0) + 4;
  func_0023F7D8(*((void **) new_var));
  new_var = *((void **) (((s8 *) arg0) + 8));
  *((s32 *) (((s8 *) new_var) + 0x10)) = 1;
  func_00233CA8(*((void **) (((s8 *) arg0) + 8)));
}

