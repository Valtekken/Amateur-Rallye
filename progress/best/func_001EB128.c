typedef struct { u32 begin; u32 end; u32 cap; } Vec;
extern u32 D_0040E618[];
extern u32 func_002B1FC0(u32);
extern u32 func_003D2910(u32);
extern u32 func_00152D28(u32);
extern void func_002B2028(u32);
extern void func_001EB0C0(u32, u32, u32, s32);
extern void D_002AD390(s32);
extern void func_001D2CD8(s32 *, s32);
inline static u32 allocvec(u32 n)
{
  u32 bytes = n << 3;
  if (n)
  {
    if (bytes)
    {
      u32 p = func_002B1FC0(bytes);
      if (p) return p;
      return func_003D2910(bytes);
    }
    else
    {
      u32 p = D_0040E618[-1];
      if (!p) return func_00152D28(0);
      D_0040E618[-1] = *((u32 *) p);
      return p;
    }
  }
  return 0;
}
inline static void freevec(u32 q, s32 n)
{
  if (n)
  {
    if (n << 3)
      func_002B2028(q);
    else
    {
      *((u32 *) q) = D_0040E618[-1];
      D_0040E618[-1] = q;
    }
  }
}
inline static u32 inline_fn(u32 arg0) { return arg0; }
inline static u32 copy_elems(u32 s, u32 q, s32 left)
{
  if (left > 0)
  {
    do
    {
      *(u32 *) q = *(u32 *) s;
      func_001D2CD8((s32 *) (q + 4), *(s32 *) (s + 4));
      q += 8;
      s += 8;
    } while (--left > 0);
  }
  return q;
}
inline static void destroy_elems(u32 q, u32 e)
{
  while (q < e)
  {
    D_002AD390(*(s32 *) (q + 4));
    q += 8;
  }
}

Vec *func_001EB128(Vec *a, Vec *b)
{
  if (b != a)
  {
    u32 end = b->end;
    u32 start = b->begin;
    u32 dest = a->begin;
    s32 n = ((s32) (end - start)) >> 3;
    s32 bytes;
    if (((u32) (((s32) (a->cap - dest)) >> 3)) < ((u32) n))
    {
      u32 p;
      if (n)
      {
        bytes = n << 3;
        p = allocvec(n);
      }
      else
      {
        p = 0;
        bytes = 0;
      }
      func_001EB0C0(start, end, p, 0);
      destroy_elems(a->begin, a->end);
      freevec(a->begin, ((s32) (a->cap - a->begin)) >> 3);
      a->begin = p;
      a->cap = a->begin + bytes;
    }
    else
    {
      s32 k = ((s32) (a->end - dest)) >> 3;
      if (((u32) k) >= ((u32) n))
      {
        u32 q;
        bytes = n << 3;
        q = copy_elems(start, dest, n);
        destroy_elems(q, inline_fn(a->end));
      }
      else
      {
        u32 e;
        bytes = n << 3;
        copy_elems(start, dest, k);
        e = a->end;
        func_001EB0C0(((((s32) (e - a->begin)) >> 3) << 3) + b->begin, b->end, e, 0);
      }
    }
    a->end = a->begin + bytes;
  }
  return a;
}
