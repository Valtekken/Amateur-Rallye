extern void func_001E2C78(void*,const char*,s32);
extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2E38(void*,const char*,void*);
extern void func_001E2B98(void*,const char*,s32);
extern char D_00444E40[],D_00444858[],D_00444D00[],D_00447348[],D_00447350[],D_00447358[],D_004465C0[],D_00447360[],D_00447370[],D_00447380[],D_0044DD18[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
void *func_0011CF60(char *a){
u32 key[4];u32 pad[4];u32 reg[4];Obj *p=D_002AD408(36);const char *sx;
func_001D4040(key,D_00444E40);
{u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
func_001E2C78(reg,D_00444D00,*(s32*)(a+0x10));
func_001E2C78(reg,D_00447348,*(s32*)(a+0x18));
func_001E2C78(reg,D_00447350,*(s32*)(a+0x14));
sx=D_00447358;
func_001D4040(key,D_00444858);
func_001E2E38(reg,sx,key);
func_001E2B98(reg,D_004465C0,*(s32*)(a+0xC));
func_001E2C78(reg,D_00447360,*(s32*)(a+0x34));
func_001E2C78(reg,D_00447370,*(s32*)(a+0x38));
func_001E2B98(reg,D_00447380,*(s32*)(a+0x3C));return p;}
