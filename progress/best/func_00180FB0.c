extern s32 *D_002AD5A8(s32);
extern s32 func_00193B60(void);
extern s32 func_001918C0(s32);
extern void func_003FA310(char *, const char *, s32);
extern void func_001D4040(char *, const char *);
extern void func_001E3EC0(s32, void *, s32);
extern s32 func_001E4280(void);
extern char D_0044F040[], D_0046F9E0[], D_0046F9F8[];

void func_00180FB0(u8 *A, u8 *B) {
  s32 sp = 0, n, i, j;
  s32 *p0, *p1, *p2;
  u8 *q;
  s64 *v;
  q = *(u8 **)(B + 0x50);
  v = (s64 *)(q + 0x70);
  *v &= 0x2FFFFFFFFULL;
  *(f32 *)(A + 0x18) = *(f32 *)(q + 0x50);
  *(f32 *)(A + 0x1C) = *(f32 *)(q + 0x54);
  *(f32 *)(A + 0x20) = *(f32 *)(q + 0x58);
  n = func_001918C0(func_00193B60());
  *(s32 *)(A + 0x30) = n;
  p0 = D_002AD5A8(n << 2);
  j = n - 1;
  if (n != 0) { i = 0; do { p0[i] = 0; j--; i++; } while (j != -1); }
  *(s32 **)(A + 0x28) = p0;
  p1 = D_002AD5A8(*(s32 *)(A + 0x30) << 2);
  j = *(s32 *)(A + 0x30) - 1;
  if (*(s32 *)(A + 0x30) != 0) { i = 0; do { p1[i] = 0; j--; i++; } while (j != -1); }
  *(s32 **)(A + 0x2C) = p1;
  p2 = D_002AD5A8(*(s32 *)(A + 0x30) << 2);
  j = *(s32 *)(A + 0x30) - 1;
  if (*(s32 *)(A + 0x30) != 0) { i = 0; do { p2[i] = 0; j--; i++; } while (j != -1); }
  *(s32 **)(A + 0x24) = p2;
  i = 0;
  while (i < *(s32 *)(A + 0x30)) {
    func_003FA310((char *)&sp, D_0044F040, i);
    func_001D4040((char *)(p1 + i), (char *)&sp);
    func_003FA310((char *)&sp, D_0046F9E0, i);
    func_001D4040((char *)(p2 + i), (char *)&sp);
    func_003FA310((char *)&sp, D_0046F9F8, i);
    func_001D4040((char *)(p0 + i), (char *)&sp);
    func_001E3EC0(func_001E4280(), p2 + i, -1);
    i++;
  }
  *(f32 *)(A + 0x14) = *(f32 *)(A + 0x14) * *(f32 *)(A + 0x14);
}
