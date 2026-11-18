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
void *func_00176C98();
int func_001C6E68(void *, long);
f32 func_001CF4C0(void *);
M2C_UNK func_00268180();
extern f32 D_0044FCB4;
extern f32 D_00478468;
void func_00174B60(void *arg0)
{
  void *new_var3;
  f32 temp_f0;
  f32 new_var6;
  f32 temp_f0_2;
  s32 *new_var;
  f32 temp_f0_3;
  f32 *new_var12;
  f32 temp_f0_4;
  void *new_var4;
  f32 temp_f0_5;
  f32 temp_f1;
  f32 var_f0;
  f32 var_f0_2;
  f32 var_f0_3;
  void *new_var13;
  f32 var_f0_4;
  f32 var_f1;
  f32 var_f1_2;
  f32 var_f1_3;
  f32 var_f1_4;
  f32 *new_var9;
  f32 var_f1_5;
  f32 var_f2;
  s8 *new_var2;
  s32 temp_4_2;
  s32 temp_6;
  void **new_var5;
  s32 var_5;
  void *temp_17;
  void *temp_2;
  void *new_var11;
  void *temp_2_2;
  void *temp_2_3;
  void *temp_2_4;
  volatile unsigned int pad;
  s8 *new_var8;
  void *temp_4;
  void **new_var10;
  f32 *new_var7;
  void *temp_5;
  func_00268180();
  temp_4 = *((void **) (((s8 *) arg0) + 0x180));
  *((s32 *) (((s8 *) arg0) + 0x10)) = 2;
  new_var4 = arg0;
  new_var = (s32 *) (((s8 *) new_var4) + 0x1C);
  temp_f0 = (*((f32 *) (((s8 *) temp_4) + 0x48))) / (*((f32 *) (((s8 *) temp_4) + 0xC)));
  if ((*new_var) != 0)
  {
    *((f32 *) (((s8 *) new_var4) + 0x44)) = (f32) (*((f32 *) (((s8 *) temp_4) + 0x24)));
    *((f32 *) (((s8 *) new_var4) + 0x28)) = (f32) ((((temp_f0 + 1.0f) * 0.25f) * (*((f32 *) (((s8 *) temp_4) + 0x2C)))) - (*((f32 *) (((s8 *) temp_4) + 0xEC))));
    *((M2C_UNK32 *) (((s8 *) new_var4) + 0x120)) = 0;
    *((f32 *) (((s8 *) new_var4) + 0x11C)) = (f32) (*((f32 *) (((s8 *) temp_4) + 0x50)));
    temp_f0_2 = *((f32 *) (((s8 *) temp_4) + 0xEC));
    *((f32 *) (((s8 *) arg0) + 0x2C)) = temp_f0_2;
    *((f32 *) (((s8 *) new_var4) + 0x30)) = (f32) (1.0f / temp_f0_2);
    *((f32 *) (((s8 *) new_var4) + 0x34)) = (f32) (*((f32 *) (((s8 *) temp_4) + 0xF0)));
    if ((*((s32 *) (((s8 *) arg0) + 0x20))) != 0)
    {
      temp_5++;
      temp_5--;
      var_f0 = 0.5f;
    }
    else
    {
      var_f0 = -0.5f;
    }
    var_f2 = 0.5f;
    var_f0_2 = *((f32 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x180)))) + 0x11C));
    *((f32 *) (((s8 *) arg0) + 0x38)) = (f32) ((*((f32 *) (((s8 *) temp_4) + 0x1C))) * var_f0);
  }
  else
  {
    *((f32 *) (((s8 *) arg0) + 0x44)) = (f32) (*((f32 *) (((s8 *) temp_4) + 0x28)));
    if (temp_17)
    {
    }
    var_f0 = (f32) ((((1.0f - temp_f0) * 0.25f) * (*((f32 *) (((s8 *) temp_4) + 0x2C)))) - (*((f32 *) (((s8 *) temp_4) + 0x14C))));
    *((f32 *) (((s8 *) arg0) + 0x28)) = var_f0;
    *((f32 *) (((s8 *) arg0) + 0x11C)) = (f32) (*((f32 *) (((s8 *) temp_4) + 0x54)));
    *((M2C_UNK32 *) (((s8 *) new_var4) + 0x120)) = (M2C_UNK32) (*((M2C_UNK32 *) (((s8 *) temp_4) + 0x4C)));
    temp_f1 = *((f32 *) (((s8 *) temp_4) + 0x14C));
    *((f32 *) (((s8 *) arg0) + 0x2C)) = temp_f1;
    *((f32 *) (((s8 *) new_var4) + 0x30)) = (f32) (1.0f / temp_f1);
    *((f32 *) (((s8 *) new_var4) + 0x34)) = (f32) (*((f32 *) (((s8 *) temp_4) + 0x150)));
    if ((*((s32 *) (((s8 *) new_var4) + 0x20))) != 0)
    {
      var_f0_3 = 0.5f;
    }
    else
    {
      var_f0_3 = -0.5f;
    }
    *((f32 *) (((s8 *) arg0) + 0x38)) = (f32) ((*((f32 *) (((s8 *) temp_4) + 0x20))) * var_f0_3);
    var_f2 = -0.5f;
    var_f0_2 = *((f32 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x180)))) + 0x17C));
  }
  *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) (-var_f0_2);
  new_var5 = (void **) (((s8 *) arg0) + 0x180);
  new_var10 = (void **) (((s8 *) arg0) + 0x180);
  *((f32 *) (((s8 *) new_var4) + 0x40)) = (f32) ((*((f32 *) (((s8 *) (*new_var5)) + 0x18))) * var_f2);
  if ((*((s32 *) (((s8 *) arg0) + 0x20))) != 0)
  {
    var_f1 = 0.0f;
  }
  else
  {
    var_f1 = D_0044FCB4;
  }
  *((f32 *) (((s8 *) arg0) + 0x48)) = var_f1;
  new_var11 = new_var4;
  *((f32 *) (((s8 *) new_var11) + 0x4C)) = 1.0f;
  if ((*((s32 *) (((s8 *) new_var11) + 0x1C))) != 0)
  {
    var_f0_4 = 0.0f;
  }
  else
  {
    var_f0_4 = D_0044FCB4;
  }
  temp_17 = new_var4 + 0x48;
  *((f32 *) (((s8 *) (new_var13 = new_var4)) + 0x50)) = var_f0_4;
  temp_f0_3 = func_001CF4C0(temp_17);
  if (temp_f0_3 < D_00478468)
  {
    *((f32 *) (((s8 *) arg0) + 0x48)) = 0.0f;
    *((f32 *) (((s8 *) temp_17) + 8)) = 0.0f;
    *((f32 *) (((s8 *) temp_17) + 4)) = 0.0f;
  }
  else
  {
    *((f32 *) (((s8 *) new_var11) + 0x48)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x48))) / temp_f0_3);
    *((f32 *) (((s8 *) temp_17) + 4)) = (f32) ((*((f32 *) (((s8 *) temp_17) + 4))) / temp_f0_3);
    *((f32 *) (((s8 *) temp_17) + 8)) = (f32) ((*((f32 *) (((s8 *) temp_17) + 8))) / temp_f0_3);
  }
  new_var8 = ((s8 *) new_var11) + 0x140;
  temp_2 = *new_var5;
  if ((*new_var) != 0)
  {
    *((f32 *) (((s8 *) arg0) + 0x13C)) = (f32) ((*((f32 *) (((s8 *) temp_2) + 0x12C))) * 0.01745328f);
    var_f1_2 = *((f32 *) (((s8 *) temp_2) + 0x114));
  }
  else
  {
    *((f32 *) (((s8 *) arg0) + 0x13C)) = (f32) ((*((f32 *) (((s8 *) temp_2) + 0x18C))) * 0.01745328f);
    var_f1_2 = *((f32 *) (((s8 *) temp_2) + 0x174));
  }
  *((f32 *) new_var8) = (f32) (var_f1_2 * 0.01745328f);
  if ((*((s32 *) (((s8 *) new_var11) + 0x20))) != 0)
  {
    *((f32 *) (((s8 *) new_var13) + 0x13C)) = (f32) (-(*(new_var7 = &(*((f32 *) (((s8 *) new_var11) + 0x13C))))));
    *((f32 *) (((s8 *) new_var11) + 0x140)) = (f32) (-(*((f32 *) (((s8 *) arg0) + 0x140))));
  }
  var_f0 = *((f32 *) (((s8 *) new_var4) + 0x160));
  temp_2_2 = *new_var5;
  if ((*((s32 *) (((s8 *) arg0) + 0x1C))) != 0)
  {
    *((f32 *) (((s8 *) new_var11) + 0x15C)) = (f32) ((*((f32 *) (((s8 *) temp_2_2) + 0x130))) * 0.01745328f);
    var_f1_3 = *((f32 *) (((s8 *) temp_2_2) + 0x118));
  }
  else
  {
    *((f32 *) (((s8 *) new_var11) + 0x15C)) = (f32) ((*((f32 *) (((s8 *) temp_2_2) + 0x190))) * 0.01745328f);
    var_f1_3 = *((f32 *) (((s8 *) temp_2_2) + 0x178));
  }
  new_var2 = ((s8 *) arg0) + 0x15C;
  *((f32 *) (((s8 *) new_var11) + 0x160)) = (f32) (var_f1_3 * 0.01745328f);
  if ((*((s32 *) (((s8 *) new_var4) + 0x20))) != 0)
  {
    *((f32 *) new_var2) = (f32) (-(*((f32 *) (((s8 *) new_var11) + 0x15C))));
    *((f32 *) (((s8 *) new_var4) + 0x160)) = (f32) (-var_f0);
  }
  temp_2_3 = *((void **) (((s8 *) new_var11) + 0x180));
  new_var6 = (f32) (*((f32 *) (((s8 *) temp_2_3) + 0x120)));
  new_var12 = (f32 *) (((s8 *) arg0) + 0x68);
  if ((*((s32 *) (((s8 *) new_var4) + 0x1C))) != 0)
  {
    *new_var12 = new_var6;
    *((f32 *) (((s8 *) new_var11) + 0x70)) = (f32) (*((f32 *) (((s8 *) temp_2_3) + 0x124)));
    temp_f0_4 = *((f32 *) (((s8 *) temp_2_3) + 0x128));
    *((f32 *) (((s8 *) arg0) + 0x78)) = temp_f0_4;
    *((f32 *) (((s8 *) new_var4) + 0x7C)) = (f32) (temp_f0_4 * 0.2f);
    *((f32 *) (((s8 *) arg0) + 0x6C)) = (f32) (*((f32 *) (((s8 *) temp_2_3) + 0x100)));
    *((f32 *) (((s8 *) arg0) + 0x74)) = (f32) (*((f32 *) (((s8 *) temp_2_3) + 0x104)));
    new_var9 = (f32 *) (((s8 *) temp_2_3) + 0xFC);
    *((f32 *) (((s8 *) arg0) + 0x54)) = (f32) (*((f32 *) (((s8 *) temp_2_3) + 0xF8)));
    var_f1_4 = *new_var9;
  }
  else
  {
    *new_var12 = (f32) (*((f32 *) (((s8 *) temp_2_3) + 0x180)));
    *((f32 *) (((s8 *) arg0) + 0x70)) = (f32) (*((f32 *) (((s8 *) temp_2_3) + 0x184)));
    new_var3 = temp_2_3;
    temp_f0_5 = *((f32 *) (((s8 *) temp_2_3) + 0x188));
    *((f32 *) (((s8 *) new_var11) + 0x78)) = temp_f0_5;
    *((f32 *) (((s8 *) new_var11) + 0x7C)) = (f32) (temp_f0_5 * 0.2f);
    *((f32 *) (((s8 *) arg0) + 0x6C)) = (f32) (*((f32 *) (((s8 *) temp_2_3) + 0x160)));
    *((f32 *) (((s8 *) arg0) + 0x74)) = (f32) (*((f32 *) (((s8 *) new_var3) + 0x164)));
    *((f32 *) (((s8 *) new_var11) + 0x54)) = (f32) (*((f32 *) (((s8 *) temp_2_3) + 0x158)));
    var_f1_4 = *((f32 *) (((s8 *) temp_2_3) + 0x15C));
  }
  *((f32 *) (new_var11 + 0x58)) = var_f1_4;
  *((f32 *) (((s8 *) new_var4) + 0x5C)) = (f32) (*((f32 *) (((s8 *) temp_2_3) + 0x140)));
  *((f32 *) (((s8 *) new_var4) + 0x60)) = (f32) (*((f32 *) (((s8 *) temp_2_3) + 0x144)));
  temp_f1 = (temp_6 = *((s32 *) (((s8 *) temp_5) + 0)));
  *((f32 *) (((s8 *) arg0) + 0x64)) = (f32) (*((f32 *) (((s8 *) temp_2_3) + 0x148)));
  temp_2_4 = *new_var10;
  if ((*new_var) != 0)
  {
    *((f32 *) (((s8 *) arg0) + 0x118)) = (f32) (*((f32 *) (((s8 *) temp_2_4) + 0x138)));
    var_f1_5 = *((f32 *) (((s8 *) temp_2_4) + 0x13C));
  }
  else
  {
    *((f32 *) (((s8 *) arg0) + 0x118)) = (f32) (*((f32 *) (((s8 *) temp_2_4) + 0x198)));
    var_f1_5 = *((f32 *) (((s8 *) temp_2_4) + 0x19C));
  }
  *((f32 *) (((s8 *) arg0) + 0x16C)) = var_f1_5;
  if ((*((s32 *) (((s8 *) new_var13) + 0x1C))) == 0)
  {
    *((f32 *) (((s8 *) new_var11) + 0x14C)) = 0.0f;
  }
  else
  {
    *((f32 *) (((s8 *) arg0) + 0x14C)) = (f32) ((*((f32 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x180)))) + 0x8C))) * 57.295826f);
  }
  temp_4_2 = *((s32 *) (((s8 *) new_var11) + 0x170));
  temp_5 = func_00176C98();
  if ((temp_4_2 < 0) || ((temp_f1, (((u32) temp_4_2) < ((u32) ((((s32) (((*((s32 *) (((s8 *) temp_5) + 4))) - temp_6) * 0xAAAAAAAB)) >> 1) >> 1))) == 0)))
  {
    var_5 = *((s32 *) (((s8 *) temp_5) + 0));
  }
  else
  {
    var_5 = (temp_4_2 * 0xC) + temp_6;
  }
  func_001C6E68(new_var13 + 0x174, var_5);
}

