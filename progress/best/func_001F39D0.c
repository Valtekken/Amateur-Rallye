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
M2C_UNK D_002AD390(void *);
M2C_UNK func_00212628(void *, s32);
M2C_UNK func_002B2028(void *);
void func_001F39D0(void *arg0, s32 arg1)
{
  void *temp_17;
  void *temp_2;
  temp_17 = arg0 + 0x24;
  if ((*((s32 *) (((s8 *) temp_17) + 4))) != 0)
  {
    func_00212628(temp_17, *((s32 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x24)))) + 4)));
    temp_2 = *((void **) (((s8 *) arg0) + 0x24));
    *((void **) (((s8 *) temp_2) + 8)) = temp_2;
    *((s32 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x24)))) + 4)) = 0;
    temp_2 = *((void **) (((s8 *) arg0) + 0x24));
    *((void **) (((s8 *) temp_2) + 0xC)) = temp_2;
    *((s32 *) (((s8 *) temp_17) + 4)) = 0;
  }
  func_002B2028(*((void **) (((s8 *) arg0) + 0x24)));
  if (arg1 & 1)
  {
    D_002AD390(arg0);
  }
}

