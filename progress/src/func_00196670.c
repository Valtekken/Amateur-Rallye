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
M2C_UNK func_00196358();
M2C_UNK func_001D2900(s32, s32);
M2C_UNK func_001E3750(s32, s32);
void func_00196670(void *arg0)
{
  s32 temp_17;
  func_00196358();
 do { temp_17 = arg0 + 0xC; func_001D2900(temp_17, *((s32 *) (((s8 *) arg0) + 0x10))); func_001E3750(func_001E4280(), temp_17); } while (0);
}
