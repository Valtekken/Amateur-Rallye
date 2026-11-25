#define FH (D_0040E618[-1])
#define D24(x) ((s32)((s32)(x) * 0xAAAAAAAB) >> 3)
typedef struct { u8 *b; u8 *p; u8 *e; } V258;
extern void func_00219F70(void *, void *);
extern void *func_0021A138(void *, void *, void *, void *);
extern void *func_0021A1F8(void *, void *, void *, void *);
extern void *func_0021A198(void *, void *, void *);
extern void func_00219DA8(void *, void *);
extern void func_00156C38(void *, void *);
extern void func_00208590(void *, u32);
extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);
extern void *func_00152D28(void *);
extern void func_002B2028(void);
extern void *D_0040E618[];
void func_0021A258(V258 *v, u8 *src, u32 n, void *dst)
{
  int m;
  u8 *cur;
  u8 *q;
  u8 *cur_save;
  void *blk;
  s32 sp20;
  u8 sp[0x20];
  s32 *sp20p;
  if (n != 0)
  {
    if (((u32) D24(v->e - v->p)) >= n)
    {
      func_00219F70(sp, dst);
      cur = v->p;
      m = D24(cur - src);
      if (n < ((u32) m))
      {
        s32 cnt1;
        cur_save = cur;
        func_0021A138(cur - (n * 24), cur, cur, 0);
        cur = cur - (n * 24);
        q = cur;
        cnt1 = D24(cur - src);
        v->p = v->p + (n * 24);
        if (cnt1 > 0)
        {
          cur_save -= 24;
          while (cnt1 > 0)
          {
            cur -= 24;
            func_00156C38(cur_save, cur);
            cnt1--;
            func_00219DA8(cur_save + 12, cur + 12);
            cur_save -= 24;
          }

        }
        func_0021A198(src, src + (n * 24), sp);
      }
      else
      {
        func_0021A1F8(cur, (void *) (n - m), sp, 0);
        q = cur + ((n - ((long) m)) * 24);
        v->p = v->p + ((n - m) * 24);
        func_0021A138(src, cur, v->p, 0);
        v->p = v->p + (m * 24);
        func_0021A198(src, cur, sp);
      }
      func_00208590(sp, 2);
    }
    else
    {
      s32 m2;
      s32 cnt2;
      u8 *cur2;
      cur2 = v->p;
      sp20 = D24(cur2 - v->b);
      sp20p = &sp20;
      m2 = sp20 + (*((n <= ((u32) sp20)) ? (sp20p) : ((s32 *) (&n))));
      if (m2 != 0)
      {
        if ((m2 * 24) != 0)
        {
          void *b1 = func_002B1FC0(m2 * 24);
          if (b1 != 0) blk = b1; else blk = func_003D2910(m2 * 24);
        }
        else
        {
          void *t = FH;
          if (t == 0)
          {
            blk = func_00152D28(0);
          }
          else
          {
            void *next = *(void **) t;
            blk = t;
            FH = next;
          }
        }
      }
      else blk = 0;
      src = func_0021A138(src, v->p, func_0021A1F8(func_0021A138(v->b, src, blk, 0), (void *) n, dst, 0), 0);
      cur = v->p;
      q = v->b;
      for (; ((u32) q) < ((u32) cur); q += 24) func_00208590(q, 2);
      cnt2 = D24(v->e - v->b);
      if (cnt2 != 0)
      {
        if ((cnt2 * 24) != 0) func_002B2028();
        else { u8 *base = v->b; *((void **) base) = FH; FH = base; }
      }
      v->p = src;
      v->b = blk;
      v->e = ((u8 *) blk) + (m2 * 24);
    }
  }
}
