extern void func_001E2C78(void*,const char*,s32);
extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2E38(void*,const char*,void*);
extern void func_001E2B98(void*,const char*,s32);
extern char D_00444858[],D_00444878[],D_00446628[],D_00446738[],D_00447208[],D_00447218[],D_00447220[],D_00447230[],D_00447240[],D_00447250[],D_00447260[],D_00447270[],D_00447280[],D_00447290[],D_00447298[],D_004472B0[],D_004472B8[],D_0044DD18[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
void *func_0011B7C0(char *a){
u32 key[4];u32 pad[4];u32 reg[4];Obj *p=D_002AD408(36);const char *sx,*sy;
func_001D4040(key,D_00446628);
{u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
func_001E2C78(reg,D_00447208,0);
sx=D_00447218;
func_001D4040(key,D_00444858);
func_001E2E38(reg,sx,key);
func_001E2C78(reg,D_00447220,0);
func_001E2C78(reg,D_00447230,0);
sy=D_00447240;
func_001D4040(key,D_00444878);
func_001E2E38(reg,sy,key);
func_001E2C78(reg,D_00447250,0);
func_001E2C78(reg,D_00447260,0);
func_001E2C78(reg,D_00447270,1);
func_001E2C78(reg,D_00447280,1);
func_001E2C78(reg,D_00447290,*(s32*)(a+0x48));
func_001E2C78(reg,D_00446738,*(s32*)(a+0x4C));
func_001E2C78(reg,D_00447298,1);
func_001E2B98(reg,D_004472B0,*(s32*)(a+0x50));
func_001E2B98(reg,D_004472B8,*(s32*)(a+0x60));
return p;}
