extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern s32 func_001E3598(s32, void *);
extern void *func_001E37E8(s32, void *);
extern void func_0013D868(void *);
extern void func_0013B560(void *);
extern void func_0013B638(void *);
extern void func_0013BAD0(void *);
extern const char D_0044AF60[];
extern const char D_0044B050[];
void func_0013BC40(void *arg0, s32 arg1)
{
  s32 config;
  char buf[16];
  void *result;
  config = func_001E4280();
  func_001D4040(buf, D_0044AF60);
  if (func_001E3598(config, buf) != 0)
  {
 do { return; } while (0);
  }
  if (arg1 != 0)
  {
    s32 val = *((s32 *) (((char *) arg0) + 0x10));
    if (val <= 0)
    {
      return;
    }
    *((s32 *) (((char *) arg0) + 0x10)) = val - 1;
  }
  else
  {
    config = func_001E4280();
    func_001D4040(buf, D_0044B050);
    result = func_001E37E8(config, buf);
    s32 val = (*((s32 *) (((char *) arg0) + 0x10))) + 1;
    s32 max = ((*((s32 *) (((char *) result) + 4))) - (*((s32 *) result))) >> 2;
    if (((u32) val) >= ((u32) max))
    {
      return;
    }
    *((s32 *) (((char *) arg0) + 0x10)) = val;
  }
  func_0013D868(arg0);
  func_0013B560(arg0);
  func_0013B638(arg0);
  func_0013BAD0(arg0);
  *((s32 *) (((char *) arg0) + 0x40)) = 2;
}
