void func_002C76C0(void *arg0);
inline u8 *inline_fn(void *arg0)
{
  return ((u8 *) arg0) + 0x1C;
}

void func_002C7720(void *arg0)
{
  u64 *p;
  u64 *q = (u64 *) (((u8 *) arg0) + 0x30);
  u16 *t = (u16 *) inline_fn(arg0);
  unsigned long new_var;
  u64 valp = *((u64 *) (((u8 *) arg0) + 0x10));
  valp = valp | ((u64) 0x1000);
  valp = valp | ((u64) 0x2000);
  valp = valp | ((u64) 0x4000);
  valp = valp | ((u64) 0x8000);
  valp = valp | ((u64) 0x10000);
  new_var = (((u64) 0x8000) << 8) << 9;
  valp = valp | ((u64) 0x20000);
  *t = 8;
  valp = valp | ((u64) 0x40000);
  valp = valp | ((u64) 0x80000);
  *((u64 *) (((u8 *) arg0) + 0x10)) = valp;
  u64 valq = *q;
  valq = valq | new_var;
  *q = valq;
  *t = 8;
}

void func_002C8018(void *arg0, s32 arg1);
void func_002C8070(void *arg0, s32 arg1);
