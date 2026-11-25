extern s32 func_001930D8(s32, s32);
extern s32 func_00193138(s32, s32);
extern s32 func_00193B60(void);
extern volatile char func_001D4040(void *, const char *);
extern void func_0021E4F0(void *);
extern void func_0029EA38(s32);
extern void func_0029ECB8(s32, const char *);
extern void func_003FA310(void *, const char *, s32);
extern char D_0044BD80[];
extern char D_0044BE20[];
void func_0014BF38(s32 *arg0, s32 *arg1)
{
  s32 v;
  char buf[128];
  if (func_00193138(func_00193B60(), arg0[3]) == 0)
  {
    func_0021E4F0(arg1);
  }
  func_003FA310(buf, D_0044BD80, func_001930D8(func_00193B60(), arg0[3]));
  func_001D4040(arg0 + 5, buf);
  arg0[6] = -1;
  v = arg1[1];
  if (v != 0)
  {
    func_0029EA38(v);
    func_0029ECB8(v, D_0044BE20);
    return;
  }
  func_0021E4F0(arg1);
}

