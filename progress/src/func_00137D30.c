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
inline s8 *inline_fn(void *arg0, void *arg1)
{
  return ((s8 *) (arg0 + ((*((u32 *) (((s8 *) arg1) + 0x10))) * 4))) + 0x14;
}

inline s8 *inline_fn2(void *arg0, s8 *arg1)
{
  return ((s8 *) (arg0 + ((*((u32 *) (arg1 + 0x10))) * 4))) + 0x14;
}

s32 func_00137D30(void *arg0)
{
  u32 temp_3;
  temp_3 = *((u32 *) (((s8 *) arg0) + 0x10));
  switch (temp_3)
  {
    case 0:
      return (*((s32 *) inline_fn(arg0, arg0))) + 0xA;

    case 1:
      return (*((s32 *) inline_fn2(arg0, (s8 *) arg0))) + 0xD;

    case 2:
      return (*((s32 *) inline_fn2(arg0, (s8 *) arg0))) + 0x10;

    case 3:
      return (*((s32 *) inline_fn2(arg0, (s8 *) arg0))) + 0x13;

    case 4:
      return (*((s32 *) inline_fn(arg0, arg0))) + 0x16;

    case 5:
      return (*((s32 *) inline_fn2(arg0, (s8 *) arg0))) + 0x19;

    case 6:
      return *((s32 *) inline_fn(arg0, arg0));

    case 7:
      return (*((s32 *) inline_fn2(arg0, (s8 *) arg0))) + 0x24;

    default:
      return 0;

  }

}

