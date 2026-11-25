extern void func_001D4040(void *, const char *);
extern int func_001D2458(void *, const char *);
extern void func_001D2900(void *, const char *);
extern void func_001E3E90(int, void *, float);
extern void D_002AD390(void *);
extern char D_0044BDF8[];
extern char D_0044CC40[];
extern char D_00471910[];
extern char *D_0048E110[];
void *func_00144718(void *arg0)
{
  int name[4];
  int *p = (int *) arg0;
  int new_var2;
  void **new_var;
  int v;
  int *new_var4;
  func_001D4040(name, D_0044BDF8);
  v = name[0];
  new_var2 = 0;
  p[5] = 0;
  p[3] = 0;
  new_var2 = v;
  p[1] = new_var2;
  p[0] = -1;
  p[2] = (int) D_0044CC40;
  new_var4 = 5 + p;
  func_001D4040(new_var4, (const char *) new_var2);
  new_var = &arg0;
  return *new_var;
}

void func_00195C68(int arg0, float arg1);
