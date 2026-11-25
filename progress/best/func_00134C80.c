extern void func_0011DF88(s32, s32);
extern void func_003F93CC(s32, s32, s32);
extern void func_002B2028(s32);
extern void D_002AD390(void *);
extern s32 D_0040E618[];
extern s32 D_0044CFE8[];
extern s32 D_0044DCD8[];
typedef struct 
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
  s32 unkC;
  s32 unk10;
  s32 unk14;
  s32 unk18;
  s32 unk1C;
  s32 unk20;
  s32 unk24;
  s32 unk28;
  s32 unk2C;
} S_func_00134C80_arg0;
void func_00134C80(S_func_00134C80_arg0 *arg0, s32 arg1)
{
  S_func_00134C80_arg0 *s3 = arg0;
  s32 s4 = arg1;
  s32 *s1;
  s32 s2;
  s32 s0;
  s32 v1;
  s32 new_var;
  s32 new_var2;
  s32 v0;
  s32 count;
  new_var = (s32) (&D_0044CFE8);
  s3->unk8 = new_var;
  v1 = s3->unkC;
  if (v1 != 0)
  {
    func_0011DF88(s3->unkC, 3);
  }
  s1 = (s32 *) (((char *) s3) + 0x24);
  s2 = s1[0];
  s0 = s1[1];
  func_003F93CC(s2, s0, 0);
  v1 = s1[1];
  s0 = s0 - s2;
  v0 = s1[2];
  v1 = v1 - s0;
  s1[1] = v1;
  s2 = (new_var2 = s1[0]);
  v0 = v0 - s2;
  count = v0 >> 2;
  if (count != 0)
  {
    if ((count * 4) != 0)
    {
      func_002B2028(s2);
    }
    else
    {
      s1[0] = D_0040E618[-1];
      D_0040E618[-1] = s2;
    }
  }
  s3->unk8 = (s32) (&D_0044DCD8);
  if (s4 & 1)
  {
    D_002AD390(s3);
  }
}

