extern void D_002AD390(void *);
extern void func_0026FFC8(void *);
typedef struct Node { struct Node *next; void *pad; void *ptr; } Node;
void func_002296D0(void *arg0) {
  Node *n;
  n = (*(Node **)arg0)->next;
  while (n != *(Node **)arg0) {
    if (n->ptr) D_002AD390(n->ptr);
    n = n->next;
  }
  func_0026FFC8(arg0);
  n = (*(Node **)((char *)arg0 + 4))->next;
  while (n != *(Node **)((char *)arg0 + 4)) {
    if (n->ptr) D_002AD390(n->ptr);
    n = n->next;
  }
  func_0026FFC8((char *)arg0 + 4);
}

f32 func_00207450(void *arg0, void *arg1) {
  f32 sum = 0.0f;
  f32 *cur = *(f32 **)arg0;
  s32 n = (*(f32 **)((char *)arg0 + 4) - cur);
  if (n > 0) {
    f32 *a = cur;
    f32 *b = *(f32 **)arg1;
    do { sum += (*a++) * (*b++); } while (--n);
  }
  return sum;
}

extern f32 func_003F3E80(f32);
f32 func_002073E0(void *arg0) {
  f32 sum = 0.0f;
  f32 *cur = *(f32 **)arg0;
  s32 n = (*(f32 **)((char *)arg0 + 4) - cur);
  f32 r = sum;
  if (n > 0) {
    f32 *a = cur;
    do { f32 v = *a++; sum += v * v; } while (--n);
  }
  r = sum;
  if (r != r) r = func_003F3E80(sum);
  return r;
}

extern f32 func_00207170(void *, s32);
extern void func_001C64B0(void *, void *, void *);
void func_00207328(void *arg0, void *arg1) {
  f32 sp;
  s32 i;
  u8 *arr = (u8 *)arg0 + 0x18;
  if (*(s32 *)arg0 <= 0) return;
  for (i = 0; i < *(s32 *)arg0; i++) {
    f32 v = 1.0f / func_00207170(arg1, i);
    f32 *cur = *(f32 **)(arr + 4);
    f32 *cap = *(f32 **)(arr + 8);
    sp = v;
    if (cur == cap) {
      func_001C64B0(arr, cur, &sp);
    } else {
      if (cur != 0) *cur = v;
      *(f32 **)(arr + 4) = cur + 1;
    }
  }
}
