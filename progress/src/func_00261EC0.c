extern void *D_002AD408(int);
extern void func_001D4040(void *, const char *);
extern unsigned long func_001E2460(void *, void *);
extern void func_001E2C08(void *, const char *, float);
extern void func_001E2E38(void *, const char *, void *);
extern char D_0044DD18[];
extern char D_00479BA8[];
extern char D_00479BE8[];
extern char D_00479BF0[];
extern char D_00479C00[];
extern char D_00479C10[];

void *func_00261EC0(char *arg)
{
  char key[0x20];
  char writer[0x10];
  char *obj;
  char *p;
  int v;
  obj = D_002AD408(0x24);
  func_001D4040(key, D_00479BA8);
  v = *((int *) key);
  p = obj + 0x14;
  *((void **) (obj + 0x10)) = D_0044DD18;
  *((int *) (obj + 8)) = 0;
  *((int *) (obj + 12)) = 0;
  *((int *) (obj + 4)) = 0;
  *((int *) obj) = 0;
  *((int *) (obj + 0x14)) = 0;
  *((int *) (p + 4)) = 0;
  *((int *) (p + 8)) = 0;
  *((int *) (obj + 0x20)) = v;
  func_001E2460(writer, obj);
  func_001E2E38(writer, D_00479BE8, arg + 0x14);
  func_001E2C08(writer, D_00479BF0, *((float *) (arg + 0x1C)));
  func_001E2C08(writer, D_00479C00, *((float *) (arg + 0x18)));
  func_001E2C08(writer, D_00479C10, *((float *) (arg + 0x20)));
  return obj;
}
