typedef struct E28
{
  u32 data[7];
} E28;
typedef struct V28
{
  E28 *b;
  E28 *e;
  E28 *c;
  void *unkC;
} V28;
extern u32 D_0040E618[];
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern void func_001E3990(void *);
extern void func_001515C8(void *);
extern void func_001E5DE8(void *, s32);
void func_001E4338(V28 *v, int flags)
{
  V28 *x = v;
  E28 *e;
  E28 *begin;
  E28 *p;
  E28 *cap;
  int n;
  func_001E3990(x);
  func_001515C8(&x->unkC);
  func_002B2028(x->unkC);
  e = x->e;
  begin = x->b;
  if (begin < e)
  {
    do
    {
      func_001E5DE8(begin, 2);
      begin++;
    }
    while (begin < e);
 do { } while (0);
  }
  cap = x->c;
  p = x->b;
  n = cap - p;
  if (n)
  {
    if (n * 28)
    {
      func_002B2028(p);
    }
    else
    {
      *((u32 *) p) = D_0040E618[-1];
      D_0040E618[-1] = (u32) p;
    }
  }
  if (flags & 1)
  {
    D_002AD390(x);
  }
}
