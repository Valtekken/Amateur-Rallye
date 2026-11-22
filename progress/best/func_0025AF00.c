inline void *inline_fn(void *arg0)
{
  return arg0;
}

inline void *inline_fn2(void *arg0)
{
  return arg0;
}

void func_0025AF00(void *a, void *b, void *c, void *d)
{
  void *new_var;
  void *new_var4;
  void *new_var2;
  void *new_var3;
  new_var3 = d;
  new_var2 = inline_fn(a);
  new_var4 = new_var2;
  new_var = new_var4;
  (void) new_var;
  ;
  new_var2 = inline_fn2(b);
  (void) new_var2;
  new_var2 = c;
  new_var2;
  (void) new_var3;
}

