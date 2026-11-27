extern void func_001E2B98(void*,const char*,s32),func_001E2C08(void*,const char*,f32);
extern void *D_002AD408(u32); extern void func_001D4040(void*,const char*); extern volatile unsigned short func_001E2460(void*,void*);
extern f32 func_0027DF58(void),func_003F33C8(f32);
extern char D_0044DD18[],D_0047AF60[],D_0047AF70[],D_0047AF80[],D_0047AF90[],D_0047AF98[],D_0047AFA8[],D_0047AFB8[],D_0047AFD0[],D_0047AFE0[],D_0047AFF8[],D_0047B010[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
void *func_00284010(char *a){
u32 key[4];u32 pad[4];u32 reg[4];Obj *p=D_002AD408(36);
func_001D4040(key,D_0047AF60);ctor(p,key[0]);func_001E2460(reg,p);
func_001E2C08(reg,D_0047AF70,*(f32*)(a+0x48));
func_001E2C08(reg,D_0047AF80,*(f32*)(a+0x4c));
func_001E2C08(reg,D_0047AF90,*(f32*)(a+0x50));
func_001E2C08(reg,D_0047AF98,*(f32*)(a+0x54)*func_0027DF58());
func_001E2C08(reg,D_0047AFA8,*(f32*)(a+0x58)*func_0027DF58());
func_001E2C08(reg,D_0047AFB8,func_003F33C8(*(f32*)(a+0x5c))*func_0027DF58());
func_001E2B98(reg,D_0047AFD0,*(s32*)(a+0x60));
func_001E2C08(reg,D_0047AFE0,*(f32*)(a+0x64));
func_001E2C08(reg,D_0047AFF8,*(f32*)(a+0x68));
func_001E2B98(reg,D_0047B010,*(s32*)(a+0x3c));return p;}
