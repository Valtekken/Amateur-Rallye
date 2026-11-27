extern void *func_00340CD0(void);
extern void func_001D4040(char *, const char *);
extern s32 func_001E4280(void);
extern s32 func_001E38C8(s32, void *);
extern s32 func_001E3598(s32, void *);
extern void func_00361830(s32, s32, s32);
extern void *func_00311098(s16, s32, s32, u16 *);
extern void func_0031B660(void *, s32);
extern void func_00317FD0(void *);
extern void func_0031EB28(void *);
extern s32 D_0042DB68;
extern volatile u16 D_0042DA10, D_0042DA12;
extern f32 D_0042DC40;
extern u8 D_0042D690[];
extern char D_00485128[];
extern u8 D_0049B2E0[];
typedef void (*VFn)(void *, s32, void *);

void func_00316808(void *arg0, s32 arg1) {
  void *p = func_00340CD0(), *rec;
  s32 v, n, k, cnt, size, flag, skip, ref, cur, next;
  f32 f;
  u8 *obj, *o2, *lst;
  void *node;
  VFn fn;
  s16 off;
  *(s32 *)((u8 *)p + 0x18) = -1;
  *(s32 *)((u8 *)p + 0x10) = -1;
  *(s32 *)((u8 *)p + 0x14) = -1;
  *(s32 *)((u8 *)p + 0x0) = -1;
  *(s32 *)((u8 *)p + 0x4) = -1;
  *(s32 *)((u8 *)p + 0x8) = -1;
  *(s32 *)((u8 *)p + 0xC) = -1;
  *(s32 *)((u8 *)arg0 + 0x140) = arg1;
  if (D_0042DB68 == 0) {
    func_001D4040((char *)D_0049B2E0, D_00485128);
    D_0042DB68 = 1;
  }
  if (func_001E38C8(func_001E4280(), D_0049B2E0) == 0 ||
      func_001E3598(func_001E4280(), D_0049B2E0) == 0) {
    v = *(s32 *)((u8 *)arg0 + 0x140);
    n = (s32)((u32)v >> 1);
    if (v >= 0) {
      f = (f32)v;
    } else {
      f = (f32)((v & 1) | n);
      f = f + f;
    }
    D_0042DC40 = f / 150.0f;
  }
  func_00361830(*(s32 *)((u8 *)arg0 + 0x140), 0x5A, 0x1E);
  for (;;) {
    flag = 0;
    skip = 0;
    cur = (s16)D_0042DA10 + 1;
    if (cur >= 4) cur = 0;
    next = cur + 1;
    if (next >= 4) next = 0;
    if (cur == (s16)D_0042DA12 || next == (s16)D_0042DA12) {
      flag = 1;
    } else {
      skip = 1;
    }
    if (skip == 0) {
      cnt = 0x64;
      do {
        k = 0x30;
        do { } while (--k >= 0);
      } while (--cnt >= 0);
      continue;
    }
    break;
  }
  obj = func_00311098((s16)D_0042DA12, next, flag, &D_0042DA12);
  o2 = obj + 0x40;
  *(s32 *)((u8 *)*(void **)(obj + 0x14) + 0xC) = 0;
  *(s32 *)((u8 *)*(void **)(obj + 0x10) + 0xC) = 0;
  *(s32 *)(obj + 0x34) = -1;
  *(s32 *)((u8 *)*(void **)(o2 + 0x14) + 0xC) = 0;
  *(s32 *)((u8 *)*(void **)(o2 + 0x10) + 0xC) = 0;
  *(s32 *)(o2 + 0x34) = -1;
  *(s32 *)(obj + 0xC0) = 0;
  lst = obj + 0xD0;
  node = *(void **)lst;
  if ((u32)node < *(u32 *)(lst + 4)) {
    size = *(s32 *)(lst + 4) - (s32)node;
    do {
      void *item = *(void **)node;
      if (item != 0) {
        ref = *(s32 *)item - 1;
        *(s32 *)item = ref;
        if (ref == 0) {
          void *vt = *(void **)((u8 *)item + 4);
          off = *(s16 *)((u8 *)vt + 8);
          fn = *(VFn *)((u8 *)vt + 0xC);
          fn((u8 *)item + off, 3, item);
        }
      }
      node = (u8 *)node + 4;
    } while ((u32)node < *(u32 *)(lst + 4));
    *(s32 *)(lst + 4) -= size;
  }
  n = (s32)(s16)D_0042DA10 * 0xE0;
  rec = D_0042D690 + n;
  func_0031B660(rec, arg1);
  func_00317FD0(rec);
  func_0031EB28(rec);
}
