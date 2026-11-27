extern void func_001577C8(void *, void *, void *);
extern void func_002060F8(s32);
extern void func_0021E620(void *, s32, s32);
extern void func_0021E7E8(void *);
extern void func_00263038(s32);
extern void func_003F93CC(void *, void *, s32);

typedef struct { f32 x, y, z; } Vec;
typedef struct { void **begin; void **end; } Range;
typedef struct { void *pad[0x4C/4]; void *p4C; Vec *p50; } Node;
typedef struct { f32 f0, f4, f8, f10, f14, f18; void *p20; } Locals;

void func_001B0238(void *arg0, Range *arg1, f32 fparg0) {
  Locals l;
  void **cur;
  f32 thr;
  if (arg1->begin == arg1->end) return;
  l.f0 = *(f32 *)((char *)arg0 + 0x74);
  l.f4 = *(f32 *)((char *)arg0 + 0x78);
  l.f8 = *(f32 *)((char *)arg0 + 0x7C);
  thr = fparg0 * fparg0;
  l.f4 = 0.0f;
  cur = arg1->begin;
  if (cur == arg1->end) return;
  l.p20 = *cur;
  for (;;) {
    Vec *ch = ((Node *)l.p20)->p50;
    l.f10 = ch->x;
    l.f14 = ch->y;
    l.f14 = 0.0f;
    l.f18 = ch->z;
    if (thr < (l.f10-l.f0)*(l.f10-l.f0) + (l.f4-l.f14)*(l.f4-l.f14) + (l.f18-l.f8)*(l.f18-l.f8)) {
      void **list = (void **)((char *)arg0 + 0x38);
      func_0021E7E8(l.p20);
      if (((Node *)l.p20)->p4C) func_002060F8((s32)((Node *)l.p20)->p4C);
      if (((Node *)l.p20)->p50) func_00263038((s32)((Node *)l.p20)->p50);
      func_0021E620(l.p20, 0, 0);
      func_0021E620(l.p20, 1, 0);
      func_0021E620(l.p20, 2, 0);
      func_0021E620(l.p20, 3, 0);
      if (list[1] != list[2]) {
        if (list[1]) *(void **)list[1] = l.p20;
        list[1]++;
      } else {
        func_001577C8(list, list[1], &l.p20);
      }
      {
        void **dst = cur + 1;
        s32 n = (s32)((char *)arg1->end - (char *)dst) >> 2;
        if (dst != arg1->end) func_003F93CC((void *)cur, (void *)dst, n * 4);
      }
      arg1->end = (void **)((char *)arg1->end - 4);
    } else {
      cur++;
    }
    if (arg1->end == cur) break;
    l.p20 = *cur;
  }
}
