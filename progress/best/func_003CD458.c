extern s32 PollSema_2(s32);
extern s32 SignalSema_2(s32);
extern void *func_003FAD88(void *, void *, s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern void FlushCache_2(s32);
extern s32 D_004361F0;
extern s32 D_004361F4;
extern s32 D_0049BC40[];
extern s32 D_0049BCF0;
extern s32 D_0049BCA0;
extern s32 D_0049D200;
s32 func_003CD458(s32 arg0, s32 arg1, char *arg2, char *arg3)
{
  char *new_var;
  if (PollSema_2(D_004361F4) < 0)
  {
    return -0xC8;
  }
  if (D_0049BC40[9] == 0)
  {
    SignalSema_2(D_004361F4);
    return -0x64;
  }
  if ((arg2 == 0) || ((*arg2) == 0))
  {
    SignalSema_2(D_004361F4);
    return -0xD2;
  }
  if (arg3 == 0)
  {
    if (arg1)
    {
      SignalSema_2(D_004361F4);
      return -0xD2;
    }
    else
    {
      SignalSema_2(D_004361F4);
      return -0xD2;
    }
  }
  *((s32 *) (&D_0049BCF0)) = arg0;
  new_var = ((char *) (&D_0049BCF0)) + 0x14;
  *((s32 *) (((char *) (&D_0049BCF0)) + 4)) = arg1;
  *((s32 *) (((char *) (&D_0049BCF0)) + 8)) = 0x10;
  func_003FAD88((void *) new_var, arg2, 0x3FF);
  *(((char *) (&D_0049BCF0)) + 0x413) = 0;
  func_003FAD88((void *) (&D_0049BCA0), arg3, 0x20);
  arg2 = (void *) (((char *) (&D_0049BCA0)) - 0x20);
  *((void **) (((char *) (&D_0049BCF0)) + 0x10)) = arg2;
  *(((char *) arg2) + 0x3F) = 0;
  FlushCache_2(0);
  arg0 = func_00405E90((void *) D_0049BC40, 0xE, 1, (void *) (&D_0049BCF0), 0x414, (void *) (&D_0049D200), 4, 0, 0);
  if (arg0 == 0)
  {
    D_004361F0 = 0x13;
  }
  else
  {
    SignalSema_2(D_004361F4);
  }
  return arg0;
}

