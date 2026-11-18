extern s32 func_001E4280(void);
extern volatile unsigned char func_001D2458(void *, const char *);
extern void func_001E3FE0(s32, void *, void *);
extern void D_002AD390(void *);
extern char D_004486D8[];
extern char D_00448BF8[];
extern char D_00444878[];
void func_00129268(void)
{
  s32 sp0[4];
  s32 sp10[4];
  s32 sp20[4];
  s32 k;
  k = func_001E4280();
  func_001D2458(sp0, D_004486D8);
  func_001D2458(sp10, D_00444878);
  func_001E3FE0(k, sp0, sp10);
  D_002AD390((void *) sp10[0]);
  D_002AD390((void *) sp0[0]);
  k = func_001E4280();
  func_001D2458(sp0, D_00448BF8);
  func_001D2458(sp20, D_00444878);
  func_001E3FE0(k, sp0, sp20);
  D_002AD390((void *) sp20[0]);
  D_002AD390((void *) sp0[0]);
}

