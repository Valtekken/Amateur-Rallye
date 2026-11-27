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
M2C_UNK func_002B1F70(s32);
s32 func_002CE798(s32);
M2C_UNK func_002CF418(M2C_UNK *);
M2C_UNK func_0030D4D0(M2C_UNK);
M2C_UNK func_0030DB30(u32);
M2C_UNK func_0030DB68();
u32 func_0030DCB8(s32);
M2C_UNK func_0030DCC0(u32, u32, s32, s32);
s32 func_003ECE40(s32);
extern M2C_UNK D_00483248;
extern M2C_UNK D_00483258;
extern M2C_UNK D_00483268;
extern M2C_UNK D_00483278;
extern M2C_UNK D_00483288;
extern M2C_UNK D_00483298;
extern M2C_UNK D_004832A8;
extern M2C_UNK D_004832B8;
void func_002CD890(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_16;
  s8 *new_var;
  s32 temp_21;
  u32 var_17;
  u32 var_5;
  var_17 = 0;
  temp_21 = func_003ECE40(1);
  func_002CF418(&D_00483248);
  temp_16 = func_002CE798(arg2);
  func_002CF418(&D_00483258);
  func_002CF418(&D_00483268);
  *((u32 *) (((s8 *) arg0) + 4)) = func_0030DCB8(temp_16);
  new_var = (s8 *) arg0;
  func_002CF418(&D_00483278);
  func_0030DB68();
  func_002CF418(&D_00483288);
  func_0030DB30(*((u32 *) (new_var + 4)));
  func_002CF418(&D_00483298);
  if ((*((u32 *) (((s8 *) arg0) + 4))) != 0)
  {
    ;
    do
    {
      func_0030DCC0(var_17, 0, temp_16, arg1);
      var_17 += 1;
      func_0030D4D0(0);
      func_002CF418(&D_004832A8);
      var_5 = var_17;
    }
    while (var_17 < ((u32) (*((u32 *) (((s8 *) arg0) + 4)))));
  }
  func_002CF418(&D_004832B8);
  func_002B1F70(temp_16);
  func_003ECE40(temp_21);
}

