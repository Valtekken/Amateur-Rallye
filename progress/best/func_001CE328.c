typedef struct 
{
  void *field_0;
  void *field_4;
  void *field_8;
  void *field_C;
  void *start;
  void *end;
  void *capacity;
} S_func_001CE328_arg0;
extern s32 D_002AD390(s32);
extern void func_001DF180(void *, s32);
extern void func_002B2028(u32);
extern u32 D_0040E618[];
void func_001CE328(S_func_001CE328_arg0 *arg0, s32 arg1)
{
  S_func_001CE328_arg0 *base = arg0;
  void *base14 = ((char *) base) + 0x14;
  void *p = *((void **) base14);
  void *end = *((void **) (((char *) base14) + 4));
  s32 val;
  void *start2;
  s32 count;
  u32 size;
  char *new_var;
  if (p < end)
  {
    do
    {
      val = *((s32 *) (((char *) p) + 4));
      D_002AD390(val);
      p = ((char *) p) + 8;
    }
    while (p < end);
  }
  new_var = (char *) (*((void **) (((char *) base14) + 8)));
  start2 = *((void **) base14);
  count = (new_var - ((char *) start2)) >> 3;
  if (count != 0)
  {
    size = count * 8;
 do { if (size != 0) { func_002B2028((u32) start2); } else { *((u32 *) start2) = D_0040E618[-1]; D_0040E618[-1] = start2; } } while (0);
  }
  func_001DF180(base, arg1);
}
