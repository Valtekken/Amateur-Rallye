typedef struct 
{
  u32 tag;
  s32 log;
  s32 cap;
  s16 x;
  s16 y;
  s32 count;
  u32 data[1];
} Big;
extern Big *func_003DB190(Big *, s32);
Big *func_003DB840(Big *a, s32 shift)
{
  s32 words = shift >> 5;
  s32 new_var;
  s32 old = a->count;
  s32 log = a->log;
  s32 n = (words + old) + 1;
  if (shift)
  {
    s32 cap = a->cap;
    s32 oldbytes = old * 4;
    s32 wordbytes;
    s32 bits;
    u32 *base;
    u32 *src;
    u32 *dst;
    if (cap < n)
    {
      new_var = words;
      wordbytes = new_var * 4;
      bits = shift & 31;
      do
      {
        cap *= 2;
        ++log;
      }
      while (cap < n);
    }
    else
    {
      wordbytes = new_var * 4;
      bits = shift & 31;
    }
    a = func_003DB190(a, log);
    base = a->data;
    src = (u32 *) (((u8 *) base) + oldbytes);
    dst = (u32 *) (((u8 *) src) + wordbytes);
    if (bits)
    {
      s32 inv = 32 - bits;
      u32 v = *(--src);
      u32 high = v >> inv;
      s32 next = n + 1;
      if (high)
      {
        n = next;
      }
      *dst = high;
      while (base < src)
      {
        u32 w;
        --src;
        w = *src;
        --dst;
        *dst = (v << bits) | (w >> inv);
        v = w;
      }

      *(--dst) = v << bits;
    }
    else
    {
      do
      {
        --src;
        --dst;
        *dst = *src;
      }
      while (base < src);
    }
    while (base < dst)
    {
      --dst;
      *dst = 0;
    }

    a->count = n - 1;
  }
  return a;
}

