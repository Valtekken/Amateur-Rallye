extern void func_003FA8A4(void *, void *, u32, u32);

void *func_003FA634(void *str) {
  char *p = (char *)str;
  u64 ones = 0x0101010101010101ULL;
  u64 highs = 0x8080808080808080ULL;
  if (!((u32)p & 7)) {
    u64 w = *(u64 *)p;
    if (!((u32)p & 0xF))
      w = *(u64 *)p;
    if (((w - ones) & ~w & highs) == 0) {
      p += ((u32)p & 0xF) ? 8 : 0x10;
      for (;;) {
        w = *(u64 *)p;
        if ((w - ones) & ~w & highs) break;
        p += 8;
      }
    }
  }
  while (*p) p++;
  func_003FA8A4(p, str, 0x01010101, 0x80808080);
  return str;
}
