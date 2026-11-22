extern char D_0044BD40[], D_0044BD58[];
extern void D_0044CCC0;
extern void func_001D4040(void *, const char *);
void *func_00142EC8(void *arg0)
{
  u32 n[4];
  int new_var;
  int new_var4;
  func_001D4040(n, D_0044BD40);
  new_var4 = -1;
  {
    s32 *p = (s32 *) arg0;
    p[9] = (p[4] = 0);
    new_var = 0;
    p[3] = 0;
    p[1] = (s32) n[new_var];
    p[0] = new_var4;
    p[2] = (s32) ((u32) (&D_0044CCC0));
    func_001D4040(p + 4, D_0044BD58);
    p[5] = 0x3C;
  }
  return arg0;
}
