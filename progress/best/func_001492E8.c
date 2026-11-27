extern s32 func_00193B60(void);
extern s32 func_00193138(s32, s32);
extern void func_0021E4F0(void *);
extern void func_0021E620(void *, s32, void *, s32);
extern void func_002060F8(void *);
extern void **func_0017E620(void);
extern s32 func_001D4810(void *, void *);
extern s32 func_001D5F70(void);
extern s32 func_001D5EB0(s32, s32, s32);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern s32 func_001930D8(s32, s32);
extern void func_001D29D0(void *, const char *, s32);
extern void func_001D4040(void *, s32);
extern void D_002AD390(s32);
extern u8 D_0040E708[];
extern char D_0044C0C0[], D_0044C0D8[], D_0044C0F0[];
typedef s32 (*Fn)(void *, s32, s32);

void func_001492E8(void *arg0, void *arg1) {
  s32 sp0 = 0, t, key;
  void *p50, *p4C, *vo;
  void **vobj;
  Fn fn;
  s64 *q;
  u32 k;
  s64 bit;
  if (func_00193138(func_00193B60(), *(s32 *)((u8 *)arg0 + 0xC)) == 0 ||
      (p4C = *(void **)((u8 *)arg1 + 0x4C)) == 0) goto block;
  p50 = *(void **)((u8 *)arg1 + 0x50);
  if (p50 != 0) {
    q = (s64 *)((u8 *)p50 + 0x70);
    k = 0xBFFFFFFF;
    *q &= ((s64)k << 2) | 3;
  }
  q = (s64 *)((u8 *)*(void **)((u8 *)arg1 + 0x50) + 0x70);
  k = 0xBFFFFFFF;
  bit = (s64)(u32)0x8000 << 19;
  *q = (*q & (((s64)k << 4) | 0xF)) | bit;
  q = (s64 *)((u8 *)p4C + 0x78);
  *q = (*q & 0xFFFFFFFFFFFFFFFBULL) | 4ULL;
  if (*(s32 *)((u8 *)arg1 + 4) != (s32)arg0)
    func_0021E620(arg1, 0, 0, -5);
  {
    s32 one = 1;
    func_002060F8(p4C);
    p50 = *(void **)((u8 *)arg1 + 0x50);
    *(f32 *)((u8 *)arg0 + 0x2C) = *(f32 *)((u8 *)p4C + 0x50);
    *(f32 *)((u8 *)arg0 + 0x30) = *(f32 *)((u8 *)p50 + 4);
    *(f32 *)((u8 *)arg0 + 0x34) = *(f32 *)((u8 *)p50 + 8);
    vobj = func_0017E620();
    vo = *vobj;
    fn = *(Fn *)((u8 *)vo + 0x24);
    func_001D4810((u8 *)arg0 + 0x44, (void *)fn((u8 *)vobj + *(s16 *)((u8 *)vo + 0x20), 0x67, (s32)fn));
    *(f32 *)((u8 *)arg0 + 0x20) = (f32)func_001D5EB0(func_001D5F70(), -1, 2);
    t = func_001E3650(func_001E4280(), (s32)D_0040E708);
    if (t == one) {
      *(s32 *)((u8 *)arg0 + 0x1C) = one;
      *(s32 *)((u8 *)arg0 + 0x14) = 0xD3;
    }
    if (t == 2) *(s32 *)((u8 *)arg0 + 0x1C) = one;
    key = func_001930D8(func_00193B60(), *(s32 *)((u8 *)arg0 + 0xC));
    sp0 = 0;
    func_001D29D0(&sp0, D_0044C0C0, key);
    func_001D4040((u8 *)arg0 + 0x38, sp0);
    D_002AD390(sp0);
    sp0 = 0;
    func_001D29D0(&sp0, D_0044C0D8, key);
    func_001D4040((u8 *)arg0 + 0x3C, sp0);
    D_002AD390(sp0);
    sp0 = 0;
    func_001D29D0(&sp0, D_0044C0F0, key);
    func_001D4040((u8 *)arg0 + 0x40, sp0);
    D_002AD390(sp0);
  }
  return;
block:
  func_0021E4F0(arg1);
}
