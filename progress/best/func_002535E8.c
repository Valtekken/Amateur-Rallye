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
M2C_UNK func_002504B8(s32, s32, s32, void *);
M2C_UNK func_00250608(s32, s32, s32, s32);
inline s32 *inline_fn(void *arg0)
{
  return (s32 *) (((s8 *) arg0) + 0x20);
}

void func_002535E8(void *unused, void **arg1, void **arg2)
{
  s32 temp_16;
  s8 *new_var;
  s32 temp_4;
  s32 var_20;
  void *temp_2;
  void *temp_6;
  void *var_17;
  void *var_18;
  void *var_19;
  temp_6 = *arg1;
  temp_2 = *arg2;
  var_18 = *((void **) (((s8 *) temp_2) + 0));
  var_20 = *((s32 *) (((s8 *) (*((void **) (((s8 *) temp_2) + 4)))) + 8));
  var_17 = *((void **) (((s8 *) (*((void **) (((s8 *) temp_6) + 4)))) + 8));
  var_19 = *((void **) (((s8 *) temp_6) + 0));
  if (var_18 != temp_2)
  {
    do
    {
      temp_16 = *((s32 *) (((s8 *) var_18) + 8));
      func_002504B8(var_20, *inline_fn(var_17), *((s32 *) (((s8 *) var_17) + 0x24)), var_17);
      func_002504B8(temp_16, *inline_fn(var_17), *((s32 *) (((s8 *) var_17) + 0x24)), var_17);
      temp_4 = var_20;
      new_var = (s8 *) var_17;
      func_00250608(temp_4, *((s32 *) (new_var + 0)), *((s32 *) (((s8 *) var_17) + 4)), *((s32 *) (((s8 *) var_17) + 0x28)));
      var_20 = temp_16;
      func_00250608(temp_16, *((s32 *) (((s8 *) var_17) + 0)), *((s32 *) (((s8 *) var_17) + 4)), *((s32 *) (((s8 *) var_17) + 0x28)));
      var_17 = *((void **) (((s8 *) var_19) + 8));
      var_18 = *((void **) (((s8 *) var_18) + 0));
      var_19 = *((void **) (((s8 *) var_19) + 0));
    }
    while (var_18 != (*arg2));
  }
}
