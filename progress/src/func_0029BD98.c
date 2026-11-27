extern void func_001E2C78(void*,const char*,s32);
extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2E38(void*,const char*,void*);
extern char D_0044DD18[],D_0047BA40[],D_0047BD28[],D_0047BF20[],D_0047BF38[],D_0047BF48[],D_0047BF58[],D_0047BF68[],D_0047BF78[],D_0047BF90[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
static inline void null_e(void *key,void *reg,const char *label,const char *null){
func_001D4040(key,null);
func_001E2E38(reg,label,key);
}
void *func_0029BD98(char *a){
const char *label;const char *null;
u32 key[4];u32 pad[4];u32 reg[4];Obj *p=D_002AD408(36);
func_001D4040(key,D_0047BF20);
{u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
func_001E2C78(reg,D_0047BF38,0);
null=D_0047BA40;
null_e(key,reg,D_0047BF48,null);
func_001E2C78(reg,D_0047BF58,*(s32*)(a+0x2C));
null_e(key,reg,D_0047BF68,null);
null_e(key,reg,D_0047BF78,null);
null_e(key,reg,D_0047BF90,null);
func_001E2C78(reg,D_0047BD28,*(s32*)(a+0x30));return p;}
