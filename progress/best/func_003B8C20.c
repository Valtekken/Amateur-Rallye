typedef void (*Handler)(void);
extern Handler D_00437E58;
extern char D_00439570[];
extern char D_00487FA0[];
extern Handler func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void *, void *);
extern void func_003D4F40(void *);
void func_003B8C20(int p)
{
  Handler h;
  int new_var;
  void (*raise_error)(void *) = func_003D4F40;
  new_var = p;
  do
  {
    h = D_00437E58;
    if (!h)
    {
      char *msg = D_00487FA0;
      raise_error(func_003D4938(D_00439570, msg));
      new_var = 1;
      h = func_002ABA80(new_var);
    }
    h();
  }
  while (!func_002B1FC0(new_var));
}

