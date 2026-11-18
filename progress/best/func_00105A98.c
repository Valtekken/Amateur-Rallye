extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern s32 func_00151930(void *);
extern void func_0015ACE0(f32, f32, f32);
extern void func_001D4040(s32 *, s32);
extern void func_001D2CD8(s32 *, s32);
extern s32 func_00192398(s32, s32);
extern s32 func_00193B60(void);
extern s32 func_00193FD8(s32);
extern s32 func_00194C40(void);
extern s32 func_001189C0(void);
extern s32 func_00196730(s32, s32);
extern s32 func_00196E10(void);
extern s32 func_00107EF8(s32, s32, s32, s32);
extern void D_002AD390(s32);
extern void D_002AD530(s32);
extern s32 func_0018FAC0(s32);
extern void func_0018FAC8(void *, s32);
extern void *func_00171308(void *);
extern void func_00171378(void *, s32);
extern s32 func_00190458(void *, void **, f32 *);
extern s32 func_00190590(void *, void **, f32 *);
extern s32 func_003FA9B8(s32);
extern s32 func_001E3E90(s32, void **, f32);
extern void func_002B2028(void *, s32);
extern void func_001D2900(void *, char *);
extern void func_001D2488(s32, void *);
extern void *func_00152D28(int);
extern void *func_002B1FC0(int);
extern void func_002B2028(void *, s32);
extern void *func_003D2910(int);
extern s32 func_003F931C(void *, const void *, int);
extern s32 func_003F93CC(void *, const void *, int);
extern s32 func_001EE2F8(s32);
extern s32 D_002AD5A8(s32);
extern void func_003FA8A4(s32, s32);
extern s32 D_004294CC;
extern s32 D_0042637C;
extern const char D_00444F18[];
extern const char D_00444858[];
extern const char D_45498[];
extern const char D_454C8[];
extern const char D_454F8[];
extern const char D_45520[];
extern const char D_45550[];
extern const char D_45580[];
extern const char D_455B0[];
extern const char D_455E0[];
extern const char D_45610[];
extern const char D_45640[];
extern const char D_45670[];
extern const char D_456A0[];
extern s32 D_0040E618[];
extern s32 D_0040E658[];
void func_00105A98(s32 arg0, s32 arg1)
{
  char *new_var4;
  s32 new_var5;
  s32 temp_16;
  s32 *new_var9;
  s32 *new_var8;
  s32 temp_17 = (double) func_001E3650(temp_16, (s32) 0);
  s32 *new_var6;
  s32 *sp = 0;
  s32 **new_var10;
  s32 new_var11;
  unsigned char new_var2;
  s32 *sp10 = 0;
  s32 new_var7;
  s32 *new_var3;
  s32 *new_var;
  s32 *sp20 = 0;
  new_var5 = arg0;
  new_var9 = &arg0;
  if (func_00193FD8(func_00194C40()) != ((long long) 0))
  {
    s32 temp_16_2 = func_001189C0();
    func_001D2CD8(sp, *((s32 *) (((char *) ((13 * (2 * (2 * func_00192398(func_00193B60(), temp_17)))) + temp_16_2)) + 0x1C)));
    func_00107EF8(sp20, *new_var9, (int) temp_17, func_00192398(func_00193B60(), temp_17));
    new_var10++;
    do
    {
      new_var10 = &sp10;
      do
      {
        new_var10--;
        new_var7 = func_00196E10();
      }
      while (0);
      if (1)
      {
        func_001D2CD8(new_var10, sp20);
      }
    }
    while (0);
  }
  else
  {
    s32 temp_16_3 = func_001189C0();
    new_var8 = (s32 *) (((char *) ((func_00196730(new_var7, temp_17) * 0x34) + temp_16_3)) + 0x1C);
    ;
    if (temp_17)
    {
      func_001D2CD8(sp, *new_var8);
      func_00107EF8(sp20, *new_var9, temp_17, func_00196730(func_00196E10(), temp_17));
      func_001D2CD8(&sp10, sp20);
      D_002AD390(sp20);
    }
    else
    {
      new_var2 = func_00196730(func_00196E10(), temp_17);
      new_var11 = temp_17;
      if (*new_var9)
      {
        new_var = sp20;
        func_00107EF8(new_var, new_var5, new_var11, func_00196730(func_00196E10(), new_var11));
        func_001D2CD8(&sp10, new_var);
        D_002AD390(new_var);
        D_002AD390(sp20);
      }
      else
      {
        new_var6 = (new_var8 = (new_var3 = sp));
        ;
        temp_16 = func_001E4280();
        new_var5 = 0x34;
        func_00107EF8(sp20, arg0, new_var11, new_var2);
        func_001D2CD8(new_var6, *((s32 *) (((char *) ((func_00196730(func_00196E10(), temp_17) * new_var5) + temp_16_3)) + 0x1C)));
        func_001D2CD8(new_var10, sp20);
        D_002AD390(sp20);
        sp10 = sp20;
        D_002AD390(sp10);
      }
      new_var4 = ((char *) (temp_16_3 + (func_00196730(func_00196E10(), new_var11) * 0x34))) + 0x1C;
      do
      {
      }
      while (0);
      func_001D2CD8(sp, *((s32 *) new_var4));
    }
  }
}

