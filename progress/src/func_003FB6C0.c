typedef struct Re {
  u8 pad[0x38];
  s32 ready;
} Re;
typedef struct S54 {
  u8 pad[0x54];
  Re *r;
} S54;
extern Re *D_004404DC;
extern void func_003F7820(Re *);
extern s32 func_003FB738(Re *, S54 *, s32, s32);

s32 func_003FB6C0(S54 *a, register s32 b, register s32 c) {
  if (!a->r) {
    do { a->r = D_004404DC; } while (0);
  }
  if (!a->r->ready) {
    func_003F7820(a->r);
  }
  return func_003FB738(a->r, a, b, c);
}
