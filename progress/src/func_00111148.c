extern s32 func_001E4280(void);
extern void *func_001E37E8(s32, void *);
extern s32 func_001E38C8(s32, void *);
extern s32 func_001E3598(s32, void *);
extern u32 func_001E3650(s32, void *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001E3D10(s32, void *, s32);
extern s32 func_00262838(void);
extern void func_001D4040(void *, const char *);
extern void func_002623F0(s32, void *);
extern void func_001112F0(void *);
extern char D_00446648[], D_00446660[], D_00446670[];
static inline void *init(void *p, const char *s){func_001D4040(p,s);return p;}
typedef struct {void *begin; void *end;} Vec;
void func_00111148(void *a){
  u32 str[4];
  Vec *v = (Vec*)func_001E37E8(func_001E4280(), (char*)a+0x18);
  if(!v) return;
  void *p28 = (char*)a+0x28;
  if(func_001E38C8(func_001E4280(), p28)!=0 && func_001E3598(func_001E4280(), p28)!=0){
    func_002623F0(func_00262838(), init(str,D_00446648));
    return;
  }
  void *p1c = (char*)a+0x1C;
  u32 cnt = func_001E3650(func_001E4280(), p1c);
  s32 n = (s32)((char*)v->end-(char*)v->begin)>>2;
  if(cnt<(u32)(n-1)){
    cnt = cnt+1;
    func_001E3EC0(func_001E4280(), p1c, cnt);
    func_002623F0(func_00262838(), init(str,D_00446660));
    func_001112F0(a);
    if(*(s32*)((char*)a+0x2C)!=0){
      func_001E3D10(func_001E4280(), init(str,D_00446670), 1);
    }
    return;
  }
  func_002623F0(func_00262838(), init(str,D_00446648));
}
