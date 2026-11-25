extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern void func_001E4040(s32, void *, void *);
extern char D_0044A750[];
extern char D_0044A778[];
extern char D_0044A7A0[];
extern char D_0044A7C0[];
extern char D_0044A7E0[];
typedef struct 
{
  char pad[0x10];
  void *p10;
  void *p14;
  void *p18;
  void *p1C;
  void *p20;
} Ctx;
void func_00135B40(Ctx *a)
{
  s32 new_var;
  char key[16];
  unsigned int k;
  k = func_001E4280();
  func_001D4040(key, D_0044A750);
  func_001E4040(k, key, a->p10);
  new_var = func_001E4280();
  k = new_var;
  func_001D4040(key, D_0044A778);
  func_001E4040(k, key, a->p14);
  k = func_001E4280();
  func_001D4040(key, D_0044A7A0);
  func_001E4040(k, key, a->p18);
  k = func_001E4280();
  func_001D4040(key, D_0044A7C0);
  func_001E4040(k, key, 0);
  k = func_001E4280();
  func_001D4040(key, D_0044A7E0);
  func_001E4040(k, key, a->p20);
}

