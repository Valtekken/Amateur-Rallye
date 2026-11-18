extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern s32 func_001E3650(s32, s32);
extern void func_0011C760(void *, void *, s32);
extern s32 func_00297500(void);
extern s32 func_002971B0(s32);
extern char D_00445D80[];
extern char D_00446628[];
inline void **inline_fn(void *arg0, u32 arg1)
{
  return (void **) ((((char *) arg0) + (arg1 * 4)) + 4);
}

void func_0011B620(void *arg0, void *arg1)
{
  s32 kb[4];
  s32 k = func_001E4280();
  func_001D4040(kb, D_00445D80);
  if (func_001E3650(k, (s32) kb) > 0)
  {
    return;
  }
  u32 idx = *((u32 *) (((char *) arg0) + 0x14));
  void *v = (idx < 4U) ? (*inline_fn(arg1, idx)) : (0);
  if (v == 0)
  {
    return;
  }
  func_001D4040(kb, D_00446628);
  if ((*((s32 *) (((char *) v) + 4))) != kb[0])
  {
    return;
  }
  s32 n = *((s32 *) (((char *) arg0) + 0xC));
  if ((*((s32 *) (((char *) arg0) + 0x10))) > 0)
  {
    s32 sel = func_002971B0(func_00297500());
    if ((*((s32 *) (((char *) arg0) + 0x10))) == sel)
    {
      n = n + 1;
    }
  }
  func_0011C760(v, arg1, n);
}

