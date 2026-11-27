extern void func_001E2C78(void*,const char*,s32);
extern void func_001E2B98(void*,const char*,s32);
extern void func_001E2C08(void*,const char*,f32);
extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern f32 func_0027DF58(void);
extern char D_0044DD18[],D_0047B0D8[],D_0047B0E8[],D_0047B0F8[],D_0047B108[],D_0047B118[],D_0047B128[],D_0047B138[],D_0047B148[],D_0047B158[],D_0047B160[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
void *func_00287B68(char *a){
u32 key[4];u32 pad[4];u32 reg[4];Obj *p=D_002AD408(36);
func_001D4040(key,D_0047B0D8);
ctor(p,key[0]);
func_001E2460(reg,p);
func_001E2B98(reg,D_0047B0E8,*(s32*)(a+0x10));
func_001E2B98(reg,D_0047B0F8,*(s32*)(a+0x14));
func_001E2C08(reg,D_0047B108,*(f32*)(a+0x1C));
func_001E2C08(reg,D_0047B118,*(f32*)(a+0x20)*func_0027DF58()*30.0f);
func_001E2C08(reg,D_0047B128,*(f32*)(a+0x2C));
func_001E2C08(reg,D_0047B138,*(f32*)(a+0x30));
func_001E2C08(reg,D_0047B148,*(f32*)(a+0x34));
func_001E2C08(reg,D_0047B158,*(f32*)(a+0x38));
func_001E2C78(reg,D_0047B160,*(s32*)(a+0xC));
return p;}
