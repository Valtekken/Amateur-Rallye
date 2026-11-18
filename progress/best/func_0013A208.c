extern void *D_002AD408(int n);
extern void func_0011DA70(void *p);
extern void *func_00110430(void *p, int n);
extern void func_00110158(void *p);
extern void *func_00297500(void *p, int n);
extern void func_002971B0(void);
extern volatile unsigned long func_00297398(void *p);
extern int func_001E4280(void);
extern void func_001D4040(void *buf, const char *key);
extern void func_001E3D10(void *a, void *b);
extern void *func_00194C40(void *a, int b);
extern void *func_00193FD8(void);
extern void *func_0017E620(void);
extern void func_001D2458(void *buf, void *val);
extern void *func_001D2488(void *p);
extern void func_001535C8(void *vec, void *val);
extern void D_002AD390(void *p);
extern void func_001942E8(void);
extern void func_0013BB70(void *a, void *b);
extern void func_0010F9F0(void *a, void *b, int c);
extern void func_00193B60(void);
extern void func_00191630(void);
extern void func_00110050(void);
extern void func_0013BE18(void *a);
extern void func_00196028(void);
extern void func_00195700(void *a, int b);
extern void func_0013D868(void);
extern void func_0013B638(void *a);
extern void func_0013B560(void *a);
extern void func_00194738(void);
extern void func_001E4040(void *a, void *b, int c);
extern void func_001E3EC0(void *a, void *b, int c, int d);
extern void func_001E3FE0(void *a, void *b);
extern void func_001E3598(void *a, void *b);
extern void func_001E3750(void *a, void *b);
extern void func_0011A918(void *a, void *b, void *c);
extern void func_0011AD90(void);
extern void func_00196E10(void);
extern void func_001965A8(void);
extern char D_0044AF60[];
extern char D_00447E10[];
extern char D_0044AF88[];
extern char D_0044AFA8[];
extern char D_0044AFC8[];
extern char D_0044AFE8[];
extern char D_0044B008[];
extern char D_0044B030[];
extern char D_0044B050[];
extern char D_0044B078[];
extern char D_00445DC0[];
extern char D_00445B78[];
extern char D_00445B90[];
extern char D_00444878[];
struct Vec
{
  void *begin;
  void *end;
  void *cap;
};
struct Obj
{
  s32 f0C;
  s32 f10;
  s32 f2C;
  u32 f30;
};
inline void *inline_fn(int arg0)
{
  return func_00297500((void *) 0xC, arg0);
}

