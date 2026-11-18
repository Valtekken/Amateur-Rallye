extern s32 D_004411A8;
extern s32 D_0049FF80;
extern s32 D_004A0BC0;
extern s32 D_004A1240;
extern s32 func_00405E90(s32 *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);
extern s32 func_00406B18(s32);
extern s32 func_00406B48(void);
extern s32 func_00406C18(void);
extern s32 CreateSema_2(s32 *, s32);
extern s32 DeleteSema_2(s32);
extern s32 WaitSema_2(s32);
unsigned short func_00409008(char arg0, volatile int arg1)
{
  s32 *new_var5;
  s32 *new_var3[2];
  s32 *new_var4;
  volatile unsigned long new_var;
  char new_var2;
  new_var = 0;
  new_var4 = new_var3[1];
  if (arg0)
  {
 do { arg1 = arg0; } while (0);
    new_var3[1] = &(*(new_var3[0] = &arg0));
    (void) arg0;
    (void) (*new_var4);
    return 0 ^ 0;
  }
  else
  {
    new_var5 = (new_var3[0] = &arg0);
    new_var2 = (unsigned short) arg0;
    do
    {
      arg1 = new_var2;
      new_var3[1] = &(*new_var5);
      (void) new_var2;
    }
    while (new_var);
    (void) (*new_var4);
    return 0 ^ 0;
  }
}
