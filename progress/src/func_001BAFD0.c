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
M2C_UNK func_00155DB0(void *, s32 *, s32 *);
M2C_UNK func_001CC488(void *, void *, void *);
void *func_0021E9C0(s32, s32 *);
s32 func_0021F4B0();
void *func_00262FF8(s32);
inline s8 *inline_fn(void *arg0)
{
  return ((s8 *) arg0) + 4;
}

inline s8 *inline_fn2(s8 *arg0)
{
  return arg0 + 4;
}

void func_001BAFD0(unsigned int arg0, s32 *arg1)
{
  f32 *new_var5;
  s32 *temp_5_2;
  s32 temp_4;
  void *new_var3;
  void *temp_2;
  void **new_var6;
  void *temp_2_2;
  s8 *new_var2;
  void *temp_4_2;
  void *temp_4_3;
  s8 *new_var8;
  void *new_var4;
  void *temp_5;
  s32 **new_var;
  f32 *new_var7;
  s8 *new_var9;
  temp_2 = func_0021E9C0(func_0021F4B0(), arg1);
  new_var6 = &temp_4_2;
  if (temp_2 != NULL)
  {
    temp_4 = *((s32 *) (((s8 *) temp_2) + 0x50));
    if (temp_4 != 0)
    {
      temp_2_2 = func_00262FF8(temp_4);
      temp_4_2 = arg0 + 0x20;
      if (temp_2_2 != NULL)
      {
        temp_5 = *((void **) inline_fn(temp_4_2));
        temp_5_2 = temp_5;
        new_var3 = temp_5_2;
        if (temp_5 != (*((s32 *) (((s8 *) temp_4_2) + 8))))
        {
          if (temp_5_2 != NULL)
          {
            *((f32 *) (((s8 *) temp_5) + 0)) = (f32) (*((f32 *) (((s8 *) temp_2_2) + 0)));
            *((f32 *) inline_fn2((s8 *) temp_5_2)) = (f32) (*((f32 *) inline_fn2((s8 *) temp_2_2)));
            new_var9 = (new_var8 = (s8 *) temp_5);
            *((f32 *) (new_var9 + 8)) = (f32) (*((f32 *) (((s8 *) temp_2_2) + 8)));
            new_var5 = &(*((f32 *) (((s8 *) temp_2_2) + 0x10)));
            new_var7 = (f32 *) (new_var8 + 0x10);
            *((f32 *) (((s8 *) temp_5_2) + 0xC)) = (f32) (*((f32 *) (((s8 *) temp_2_2) + 0xC)));
            *new_var7 = (f32) (*new_var5);
          }
          *((void **) inline_fn2((s8 *) temp_4_2)) = (void *) ((*((void **) inline_fn2((s8 *) (*new_var6)))) + 0x14);
        }
        else
        {
          new_var4 = new_var3;
          func_001CC488(temp_4_2, new_var4, temp_2_2);
        }
        if (1)
        {
        }
        temp_4_3 = arg0 + 0x14;
        arg0 = 8;
        temp_5 = temp_4_3;
        temp_5_2 = *((s32 **) inline_fn2((s8 *) temp_5));
        if (temp_5_2 != (*((s32 *) (((s8 *) temp_5) + arg0))))
        {
          new_var2 = (s8 *) temp_5;
          ;
          if (temp_5_2 != NULL)
          {
            *temp_5_2 = *arg1;
          }
          *((s32 **) inline_fn2(new_var2)) = (s32 *) inline_fn2(*((s32 **) inline_fn2(new_var2)));
        }
        else
        {
          func_00155DB0(temp_5, temp_5_2, arg1);
        }
      }
    }
  }
}

