extern int D_00426844;
extern char D_0047AD68[];
extern char D_00494B38[];
extern void func_001D4040(void *, const char *);
extern void func_002973F0(void *, int);
typedef struct 
{
  int pad[4];
  int count;
  int *input;
  int state;
  int a;
  int b;
  int c;
  int d;
  int la;
  int lb;
  int lc;
  int ld;
} Obj;
void func_002987C8(register Obj *o)
{
  int local[1];
  int out;
  int send;
  int flag;
  register int x;
  register int y;
  register int w;
  register int u;
  register int z;
  register int v;
  register int *p;
  if (!D_00426844)
  {
    func_001D4040(D_00494B38, D_0047AD68);
    D_00426844 = 1;
  }
  if (func_001E3650(func_001E4280(), (int) D_00494B38) > 0)
  {
    return;
  }
  if ((++o->count) == 1)
  {
    local[0] = 0;
    func_002973F0(local, 0);
  }
  local[0] = 0;
  out = (send = 0);
  p = o->input;
  x = p[11];
  y = p[12];
  u = p[7];
  z = p[8];
  w = p[9];
  v = p[10];
  if (!x)
  {
    o->a = 0;
    o->la = 25;
  }
  if (!y)
  {
    o->b = 0;
    o->lb = 25;
  }
  if (!w)
  {
    o->c = 0;
    o->lc = 14;
  }
  if (!z)
  {
    o->d = 0;
    o->ld = 14;
  }
  if (u)
  {
    out = 4;
  }
  else
    if (v)
  {
    out = 5;
  }
  else
    if (x)
  {
    flag = (o->state == 2) || (o->state == 8);
    if ((++o->a) > o->la)
    {
      o->a = 0;
      o->la = 25;
      flag = 0;
    }
    out = (flag) ? (8) : (2);
  }
  else
    if (y)
  {
    flag = (o->state == 3) || (o->state == 9);
    if ((++o->b) > o->lb)
    {
      o->b = 0;
      o->lb = 25;
      flag = 0;
    }
    out = (flag) ? (9) : (3);
  }
  else
    if (z)
  {
    out = 1;
    if ((++o->d) > o->ld)
    {
      o->d = 0;
      o->ld = 3;
      o->state = 0;
    }
  }
  else
    if (w)
  {
    out = 7;
    if ((++o->c) > o->lc)
    {
      o->c = 0;
      o->lc = 3;
      o->state = 0;
    }
  }
  if (((o->state != out) || (out == 8)) || (out == 9))
  {
    send = out;
  }
  o->state = out;
  func_002973F0(local, send);
}

