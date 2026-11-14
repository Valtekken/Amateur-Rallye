struct vec
{
  void *begin;
  void *end;
  void *cap;
};
u32 func_003A4070(struct vec *);
s32 func_003A3B08(struct vec *);
void *func_003AC308(struct vec *, u32, void *, void *);
void func_003A37C0(void *, void *);
void func_003A36D0(struct vec *, void *, s32);
void func_003A4238(register struct vec *arg0, register u32 arg1)
{
  int new_var;
  s32 new_var2;
  if (func_003A4070(arg0) < arg1)
  {
    register s32 count = func_003A3B08(arg0);
    void *new_end = func_003AC308(arg0, arg1, arg0->begin, arg0->end);
    func_003A37C0(arg0->begin, arg0->end);
    func_003A36D0(arg0, arg0->begin, (new_var = arg0->cap - arg0->begin) >> 2);
    arg0->begin = new_end;
    new_var2 = count;
    arg0->end = new_end + (new_var2 * 4);
    arg0->cap = arg0->begin + (arg1 * 4);
  }
}

