void func_0021D5B0(void *arg0, void *arg1, f32 fparg0) {
 f32 x = *(f32 *)arg1; f32 sq = fparg0 * fparg0;
 *(f32 *)arg0 = x;
 { f32 y = *(f32 *)((u8 *)arg1 + 4); *(f32 *)((u8 *)arg0 + 4) = y; }
 { f32 z = *(f32 *)((u8 *)arg1 + 8); do { *(f32 *)((u8 *)arg0 + 0x10) = sq; *(f32 *)((u8 *)arg0 + 8) = z; *(f32 *)((u8 *)arg0 + 0xc) = fparg0; } while (0); }
}
