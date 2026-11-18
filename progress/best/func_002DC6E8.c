typedef struct S_BlockHdr
{
  s32 unk_10;
  s32 unk_C;
  s32 unk_8;
  s32 unk_4;
} S_BlockHdr;
typedef struct S_Elem
{
  void *unk0;
  s32 unk4;
} S_Elem;
typedef struct S_Mgr
{
  void **unk0;
  s32 unk4;
  s32 unk8;
  s32 unkC;
  void *unk10;
  void *unk14;
  void *unk18;
  void *unk1C;
  void *unk20;
  void **unk24;
  s32 unk28;
  s32 unk2C;
  s32 unk30;
  s32 unk34;
  s32 unk38;
} S_Mgr;
extern S_Mgr D_004262D0;
extern void **D_0042A7B0;
extern u32 D_0042DA20;
extern s32 D_0040E678;
extern void *D_0049B0C0;
extern char D_00483F58[16];
extern u32 D_0040E618[16];
extern u32 D_0040E658[8];
extern void *D_00483DA0[88];
extern void func_0030F030(void);
extern s32 func_002FD7A0(s32);
extern void func_003FA8A4(void *, s32);
extern void func_003FA634(void *, void *);
extern s32 func_003FA9B8(void *);
extern s32 func_00151930(void *);
extern void func_002B2028(void *, void *, s32);
extern void func_00151A28(void **, s32, s32, void *, s32);
extern void func_00152720(void *, s32 *, s32 *);
extern void func_001537E8(void **, s32, s32);
extern s32 func_00153F40(s32, void **, s32, s32);
extern void func_001D9628(void *, u32, s32, void **);
extern void func_001D9A90(void *, u32, s32, void **, s32);
extern void func_002DD510(s32 *, s32, s32, s32, s32, s32, u32);
extern void func_002F7AE8(s32, u32, s32, void *);
inline static void *hdr(void *p)
{
  return (void *) (((u8 *) p) - 0x10);
}

void func_002DC6E8(s32 *arg0, s32 arg1)
{
  s32 sp5C;
  s32 sp60;
  s32 sp50;
  s32 sp54;
  s32 sp14;
  s32 sp0;
  s32 sp68;
  s32 sp6C;
  void **new_var5;
  void *sp10;
  void *sp20;
  void *sp30;
  s32 *new_var;
  void *sp40;
  void *temp_18;
  int new_var9;
  void *var_7;
  void *var_16_2;
  void *var_16_5;
  void *var_17_2;
  s32 var_17;
  s32 var_18;
  s32 var_3;
  s32 var_3_2;
  s32 var_3_3;
  s32 var_3_4;
  s32 var_3_5;
  s32 var_3_6;
  s32 var_3_7;
  s32 var_3_8;
  s32 var_3_9;
  s32 var_3_10;
  s32 var_3_11;
  s32 var_3_12;
  s32 var_3_13;
  s32 var_4;
  void **new_var8;
  s32 var_16_3;
  s32 var_16_4;
  int new_var4;
  s8 var_16;
  s32 temp_2;
  s32 temp_3;
  s32 temp_3_2;
  s32 temp_8;
  s32 temp_17_2;
  s32 temp_18_2;
  s32 temp_18_3;
  s32 temp_18_4;
  s32 temp_20;
  s32 temp_2_2;
  s32 temp_2_3;
  s32 temp_2_4;
  s32 temp_2_5;
  s32 temp_2_6;
  s32 temp_2_7;
  s32 temp_2_8;
  s32 temp_2_9;
  s32 temp_2_10;
  s32 temp_2_11;
  s32 temp_2_12;
  s32 temp_2_13;
  void *new_var3;
  s32 temp_2_14;
  s32 temp_2_15;
  s32 temp_2_16;
  s32 temp_2_17;
  s32 temp_30;
  u32 temp_21;
  void *temp_16;
  void *temp_16_2;
  void *temp_16_4;
  void *temp_16_5;
  void *temp_16_6;
  void **new_var2;
  void *temp_17;
  void **new_var7;
  void *temp_17_3;
  void *temp_5;
  void *temp_5_2;
  void *temp_5_3;
  void *temp_5_4;
  void *temp_5_5;
  void *temp_5_6;
  void *temp_5_7;
  void *temp_5_8;
  void *temp_5_9;
  void *temp_3_3;
  void *temp_3_4;
  void *temp_3_5;
  void *temp_3_6;
  void *temp_3_7;
  void *temp_3_8;
  void *temp_3_9;
  void **temp_4;
  void **temp_4_2;
  void **temp_4_3;
  void **temp_4_4;
  void **temp_4_5;
  void **temp_4_6;
  void **temp_4_7;
  void **temp_4_8;
  void **temp_4_9;
  void **temp_4_10;
  void **temp_4_11;
  void **temp_4_12;
  void **temp_4_13;
  void **temp_4_14;
  void **temp_4_15;
  void **temp_4_16;
  void **temp_4_17;
  void **temp_4_18;
  void **temp_4_19;
  void **temp_4_20;
  void **temp_4_21;
  void **temp_4_22;
  s32 **new_var6;
  void **temp_4_23;
  void **temp_4_24;
  void **temp_4_25;
  void **temp_4_26;
  void **temp_4_27;
  void **temp_4_28;
  void **temp_4_29;
  s32 *temp_5_10;
  void *temp_3_2_ptr;
  s8 temp_16_3;
  s32 **sp68_ptr;
  sp68_ptr = &arg0;
  func_0030F030();
  if (arg1 != 0)
  {
    goto end;
  }
  sp5C = (sp0 = (s32) (((u32) D_0042DA20) >> 8));
  if (D_0042A7B0 == NULL)
  {
    D_0042A7B0 = (void **) (&D_0049B0C0);
    new_var7 = &D_0049B0C0;
    func_003FA8A4(new_var7, D_0040E678);
    func_003FA634(&D_0049B0C0, &D_00483F58[0]);
  }
  new_var2 = D_0042A7B0;
  sp60 = func_002FD7A0(arg0[0]);
  temp_18 = new_var2;
  new_var = &sp0;
  sp60 = 0x4000;
  sp60 = sp60 - sp5C;
  new_var4 = 0;
  if ((temp_18 == NULL) || (func_003FA9B8(temp_18) == new_var4))
  {
    new_var6 = &new_var;
    new_var8 = &D_004262D0.unk0[*(*new_var6)];
    if ((*(*new_var6)) >= new_var4)
    {
      temp_4 = new_var8;
 do { temp_3_8 = *temp_4; temp_2_14 = ((s32) (((u8 *) (new_var3 = temp_3_8)) - ((u8 *) new_var4))) - 0x10; if (temp_2_14 == new_var4) { do { var_7 = &D_00483DA0[new_var4]; } while (0); } else { *((s32 *) (((u8 *) temp_3_8) + temp_2_14)) = new_var4; new_var5 = temp_4; var_7 = *new_var5; } } while (0);
    }
    func_002F7AE8(sp60, sp5C, sp60, var_7);
    var_16_3 = *(*new_var6);
    if (((var_16_3 + 1) - 1) >= new_var4)
    {
      *arg0 = -1;
    }
  }
  else
  {
    new_var5 = temp_4;
  }
  temp_2_2 = 0x42340000u;
  new_var9 = new_var4;
  end:
  func_002DD510(arg0, new_var9, new_var4, 0x280, 0x1E0, new_var4, temp_2_2);

}
