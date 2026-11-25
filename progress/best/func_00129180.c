typedef struct 
{
  s32 unk0[3];
  s32 unkC;
  s32 unk10;
  s32 unk14;
  s32 unk18;
  s32 unk1C;
  s32 unk20;
  s32 unk24;
} S_MCState;
extern void func_0011E278(s32, s32);
extern void func_00129068(S_MCState *);
extern void func_00129330(S_MCState *);
extern void func_00129430(S_MCState *);
extern int func_003F9698(const char *);
extern const char D_00448C58[38];
extern const char D_00448C80[24];
extern const char D_00448C98[30];
extern const char D_00448CB8[37];
void func_00129180(S_MCState *arg0)
{
  int new_var;
  if (arg0->unk18 != 0)
  {
    if (arg0->unk18 == 1)
    {
      func_00129068(arg0);
    }
    else
    {
      return;
    }
  }
  switch (arg0->unk10)
  {
    case 0:
      func_003F9698(D_00448C58);
      arg0->unk20 = 1;
      func_0011E278(arg0->unkC, 4);
      return;

    case 1:

    case 2:

    case 5:

    case 7:

    default:
      return;

    case 3:
      func_003F9698(D_00448C80);
      func_00129330(arg0);
      arg0->unk18 = 1;
      return;

    case 4:
      func_003F9698(D_00448C98);
      func_00129430(arg0);
      arg0->unk18 = 1;
      return;

    case 6:
      func_003F9698(D_00448CB8);
      new_var = arg0->unk18 == 0;
      if (new_var)
    {
      func_00129068(arg0);
    }
      return;

  }

}

