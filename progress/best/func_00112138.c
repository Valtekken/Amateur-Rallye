typedef struct { char pad[0x78]; s64 f78; } Obj;
typedef struct { char pad[0x4C]; Obj *f4C; } Holder;
extern void *func_0021F4B0();
extern Holder *func_0021E9C0(void *, void *);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E3E90(s32, void *, f32);
extern void func_003FA310(void *, const char *, s32);
extern char D_00446788[], D_004467A0[], D_004467C8[], D_004467E8[], D_00446810[];
extern s32 D_0040E758, D_0040E788, D_0040E790, D_0040E798;
static inline void setbit(Obj *o, s64 bit) { s64 *p = &o->f78; *p = (*p & -2LL) | bit; }
void func_00112138(void *a, s32 b)
{
  u32 buf[4];
  char fmt[0x50];
  s32 bit = b & 1;
  s32 k, i;
  Holder *h, *h60;
  h = func_0021E9C0(func_0021F4B0(), (char *)a + 0x4C);
  setbit(h->f4C, bit);
  func_001E3D10(func_001E4280(), (char *)a + 0x48, b);
  func_001E3D10(func_001E4280(), &D_0040E758, b);
  setbit((*(Holder **)((char *)a + 0x58))->f4C, bit);
  setbit((*(Holder **)((char *)a + 0x5C))->f4C, bit);
  h60 = *(Holder **)((char *)a + 0x60);
  setbit(h60->f4C, *(u32 *)((char *)a + 0x34) & 1);
  k = (s32)func_0021F4B0(h60, h60->f4C);
  func_001D4040(buf, D_00446788);
  h = func_0021E9C0(k, buf);
  setbit(h->f4C, *(u32 *)((char *)a + 0x34) & 1);
  if (b != 0) {
    *(s32 *)((char *)a + 0x2C) = 1;
    *(s32 *)((char *)a + 0x24) = 1;
    *(s32 *)((char *)a + 0x28) = 1;
    *(s32 *)((char *)a + 0x30) = 1;
    func_001E3E90(func_001E4280(), &D_0040E788, *(f32 *)((char *)a + 0x68) / 1.5f);
    func_001E3E90(func_001E4280(), &D_0040E790, *(f32 *)((char *)a + 0x6C) / 1.5f);
    func_001E3E90(func_001E4280(), &D_0040E798, *(f32 *)((char *)a + 0x70) / 1.5f);
    for (i = 0; i < 2; i++) {
      func_003FA310(fmt, D_004467A0, i);
      func_001D4040(buf, fmt);
      func_001E3E90(func_001E4280(), buf, 0.0f);
      func_003FA310(fmt, D_004467C8, i);
      func_001D4040(buf, fmt);
      func_001E3E90(func_001E4280(), buf, 0.0f);
      func_003FA310(fmt, D_004467E8, i);
      func_001D4040(buf, fmt);
      func_001E3E90(func_001E4280(), buf, 0.0f);
      func_003FA310(fmt, D_00446810, i);
      func_001D4040(buf, fmt);
      func_001E3E90(func_001E4280(), buf, 0.0f);
    }
  } else {
    func_001E3E90(func_001E4280(), &D_0040E788, *(f32 *)((char *)a + 0x68));
    func_001E3E90(func_001E4280(), &D_0040E790, *(f32 *)((char *)a + 0x6C));
    func_001E3E90(func_001E4280(), &D_0040E798, *(f32 *)((char *)a + 0x70));
  }
  *(s32 *)func_0021F4B0() = b;
  *(s32 *)((char *)a + 0x20) = b;
}
