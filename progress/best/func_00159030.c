typedef struct E
{
  s32 a;
  s32 b;
} E;
typedef struct V
{
  E *begin;
  E *end;
  E *cap;
} V;
extern void D_002AD390(s32);
extern s32 func_001DF180(void *, s32);
extern s32 func_002B2028(void *);
extern u32 D_0040E618[];
inline u32 inline_fn(u32 arg0)
{
  return arg0;
}

void func_00159030(void *obj, s32 flag)
{
  V *v = (V *) (((char *) obj) + 20);
  E *p = v->begin;
  u32 new_var;
  E *end = v->end;
  int new_var2;
  while (p < end)
  {
    D_002AD390(p->b);
    ++p;
    do
    {
    }
    while (0);
  }

  end = v->cap;
  {
    E *b = v->begin;
    s32 n = end - b;
    if (n)
    {
      if (n * 8)
      {
        func_002B2028(b);
      }
      else
      {
        *((u32 *) b) = D_0040E618[-1];
        new_var = (u32) b;
        new_var2 = -1;
        D_0040E618[new_var2] = inline_fn(new_var);
      }
    }
 do { } while (0);
  }
  func_001DF180(obj, flag);
}
