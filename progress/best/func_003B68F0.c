typedef void (*Handler)(void);
extern Handler D_00437E58;
extern char D_00439570[];
extern char D_00487F40[];
extern Handler func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void *, void *);
extern void func_003D4F40(void *);
void func_003B68F0(int p)
{
  Handler h;
  int new_var2;
  int new_var;
  Handler new_var3;
  new_var = p;
  new_var2 = new_var;
  do
  {
    new_var3 = D_00437E58;
    h = new_var3;
    if (!h)
    {
      char *msg = D_00487F40;
      void (*raise_error)(void *) = func_003D4F40;
      raise_error(func_003D4938(D_00439570, msg));
      new_var2 = 1;
      h = func_002ABA80(new_var2);
    }
    h();
  }
  while (!func_002B1FC0(new_var2));
}

