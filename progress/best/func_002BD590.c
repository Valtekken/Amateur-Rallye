extern unsigned int func_0040AF58(void);
extern void func_0040AFA0(void);
extern void func_002BD8E0(void *, void *);
extern void func_002BCA88(void *, int *, int *, int *, int *, int *, int *);
extern void func_002BCDA8(int);
extern void func_002BCE48(void *);
extern int D_0042D440;
int func_002BD590(void *arg0, void *arg1, int arg2)
{
  int *new_var4;
  void **new_var;
  int sp0;
  int sp4;
  int sp8;
  int spC;
  int sp10;
  int sp14;
  char *new_var3;
  int v8;
  int v4;
  int new_var2;
  void *new_var5;
  char *new_var6;
  if (1)
  {
    func_0040AF58();
  }
  new_var5 = arg1;
  new_var3 = ((char *) new_var5) + 8;
  new_var6 = new_var3;
  arg0 = *((void **) (((char *) (*((void **) (((char *) new_var5) + 0xC)))) + 8));
  func_0040AFA0();
  new_var4 = &sp14;
  new_var = &arg1;
  if (0 != arg2)
  {
    func_002BD8E0(arg0, arg0);
  }
  if ((*((int *) (((char *) arg0) + 0x58))) != 0)
  {
    func_002BCA88(arg0, &sp0, &sp4, &sp8, &spC, &sp10, new_var4);
    func_002BCDA8(sp10);
    v8 = sp8;
    v4 = (*((int *) (((char *) new_var5) + 0)) = sp4);
    *((int *) new_var6) = 0;
    *((int *) (((char *) (*new_var)) + 4)) = v8;
    func_002BCE48(arg0);
    D_0042D440 = (new_var2 = 0);
  }
  return new_var2;
}

