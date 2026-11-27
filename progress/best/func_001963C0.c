extern void func_00196358(s32, s32);
extern void func_001D2458(s32 *, const char *);
extern void func_001D2900(s32, s32);
extern void func_001D4040(void *, const char *);
extern void func_001E33C8(s32, void *, s32);
extern void func_001E3E90(s32, void *, f32);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001E3FE0(s32, s32 *, s32 *);
extern void D_002AD390(s32);
extern s32 func_001E4280(void);
extern char D_0044E840[];

typedef struct {
  s32 pad[3];
  char *key;
} Cfg;

void func_001963C0(Cfg *arg0, s32 *arg1, s32 arg2)
{
  s32 sp[4];
  s32 sp10[4];
  s32 ret;
  s32 i;
  for (i = 0; i < 4; i++) {
    func_00196358((s32)arg0, i);
    func_001D2900((s32)arg0 + 0xC, *arg1);
    switch (arg2) {
    case 0:
      ret = func_001E4280();
      func_001D4040(sp, arg0->key);
      func_001E3EC0(ret, sp, 0);
      break;
    case 1:
      ret = func_001E4280();
      func_001D2458(sp, arg0->key);
      func_001D2458(sp10, D_0044E840);
      func_001E3FE0(ret, sp, sp10);
      D_002AD390(sp10[0]);
      D_002AD390(sp[0]);
      break;
    case 2:
      ret = func_001E4280();
      func_001D4040(sp, arg0->key);
      func_001E3E90(ret, sp, 0.0f);
      break;
    }
    ret = func_001E4280();
    func_001D4040(sp, arg0->key);
    func_001E33C8(ret, sp, 0);
  }
  D_002AD390(*arg1);
}
