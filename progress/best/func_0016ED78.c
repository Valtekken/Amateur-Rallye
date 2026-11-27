extern void func_003F93CC(u32, u32, u32);
extern void func_001C6998(u32, u32, u32 *, u32);
extern void func_001C6B58(u32, u32, u32 *);

void func_0016ED78(u32 A) {
  u32 v14, v20, v38, v44;
  u32 sp0, sp4, p, end, item, old, begin;
  s32 n, n2, i;
  i = 0;
  v14 = A + 0x14;
  v20 = A + 0x20;
  old = *(u32 *)(v14 + 4);
  begin = *(u32 *)v14;
  func_003F93CC(begin, old, 0);
  *(u32 *)(v14 + 4) = *(u32 *)(v14 + 4) - (old - begin);
  old = *(u32 *)(v20 + 4);
  begin = *(u32 *)v20;
  func_003F93CC(begin, old, 0);
  *(u32 *)(v20 + 4) = *(u32 *)(v20 + 4) - (old - begin);
  n = (s32)(*(s32 *)(A + 0xC) - *(s32 *)(A + 8)) >> 2;
  for (; i < n; i++) {
    item = *(u32 *)(*(u32 *)(A + 8) + (i << 2));
    sp0 = item;
    if (*(u32 *)(*(u32 *)(item + 0xC) + 4) != 0) {
      p = *(u32 *)(v20 + 4); end = *(u32 *)(v20 + 8);
      if (p == end) func_001C6998(v20, p, &sp0, item);
      else { if (p != 0) *(u32 *)p = item; *(u32 *)(v20 + 4) = *(u32 *)(v20 + 4) + 4; }
    } else {
      p = *(u32 *)(v14 + 4); end = *(u32 *)(v14 + 8);
      if (p == end) func_001C6998(v14, p, &sp0, item);
      else { if (p != 0) *(u32 *)p = item; *(u32 *)(v14 + 4) = *(u32 *)(v14 + 4) + 4; }
    }
  }
  v38 = A + 0x38;
  v44 = A + 0x44;
  old = *(u32 *)(v38 + 4);
  begin = *(u32 *)v38;
  func_003F93CC(begin, old, 0);
  *(u32 *)(v38 + 4) = *(u32 *)(v38 + 4) - (old - begin);
  old = *(u32 *)(v44 + 4);
  begin = *(u32 *)v44;
  func_003F93CC(begin, old, 0);
  *(u32 *)(v44 + 4) = *(u32 *)(v44 + 4) - (old - begin);
  n2 = (s32)(*(s32 *)(A + 0x30) - *(s32 *)(A + 0x2C)) >> 2;
  i = 0;
  for (; i < n2; i++) {
    item = *(u32 *)(*(u32 *)(A + 0x2C) + (i << 2));
    sp4 = item;
    if (*(u32 *)item != 0) {
      p = *(u32 *)(v44 + 4); end = *(u32 *)(v44 + 8);
      if (p == end) func_001C6B58(v44, p, &sp4);
      else { if (p != 0) *(u32 *)p = item; *(u32 *)(v44 + 4) = *(u32 *)(v44 + 4) + 4; }
    } else {
      p = *(u32 *)(v38 + 4); end = *(u32 *)(v38 + 8);
      if (p == end) func_001C6B58(v38, p, &sp4);
      else { if (p != 0) *(u32 *)p = item; *(u32 *)(v38 + 4) = *(u32 *)(v38 + 4) + 4; }
    }
  }
}
