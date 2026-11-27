extern s32 func_0021F4B0(void);
extern s32 func_0021E9C0(s32, void *);
extern void func_00265E80(void *, void *);
extern void *D_002AD408(s32);
extern s32 func_0017DF20(void *, void *);
extern void func_00263230(void *, s32);
void func_00172A58(void *arg0, void *arg1, s32 arg2, void *arg3)
{
  void **new_var;
  s32 count = ((*((s32 *) (((char *) arg0) + 0x18))) - (*((s32 *) (((char *) arg0) + 0x14)))) >> 2;
  s32 i = 0;
  s32 stride;
  if (count <= 0)
  {
    return;
  }
  stride = arg2 * 0x190;
  do
  {
    void *elem = *(new_var = (void **) ((*((s32 *) (((char *) arg0) + 0x14))) + (i * 4)));
    s32 *pv = (s32 *) (((char *) elem) + 0x20);
    s32 v = *pv;
    s32 key;
    s32 val;
    if (v == 0)
    {
      *pv = func_0021E9C0(func_0021F4B0(), ((char *) elem) + 0x1C);
    }
    v = *pv;
    key = *((s32 *) arg1);
    val = *((s32 *) (((char *) v) + 0x5C));
    if (val == key)
    {
      char *base = (char *) ((*((s32 *) (((char *) elem) + 0x10))) + stride);
      s32 sp0;
      *((s32 *) (base + 0x188)) = *((s32 *) (((char *) arg3) + 0x5C));
      func_00265E80(&sp0, arg3);
      *((s32 *) (base + 0x184)) = sp0;
      func_00263230(*((void **) (((char *) arg3) + 0x50)), func_0017DF20(D_002AD408(0x1C), base));
    }
    i++;
  }
  while (i < count);
}

