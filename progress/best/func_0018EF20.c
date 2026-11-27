extern void func_002B2028(void *, void *);
extern void D_002AD390(void *);
extern void D_002AD530(void *, s32);
extern s32 D_0040E618[];
extern void *D_00473548;
extern void *D_004735B0;
extern void *D_00474288;

typedef struct { void *begin; void *cap; void *end; } Vec;

void func_0018EF20(void *arg0, s32 arg1) {
  void *t16 = *(void **)((char *)arg0 + 8);
  *(void **)((char *)arg0 + 4) = &D_00473548;
  if (t16) {
    Vec *v90 = (Vec *)((char *)t16 + 0x90);
    void *p = v90->begin;
    if ((u32)p < (u32)v90->cap) {
      p = (char *)p + 0xC;
      do { p = (char *)p + 0xC; } while ((u32)p < (u32)v90->cap);
    }
    p = v90->begin;
    {
      s32 n = (s32)((u32)((char *)v90->end - (char *)p) * 0xAAAAAAABu) >> 2;
      if (n) {
        if (n * 12) func_002B2028(p, v90);
        else { s32 old = D_0040E618[-1]; *(s32 *)p = old; D_0040E618[-1] = (s32)p; }
      }
    }
    {
      Vec *v84 = (Vec *)((char *)t16 + 0x84);
      void *q = v84->begin;
      if ((u32)q < (u32)v84->cap) {
        q = (char *)q + 0xC;
        do { q = (char *)q + 0xC; } while ((u32)q < (u32)v84->cap);
      }
      q = v84->begin;
      {
        s32 n = (s32)((u32)((char *)v84->end - (char *)q) * 0xAAAAAAABu) >> 2;
        if (n) {
          if (n * 12) func_002B2028(q, v84);
          else { s32 old = D_0040E618[-1]; *(s32 *)q = old; D_0040E618[-1] = (s32)q; }
        }
      }
    }
    *(void **)((char *)t16 + 0x50 + 0x20) = &D_004735B0;
    *(void **)((char *)t16 + 0x28 + 0x20) = &D_004735B0;
    D_002AD390(t16);
  }
  {
    void *p = *(void **)((char *)arg0 + 0xC);
    if (p) {
      s32 cnt = *(s32 *)((char *)p - 0x10);
      void *end = (char *)p + cnt * 0x54;
      if (p != end) {
        void *q = (char *)end - 0x54;
        do { q = (char *)q - 0x54; } while (p != q);
      }
      D_002AD530((char *)p - 0x10, cnt);
    }
  }
  *(void **)((char *)arg0 + 4) = &D_00474288;
  if (arg1 & 1) D_002AD390(arg0);
}
