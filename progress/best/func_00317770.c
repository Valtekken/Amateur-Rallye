typedef struct {
  u32 *data;
  void *ptr4;
  s32 cap;
  s32 count;
  s32 val10;
} Inner;
typedef struct { char pad[0x14]; Inner *in; } Outer;
extern volatile s32 D_0043C000;
extern u8 D_1678[];
extern void D_002AD530(void *);
extern void *D_002AD5A8(s32, u32);
extern void *func_003F931C(void *, void *, s32, void *);
static inline void append(Inner *s, u32 val) { s->data[s->count++] = val; }

void func_00317770(Outer *arg0, void *arg1, void *arg2) {
  Inner *s = arg0->in;
  s32 i = s->count;
  u32 need, size, shift, alloc, cap, one;
  s32 aligned;
  u32 *last;
  if ((s32)(s->cap - i) < 0x28) {
    need = i + 0x48;
    D_0043C000 = s->val10;
    shift = 0;
    one = 1;
    if (one < need) {
      do { shift++; } while ((u32)(1 << shift) < need);
    }
    size = 1 << shift;
    cap = size - 0x20;
    alloc = (u32)D_002AD5A8(size * 4, need);
    aligned = (alloc + 0x7F) & 0xFFFFFF80;
    if (s->count > 0) func_003F931C((void *)aligned, s->data, s->count << 2, 0);
    if (!s->ptr4) s->ptr4 = (void *)alloc;
    else { D_002AD530(s->ptr4); s->ptr4 = (void *)alloc; }
    s->data = (u32 *)aligned;
    s->cap = cap;
    D_0043C000 = 0;
  }
  append(s, 0x10000009);
  append(s, 0);
  append(s, 0x01000404);
  last = s->data + s->count;
  append(s, 0x6C088000);
  func_003F931C(s->data + s->count, arg1, 0x40, last);
  s->count += 0x10;
  func_003F931C(s->data + s->count, arg2, 0x40, s->data + s->count);
  i = s->count;
  s->count = i + 0x10;
  append(s, ((u32)&D_1678 >> 3) | 0x14000000);
  append(s, 0);
  append(s, 0);
  append(s, 0);
}
