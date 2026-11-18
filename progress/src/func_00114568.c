extern s32 func_001E4280(void);
extern void *func_001E37E8(s32, void *);
extern u32 func_001E3650(s32, void *);
extern void func_001D4040(void *, const char *);
extern void func_001E3FB0(s32, void *, void *);
extern char D_00444878[];
static inline void *init(void *p, const char *s){func_001D4040(p,s);return p;}
typedef struct { void *begin; void *end; } Vec;
void func_00114568(void *a){
  u32 str[4];
  Vec *v = (Vec*)func_001E37E8(func_001E4280(), (char*)a+0x3C);
  if(!v) return;
  s32 cnt = (s32)func_001E3650(func_001E4280(), (char*)a+0x40);
  if(cnt<0 || (u32)cnt >= (u32)(((s32)((char*)v->end-(char*)v->begin)>>2))){
    s32 key = func_001E4280();
    func_001E3FB0(key, (char*)a+0x44, init(str, D_00444878));
  } else {
    s32 key = func_001E4280();
    func_001E3FB0(key, (char*)a+0x44, init(str, *(const char**)((char*)v->begin+(cnt<<2))));
  }
}