void func_0013A208(struct Obj *arg0)
{
  void *r;
  int new_var3;
  void *new_var2;
  int new_var9;
  void *v;
  void *new_var17;
  void **new_var18;
  void *new_var4;
  void *new_var6;
  void *obj;
  void *new_var8;
  void *s4;
  void *new_var7;
  void *new_var15;
  void *new_var;
  void **new_var20;
  void *new_var16;
  void *new_var10;
  void *new_var14;
  void *s16;
  struct Vec *vec;
  void *new_var5;
  void **new_var13;
  int new_var11;
  int counter = 0;
  struct Vec **new_var12;
  void *buf;
  void *new_var19;
  new_var19 = D_002AD408(0x10);
  new_var16 = (new_var = inline_fn(1));
  s16 = new_var19;
  r = s16;
  new_var11 = 6;
  new_var = (v = func_00110430(r, new_var11));
  new_var2 = D_002AD408(0xC);
  func_0011DA70(r);
  arg0->f0C = v;
  new_var9 = -1;
  new_var3 = new_var9;
  func_00110158(v);
  func_002971B0();
  if (v != ((void *) new_var3))
  {
    v = func_00297500(v, 1);
  }
  else
    if (D_0044B008)
  {
    v = func_00297500((void *) 0xC, 1);
    do
    {
      func_00297398(v);
    }
    while (0);
  }
  else
  {
    v = new_var16;
    func_00297398(v);
  }
  v = func_00297500(v, 1);
  vec = new_var2;
  vec->begin = 0;
  vec->end = 0;
  obj = (void *) func_001E4280();
  new_var17 = v;
  s4 = (buf = 0);
  func_001D4040(buf, D_00447E10);
  func_001E4280();
  arg0->f2C = (s32) obj;
  func_001D4040(r = s4, D_0044AF60);
  func_001D4040(new_var6, buf);
  r = r;
  func_001E3D10(obj, r);
  new_var13 = &vec->end;
  func_00194C40(obj, 0);
  obj = func_00193FD8();
  vec->cap = 0;
  new_var12 = &vec;
  new_var20 = &r;
  if (obj != 0)
  {
  }
  if (obj)
  {
    func_001942E8();
    func_001E4280();
    new_var15 = *new_var20;
    new_var7 = vec->begin;
    func_001D4040(*new_var20, D_0044AF60);
    func_001E3D10(obj, *new_var20);
    func_001E4280();
    func_001D4040(new_var15, D_0044B008);
    func_0013BB70(arg0, v);
    new_var12 = &(*new_var12);
    new_var5 = (void *) ((*new_var12)->end + 4);
    (*new_var12)->end = new_var5;
    func_001D2488(new_var7);
    if (1)
    {
      func_001D2458(r, obj);
    }
  }
  else
  {
    new_var10 = (buf = (*new_var12)->begin);
    func_0017E620();
    if (*new_var12)
    {
      new_var14 = v;
      if (!new_var14)
      {
        new_var18 = &(*new_var20);
        if (arg0 || (*new_var20))
        {
          D_002AD390(r);
          func_001942E8();
          func_0013BB70(arg0, v);
          func_001E4280();
          func_0013BB70(arg0, v);
          new_var6 = *new_var20;
          func_001D4040(new_var6, D_0044AF60);
          func_001E3D10(obj, *new_var18);
          func_001E4280();
          buf = D_0044B008;
          func_0013BB70(arg0, v);
        }
        else
        {
          func_001942E8();
          func_0013BB70(arg0, v);
          func_0013BB70(arg0, v);
          D_002AD390(*new_var20);
          func_001E4280();
          new_var6 = *new_var20;
          func_001D4040(new_var6, D_0044AF60);
          func_001E3D10(obj, r);
          func_001E4280();
          func_001D4040(new_var6, buf);
          buf = D_0044B008;
          func_0013BB70(arg0, v);
        }
        do
        {
          new_var7 = new_var6;
          func_001D2458(new_var7, obj);
          func_001D2488((*vec).begin);
          vec->end = (void *) ((obj = (char *) vec->end) + 4);
          D_002AD390(new_var4 = new_var15);
        }
        while (0);
      }
      else
      {
        func_001942E8();
        func_0013BB70(arg0, v);
        D_002AD390(r);
        func_001E4280();
        func_0013BB70(arg0, v);
        func_001D4040(*new_var20, D_0044AF60);
        func_001E3D10(obj, *new_var20);
        func_001E4280();
        func_001D4040(r, buf);
        arg0 = arg0;
        buf = D_0044B008;
        func_0013BB70(arg0, new_var17);
        func_001D2458(*new_var20, obj);
        func_001D2488(vec->begin);
        (*new_var12)->end = (void *) ((obj = (char *) (*new_var12)->end) - (-4));
        D_002AD390(new_var4 = new_var15);
      }
    }
    else
    {
      func_001942E8();
      func_0013BB70(arg0, v);
      func_0013BB70(arg0, v);
      func_001E4280();
      func_001D4040(*new_var20, D_0044AF60);
      func_001E3D10((char *) (*new_var12)->end, new_var8 = new_var15);
      func_001E4280();
      func_001D4040(*new_var20, buf);
      buf = D_0044B008;
      func_0013BB70(arg0, v);
      func_001D2458(r, (char *) (*new_var12)->end);
      func_001D2488(new_var10);
      (*new_var12)->end = (void *) ((obj = (char *) (*new_var13)) + 4);
      D_002AD390(new_var4 = new_var7);
    }
  }
}

