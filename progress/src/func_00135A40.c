extern void func_001D4040(void *, const char *);
extern void func_001E4040(s32, void *, s32);
extern const char D_0044A750[];
extern const char D_0044A778[];
extern const char D_0044A7A0[];
extern const char D_0044A7C0[];
extern const char D_0044A7E0[];
typedef struct 
{
  s32 pad[4];
  s32 f10;
  s32 f14;
  s32 f18;
  s32 f1C;
} S;
inline s32 inline_fn()
{
  return func_001E4280();
}

void func_00135A40(S *p)
{
  char key[16];
  s32 cfg;
  cfg = inline_fn();
  func_001D4040(key, D_0044A750);
  func_001E4040(cfg, key, p->f10);
  cfg = func_001E4280();
  func_001D4040(key, D_0044A778);
  func_001E4040(cfg, key, p->f14);
  cfg = inline_fn();
  func_001D4040(key, D_0044A7A0);
  func_001E4040(cfg, key, p->f18);
  cfg = inline_fn();
  func_001D4040(key, D_0044A7C0);
  func_001E4040(cfg, key, p->f1C);
  cfg = inline_fn();
  func_001D4040(key, D_0044A7E0);
  func_001E4040(cfg, key, 0);
}

