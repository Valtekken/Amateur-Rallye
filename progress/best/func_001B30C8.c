extern void func_002B2028(u32);
extern void func_001B22F8(u32, u32);
extern u32 D_0040E618[];
extern u32 D_00473168[];
inline static void dispose(u32 begin, s32 n, u32 elem) {
  if (n != 0) {
    if (n * elem) func_002B2028(begin);
    else { *(u32 *)begin = D_0040E618[-1]; D_0040E618[-1] = begin; }
  }
}
inline static void free44(u32 vec) {
  u32 begin = *(u32 *)vec, end = *(u32 *)(vec + 4), cap;
  s32 n; u32 p;
  if (begin < end) { p = begin; do { p += 0x2C; } while (p < end); }
  cap = *(u32 *)(vec + 8);
  n = (s32)((u32)(cap - begin) * 0xBA2E8BA3) >> 2;
  dispose(begin, n, 0x2C);
}
inline static void free56(u32 vec) {
  u32 begin = *(u32 *)vec, end = *(u32 *)(vec + 4), cap;
  s32 n; u32 p;
  if (begin < end) { p = begin; do { p += 0x38; } while (p < end); }
  cap = *(u32 *)(vec + 8);
  n = (s32)((u32)(cap - begin) * 0xB6DB6DB7) >> 3;
  dispose(begin, n, 0x38);
}
inline static void free4(u32 vec) {
  u32 begin = *(u32 *)vec, end = *(u32 *)(vec + 4), cap;
  s32 n; u32 p;
  if (begin < end) { p = begin; do { p += 4; } while (p < end); }
  cap = *(u32 *)(vec + 8);
  n = (s32)(cap - begin) >> 2;
  dispose(begin, n, 4);
}
void func_001B30C8(u32 A, u32 arg1) {
  *(u32 *)(A + 0xDC) = (u32)D_00473168;
  free44(A + 0x108);
  free56(A + 0xF8);
  free56(A + 0xEC);
  free4(A + 0xE0);
  func_001B22F8(A, arg1);
}
