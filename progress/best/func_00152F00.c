inline int inline_fn(u64 *arg0, u64 *arg1)
{
  return ((s32) arg0) - ((s32) arg1);
}

u64 *func_00152F00(u64 *start, u64 *end, u64 *value)
{
  s32 n = inline_fn(end, start) >> 3;
  s32 i = n;
  u64 key = *value;
  while (i > 0)
  {
    s32 half = i >> 1;
    u64 *mid = start + half;
    if ((*mid) < key)
    {
      start = mid + 1;
      n = (n - half) - 1;
    }
    else
    {
      n = half;
    }
    i = n;
  }

  return start;
}

extern s32 func_00296710(s32);
extern void func_002966C0(s32, s32, s32);
void func_00159A30(s32 arg0, s32 arg1, s32 arg2);
void func_0015A1F8(void *arg0);
extern void func_001D4040(void *, const char *);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E3EC0(s32, void *, s32);
extern const char D_0044AC50[];
extern const char D_0044AC68[];
void func_0015A220(void);
