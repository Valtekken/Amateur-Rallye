extern s32 PollSema_2(s32);
extern s32 SignalSema_2(s32);
extern char *func_003FAD88(char *, const char *, s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 D_004361F0;
extern s32 D_004361F4;
typedef struct 
{
  s32 w[10];
} Rpc10;
extern Rpc10 D_0049BC40;
extern char D_0049BD04[];
extern s32 D_0049D200[];
s32 func_003CC348(s32 arg0, s32 arg1, char *arg2, s32 arg3)
{
  s32 r;
  s32 *new_var2;
  char *p;
  int new_var;
  if (PollSema_2(D_004361F4) < 0)
  {
    new_var = -200;
    return new_var;
  }
  if (!D_0049BC40.w[9])
  {
    SignalSema_2(D_004361F4);
    return -100;
  }
  if ((!arg2) || (!(*arg2)))
  {
    SignalSema_2(D_004361F4);
    return -210;
  }
  func_003FAD88(D_0049BD04, arg2, 1023);
  p = D_0049BD04 - 20;
  *((s32 *) p) = arg0;
  *((s32 *) (p + 4)) = arg1;
  new_var2 = (s32 *) (p + 8);
  *new_var2 = arg3;
  p[1043] = 0;
  r = func_00405E90(&D_0049BC40, 2, 1, p, 1044, D_0049D200, 4, 0, 0);
  if (!r)
  {
    D_004361F0 = 2;
  }
  else
  {
    SignalSema_2(D_004361F4);
  }
  return r;
}

