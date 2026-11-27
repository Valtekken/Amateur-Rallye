extern void func_001D4040(char *, const char *);
extern f32 func_001E3610(s32, void *);
extern char D_0044F648[];
extern char D_0044F660[];
extern char D_0044F678[];
extern char D_0044F690[];
typedef struct 
{
  s32 a;
  s32 b;
  s32 c;
  f32 d;
  f32 e;
  s32 f;
} S;
inline f32 inline_fn(s32 arg0, char *arg1)
{
  return func_001E3610(arg0, arg1);
}

S *func_0016A588(S *p)
{
  char buf[16];
  f32 a;
  f32 b;
  f32 c;
  f32 d;
  p->a = 0;
  p->b = 0;
  p->c = 0;
  p->f = 0;
  {
    s32 t = func_001E4280();
    func_001D4040(buf, D_0044F648);
    a = inline_fn(t, buf);
  }
  {
    s32 t = func_001E4280();
    func_001D4040(buf, D_0044F660);
    b = inline_fn(t, buf);
  }
  {
    s32 t = func_001E4280();
    func_001D4040(buf, D_0044F678);
    c = inline_fn(t, buf);
  }
  {
    s32 t = func_001E4280();
    func_001D4040(buf, D_0044F690);
    d = inline_fn(t, buf);
  }
  c += d;
  a = (b + a) - ((b + a) * 0.15f);
  c -= c * 0.05f;
  p->d = a * a;
  p->e = c * c;
  return p;
}

