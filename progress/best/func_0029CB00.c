extern void func_001E2C78(void*,const char*,s32);
extern void func_001E2C08(void*,const char*,f32);
extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2E38(void*,const char*,void*);
extern char D_0044DD18[],D_0047BA40[],D_0047BF68[],D_0047BF78[],D_0047BF90[],D_0047BFD0[],D_0047BFF0[],D_0047C000[],D_0047C008[],D_0047C018[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
void *func_0029CB00(char *a){
u32 key[4];u32 pad[4];u32 reg[4];Obj *p=D_002AD408(36);const char *sx,*name;
func_001D4040(key,D_0047BFD0);
ctor(p,key[0]);
func_001E2460(reg,p);
sx=D_0047BA40;
name=D_0047BF68;
func_001D4040(key,sx);
func_001E2E38(reg,name,key);
name=D_0047BF78;
func_001D4040(key,sx);
func_001E2E38(reg,name,key);
func_001E2C78(reg,D_0047BFF0,*(s32*)(a+0x28));
func_001E2C08(reg,D_0047C000,*(f32*)(a+0x2C));
func_001E2C78(reg,D_0047C008,*(s32*)(a+0x3C));
func_001E2C08(reg,D_0047C018,*(f32*)(a+0x40));
name=D_0047BF90;
func_001D4040(key,sx);
func_001E2E38(reg,name,key);
return p;}
