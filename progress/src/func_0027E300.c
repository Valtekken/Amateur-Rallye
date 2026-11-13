extern void *D_002AD408(int);
extern void func_001D4040(void *, const char *);
extern unsigned long func_001E2460(void *, void *);
extern void func_001E2C08(void *, const char *, float);
extern void func_001E2E38(void *, const char *, void *);
extern char D_0044DD18[];
extern char D_0047ACF0[];
extern char D_0047AD00[];
extern char D_0047AD18[];
extern char D_0047AD20[];
extern char D_0047AD28[];
void *func_0027E300(char *arg)
{
  char key[0x20];
  char writer[0x10];
  char *obj;
  char *p;
  int v;
  obj = D_002AD408(0x24);
  func_001D4040(key, D_0047ACF0);
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
  func_001E2E38(writer, D_0047AD00, arg + 0x18);
  func_001E2C08(writer, D_0047AD18, *((float *) (arg + 12)));
  func_001E2C08(writer, D_0047AD20, *((float *) (arg + 16)));
  func_001E2C08(writer, D_0047AD28, *((float *) (arg + 20)));
  return obj;
}

