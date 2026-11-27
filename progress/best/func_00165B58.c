extern s32 func_001E4280(void);
extern f32 func_001E3610(s32, void *);
extern void func_001D4040(char *, const char *);
extern void func_002633E0(u8 *);
extern void func_001C6180(u8 *, u8 *, u8 *);
extern char D_0044F648[], D_0044F660[], D_0044F678[], D_0044F690[];
typedef struct { s32 v; char pad[0xC]; u8 rec[0x20]; } Loc;

void func_00165B58(u8 *A, u8 *B) {
  Loc l;
  u32 begin, end, p, val, i, n;
  u8 *dst;
  s32 t;
  l.v = 0;
  begin = *(u32 *)(A + 0x2C);
  end = *(u32 *)(A + 0x30);
  if (begin < end) { p = begin; do { p += 0x20; } while (p < end); }
  *(u32 *)(A + 0x30) = begin;
  *(f32 *)(A + 4) = func_001E3610(func_001E4280(), A);
  t = func_001E4280(); func_001D4040((char *)&l.v, D_0044F648); *(f32 *)(A+0x60) = func_001E3610(t, (char *)&l.v);
  t = func_001E4280(); func_001D4040((char *)&l.v, D_0044F660); *(f32 *)(A+0x64) = func_001E3610(t, (char *)&l.v);
  t = func_001E4280(); func_001D4040((char *)&l.v, D_0044F678); *(f32 *)(A+0x68) = func_001E3610(t, (char *)&l.v);
  t = func_001E4280(); func_001D4040((char *)&l.v, D_0044F690); *(f32 *)(A+0x6C) = func_001E3610(t, (char *)&l.v);
  n = (s32)(*(u32 *)(B + 4) - *(u32 *)B) >> 2;
  if (n != 0) {
    for (i = 0; i < n; i++) {
      p = *(u32 *)(*(u32 *)B + (i << 2));
      func_002633E0(l.rec);
      val = *(u32 *)(p + 0x70);
      *(s32 *)l.rec = val; l.v = val;
      *(f32 *)(l.rec+0x10)=*(f32 *)(A+0x6C); *(f32 *)(l.rec+0x14)=*(f32 *)(A+0x68);
      *(f32 *)(l.rec+0x18)=*(f32 *)(A+0x60); *(f32 *)(l.rec+0x1C)=*(f32 *)(A+0x64);
      dst = (u8 *)(u32)(*(u32 *)(A+0x30));
      if ((u32)dst != *(u32 *)(A+0x34)) {
        if (dst != 0) { *(u32 *)dst=val; *(f32 *)(dst+4)=*(f32 *)(l.rec+4); *(f32 *)(dst+8)=*(f32 *)(l.rec+8);
          *(f32 *)(dst+0x10)=*(f32 *)(l.rec+0x10); *(f32 *)(dst+0x14)=*(f32 *)(l.rec+0x14);
          *(f32 *)(dst+0x18)=*(f32 *)(l.rec+0x18); *(f32 *)(dst+0x1C)=*(f32 *)(l.rec+0x1C); }
        *(u32 *)(A+0x30)=(u32)dst+0x20;
      } else func_001C6180(A+0x2C, dst, l.rec);
      dst = (u8 *)(u32)(*(u32 *)(A+0x18));
      if ((u32)dst != *(u32 *)(A+0x1C)) {
        if (dst != 0) { *(u32 *)dst=*(u32 *)l.rec; *(f32 *)(dst+4)=*(f32 *)(l.rec+4); *(f32 *)(dst+8)=*(f32 *)(l.rec+8);
          *(f32 *)(dst+0x10)=*(f32 *)(l.rec+0x10); *(f32 *)(dst+0x14)=*(f32 *)(l.rec+0x14);
          *(f32 *)(dst+0x18)=*(f32 *)(l.rec+0x18); *(f32 *)(dst+0x1C)=*(f32 *)(l.rec+0x1C); }
        *(u32 *)(A+0x18)=(u32)dst+0x20;
      } else func_001C6180(A+0x14, dst, l.rec);
    }
  }
}
