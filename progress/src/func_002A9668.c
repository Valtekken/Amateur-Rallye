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
void D_002AD390(void *);
extern M2C_UNK D_0044DCD8;
extern M2C_UNK D_0047CBB8;
void func_002A9668(void *arg0, s32 arg1)
{
  *((M2C_UNK **) (((s8 *) arg0) + 8)) = &D_0047CBB8;
  D_002AD390(*((void **) (((s8 *) arg0) + 0x4C)));
  *((M2C_UNK **) (((s8 *) arg0) + 8)) = &D_0044DCD8;
  if (arg1 & 1)
  {
    D_002AD390(arg0);
  }
}

