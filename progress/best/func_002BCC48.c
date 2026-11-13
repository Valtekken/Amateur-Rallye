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
M2C_UNK func_002BCB20(void *);
void *func_002BCC48(void *arg0)
{
  s32 *var_17;
  s32 var_18;
  var_18 = 3;
  var_17 = arg0 + 4;
  *((s32 *) (((s8 *) arg0) + 0)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x14)) = 0;
  do
  {
    var_18 -= 1;
    func_002BCB20(arg0);
    var_18++;
    var_18--;
    *var_17 = *((s32 *) (((s8 *) arg0) + 0));
    var_17 += 4;
  }
  while (var_18 >= 0);
  return arg0;
}

