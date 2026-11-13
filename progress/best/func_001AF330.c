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
M2C_UNK func_001AFA20(void *);
M2C_UNK func_001AFC88(void *);
M2C_UNK func_001AFDD8(void *);
M2C_UNK func_001AFFE0(void *);
M2C_UNK func_001B01F8(void *);
M2C_UNK func_001B0508(void *);
s32 func_001FDBA8(s32, void *);
s32 func_001FDE60();
void **func_00201350();
void func_001AF330(void *arg0)
{
  s32 temp_19;
  s32 temp_2;
  s32 var_17;
  void **temp_2_2;
  void *temp_18;
  void *temp_3;
  void *temp_3_2;
  void *temp_3_3;
  void *temp_3_4;
 do { *((s32 *) (((s8 *) arg0) + 0xAC)) = func_001FDBA8(func_001FDE60(), arg0 + 0xA4); temp_2 = func_001FDBA8(func_001FDE60(), arg0 + 0xA0); *((s32 *) (((s8 *) arg0) + 0xA8)) = temp_2; if ((*((s32 *) (((s8 *) arg0) + 0xAC))) != 0) { if (temp_2 != 0) { temp_18 = arg0 + 0x74; temp_3 = *func_00201350(); var_17 = 0; temp_3_2 = temp_3 + 0xC0; *((f32 *) (((s8 *) arg0) + 0x74)) = (f32) (*((f32 *) (((s8 *) temp_3) + 0xC0))); *((f32 *) (((s8 *) temp_18) + 4)) = (f32) (*((f32 *) (((s8 *) temp_3_2) + 4))); *((f32 *) (((s8 *) temp_18) + 8)) = (f32) (*((f32 *) (((s8 *) temp_3_2) + 8))); func_001AFA20(arg0); func_001B01F8(arg0); func_001AFC88(arg0); temp_19 = *((s32 *) (((s8 *) func_00201350()) + 0x10)); if (temp_19 > 0) { do { do { temp_2_2 = func_00201350() + (var_17 * 4); var_17 += 1; temp_3_3 = *temp_2_2; temp_3_4 = temp_3_3 + 0xC0; *((f32 *) (((s8 *) arg0) + 0x74)) = (f32) (*((f32 *) (((s8 *) temp_3_3) + 0xC0))); *((f32 *) (((s8 *) temp_18) + 4)) = (f32) (*((f32 *) (((s8 *) temp_3_4) + 4))); *((f32 *) (((s8 *) temp_18) + 8)) = (f32) (*((f32 *) (((s8 *) temp_3_4) + 8))); func_001AFDD8(arg0); } while (var_17 < temp_19); } while (0); } func_001AFFE0(arg0); if ((*((s32 *) (((s8 *) arg0) + 0x9C))) != 0) { if (1) { func_001B0508(arg0); } } } } } while (0);
}
