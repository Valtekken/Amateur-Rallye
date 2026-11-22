extern s32 func_001FDE60(void);
extern void *func_001FDBA8(s32, void *);
extern void **func_001D6BB0(void);
extern s32 func_001E3650(s32, s32);
extern s32 func_001E4280(void);
extern void *func_001E3820(s32, s32, void *);
extern s32 D_0040E5EC;
extern char D_0040E698[];
extern char D_0040E818[];
typedef struct 
{
  u8 pad0[0x10];
  s32 unk10;
  s32 unk14;
  void *unk18;
  u8 pad1C[0x8];
  s32 unk24;
  u8 pad28[0x8];
  void *unk30;
  u8 pad34[0x8];
  s32 unk3C;
  s32 unk40;
  s32 unk48;
  s32 unk54;
  s32 unk60;
  s32 unk70;
  f32 unk74;
  f32 unk78;
  f32 unk7C;
  f32 unk80;
  f32 unk84;
  f32 unk88;
} S_47038;
inline int inline_fn(s32 arg0, int arg1)
{
  return arg0 >= arg1;
}

void func_00147038(S_47038 *arg0)
{
  void *new_var2;
  volatile unsigned int new_var5;
  void *new_var3;
  s32 new_var4;
  volatile int new_var;
  void *p;
  if (func_001FDBA8((double) func_001FDE60(), &D_0040E818) != 0)
  {
    void **new_var7;
    void *new_var8;
    s32 n = D_0040E5EC + 1;
    D_0040E5EC = n;
    new_var = (new_var = 0x10);
    ;
    new_var7 = func_001D6BB0();
    if (inline_fn(n, new_var))
    {
      void **ctx = new_var7;
      void *v = *ctx;
      new_var4 = n;
      new_var7 = &v;
      if (new_var4)
      {
        if (n)
        {
          (void) new_var2;
          new_var2 = (new_var3 = *new_var7);
        }
        else
        {
          do
          {
            new_var8 = (new_var3 = v);
            if (ctx || new_var4)
            {
              (void) new_var2;
              new_var2 = new_var8;
            }
            else
            {
              (void) new_var2;
              new_var3 = (new_var3 = v);
              new_var2 = new_var3;
            }
          }
          while (0);
        }
      }
      else
      {
        if ((n && n) && n)
        {
        }
        new_var3 = v;
      }
    }
  }
}

