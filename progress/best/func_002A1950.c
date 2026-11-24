extern void *D_002AD408(int size);
extern void func_001DF2B0(void *a0, int a1, int a2);
extern int func_00222D40(void *a0, void *a1);
extern char D_0044DD18[];
extern int D_00494C18;
void *func_002A1950(void)
{
  void *new_var;
  void *obj;
  unsigned int new_var2;
  char *sub;
  int v;
  char spbuf[0x20];
  obj = D_002AD408(0x24);
  *((char **) (((char *) obj) + 0x10)) = D_0044DD18;
  new_var = obj;
  sub = ((char *) obj) + 0x14;
  v = D_00494C18;
  new_var2 = 0x08;
  *((int *) (((char *) obj) + new_var2)) = 0;
  *((int *) (((char *) new_var) + 0x0C)) = 0;
  *((int *) (((char *) obj) + 0x04)) = 0;
  *((int *) (((char *) obj) + 0x00)) = 0;
  *((int *) sub) = 0;
  *((int *) (sub + new_var2)) = 0;
  *((int *) (sub + 0x04)) = 0;
  *((int *) (((char *) obj) + 0x20)) = v;
  func_001DF2B0(obj, func_00222D40(&spbuf[0x10], sub), 0);
  return obj;
}

