extern unsigned char D_00478490[];
extern unsigned long func_00207230(void *);
void *func_00208B40(void *arg0)
{
  int *p = arg0;
  int *a;
  int *b;
  int *c;
  int *d;
  volatile int tmp[16];
  func_00207230(arg0);
  p[10] = 0;
  a = p + 10;
  p[9] = (int) D_00478490;
  b = p + 13;
  a[1] = 0;
  a[2] = 0;
  c = p + 16;
  p[13] = 0;
  b[1] = 0;
  b[2] = 0;
  d = p + 19;
  p[16] = 0;
  c[1] = 0;
  c[2] = 0;
  p[19] = 0;
  d[1] = 0;
  d[2] = 0;
  return arg0;
}

