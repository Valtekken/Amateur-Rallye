extern void *func_00152D28(int);
extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void func_002B2028(void *);
extern void func_003F93CC(void *, void *, int);
extern u32 D_0040E618[];
typedef struct 
{
  void *begin;
  void *end;
  void *cap;
} Vec;
inline static void *alloc_or_fallback(int n)
{
  void *p = func_002B1FC0(n);
  return (p) ? (p) : (func_003D2910(n));
}

inline static void *get_free(void)
{
  u32 h = D_0040E618[-1];
  if (!h)
    return func_00152D28(0);
  D_0040E618[-1] = *((u32 *) h);
  return (void *) h;
}

void func_001D78C0(Vec *v, void *pos, int *value)
{
  void *old = v->end;
  void *q;
  void *buf;
  void *first;
  void *dst;
  void *next;
  void *last;
  void *oldbuf;
  int len;
  int x;
  int count;
  int capacity;
  int bytes;
  int prefix;
  int suffix;
  int oldcount;
  if (old != v->cap)
  {
    if (old)
    {
      *((int *) old) = *((int *) (old - 4));
    }
    q = v->end;
    v->end = q + 4;
    len = ((int) q) - 4;
    len -= (int) pos;
    len = (len >> 2) * 4;
    x = *value;
    func_003F93CC(q - len, pos, len);
    *((int *) pos) = x;
    return;
  }
  count = (((int) old) - ((int) v->begin)) >> 2;
  capacity = (count) ? (count * 2) : (1);
  bytes = capacity * 4;
  if (capacity)
  {
    if (bytes)
    {
      buf = alloc_or_fallback(bytes);
    }
    else
    {
      buf = get_free();
    }
  }
  else
  {
    buf = 0;
    bytes = 0;
  }
  first = v->begin;
  prefix = ((int) pos) - ((int) first);
  dst = buf + prefix;
  func_003F93CC(buf, first, (prefix >> 2) * 4);
  next = dst + 4;
  if (dst)
  {
    *((int *) dst) = *value;
  }
  suffix = ((int) v->end) - ((int) pos);
  last = next + suffix;
  func_003F93CC(next, pos, (suffix >> 2) * 4);
  oldbuf = v->begin;
  dst = v->cap;
  oldcount = (((int) dst) - ((int) oldbuf)) >> 2;
  if (oldcount)
  {
    if (oldcount * 4)
    {
      func_002B2028(oldbuf);
    }
    else
    {
      *((u32 *) oldbuf) = D_0040E618[-1];
      D_0040E618[-1] = (u32) oldbuf;
    }
  }
  v->begin = buf;
  v->end = last;
  v->cap = buf + bytes;
}

