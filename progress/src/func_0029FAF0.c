extern void func_001E2C78(void*,const char*,s32);
extern void *D_002AD408(u32);
extern const char *func_001D4010(void *);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2E38(void*,const char*,void*);
extern void func_001E2B98(void*,const char*,s32);
extern char D_0047B760[],D_0047BA70[],D_0047BAE0[],D_0047C270[],D_0047C280[],D_0047C290[],D_0047C298[],D_0047C2B8[],D_0044DD18[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
void *func_0029FAF0(char *a){
u32 key[4],reg[4];Obj *p=D_002AD408(36);ctor(p,0);func_001E2460(reg,p);
func_001E2C78(reg,D_0047BA70,*(s32 *)(a+0x14));
key[0]=0;func_001D4040(key,func_001D4010(a+0xC));func_001E2E38(reg,D_0047C270,key);
func_001D4040(key,func_001D4010(a+0x10));func_001E2E38(reg,D_0047C280,key);
func_001E2C78(reg,D_0047C290,*(s32 *)(a+0x18));
func_001E2C78(reg,D_0047B760,*(s32 *)(a+0x1C));
func_001E2C78(reg,D_0047C298,*(s32 *)(a+0x24));
func_001E2C78(reg,D_0047C2B8,*(s32 *)(a+0x20));
func_001E2B98(reg,D_0047BAE0,*(s32 *)(a+0x2C));return p;}
