extern void func_0018D678(void *, s32, s32, s32);
extern void *D_002AD408(u32);
extern s32 func_0018D9D0(void *);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern void func_001E3F80(s32, void *, s32);
extern void func_001E3488(s32, void *, s32);
extern void func_001E3558(s32, void *, s32);
extern void func_002B2028(void *);
extern s32 D_0040E618[];
extern char D_0044E838[];

typedef struct { char *p; } __attribute__((aligned(16))) SPtr;
static inline void d4040(void *dst, const char *src) { func_001D4040(dst, src); }

void func_0018D820(s32 arg0, s32 arg1, s32 arg2) {
  SPtr s;
  char buf[16];
  s32 i, v, k;
  const char *src;
  for (i = 1; i < 3; i++) {
    func_0018D678(&s, arg0, arg2, i);
    v = func_0018D9D0(D_002AD408(0x3C));
    k = func_001E4280();
    {
      s32 len = *(s32*)((char*)s.p-0x10);
      if (len == 0) src = D_0044E838;
      else { ((char*)s.p)[len] = 0; src = s.p; }
    }
    d4040(buf, src);
    func_001E3F80(k, buf, v);
    k = func_001E4280();
    {
      s32 len = *(s32*)((char*)s.p-0x10);
      if (len == 0) src = D_0044E838;
      else { ((char*)s.p)[len] = 0; src = s.p; }
    }
    d4040(buf, src);
    func_001E3488(k, buf, 1);
    k = func_001E4280();
    {
      s32 len = *(s32*)((char*)s.p-0x10);
      if (len == 0) src = D_0044E838;
      else { ((char*)s.p)[len] = 0; src = s.p; }
    }
    d4040(buf, src);
    func_001E3558(k, buf, 1);
    {
      s32 *h = (s32*)((char*)s.p-0x10);
      s32 rc = --h[2];
      if (rc == 0) {
        if (h[1]+0x10 != 0) func_002B2028(h);
        else { s32 old = D_0040E618[-1]; h[0] = old; D_0040E618[-1] = (s32)h; }
      }
    }
  }
}
