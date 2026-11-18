typedef struct { void *begin; void *end; } Vec;
extern s32 func_001E4280(void);
extern void *func_001E37E8(s32, void *);
extern s32 func_001E3650(s32, void *);
extern void func_001D4040(void *, const char *);
extern void func_001E3EC0(s32, void *, s32);
extern s32 func_00262838(void);
extern void func_002623F0(s32, void *);
extern void func_00112730(void *);
extern char D_00446660[];
static inline void *init(void *p, const char *s){func_001D4040(p,s);return p;}

void func_00112660(void *a)
{
  u32 str[4];
  Vec *v = (Vec*)func_001E37E8(func_001E4280(), (char*)a+0x38);
  if (!v) return;
  s32 idx = (s32)func_001E3650(func_001E4280(), (char*)a+0x3C) + 1;
  s32 n = (s32)((char*)v->end - (char*)v->begin) >> 2;
  idx = (u32)idx < (u32)n ? idx : idx - n;
  func_001E3EC0(func_001E4280(), (char*)a+0x3C, idx);
  s32 ui = func_00262838();
  func_002623F0(ui, init(str, D_00446660));
  func_00112730(a);
}
