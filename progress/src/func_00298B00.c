extern void func_001E2C78(void*,const char*,s32),func_001E2B98(void*,const char*,s32),func_001E2E38(void*,const char*,void*),func_001E2F18(void*,const char*,void*),func_001E2EA8(void*,const char*,void*);
extern void *D_002AD408(u32);extern void func_001D4040(void*,const char*);extern volatile unsigned short func_001E2460(void*,void*);
extern char D_0044DD18[],D_0047BBF0[],D_0047BC08[],D_0047BC10[],D_0047BC18[],D_0047BC28[],D_0047BC38[],D_0047BC48[],D_0047BC50[],D_0047BC70[],D_0047BC88[],D_0047BC98[],D_0047BCA8[],D_0047BCB0[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
void *func_00298B00(char *a){
u32 key[4];u32 pad[4];u32 reg[4];Obj *p=D_002AD408(36);
func_001D4040(key,D_0047BBF0);{u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
func_001E2C78(reg,D_0047BC08,*(s32*)(a+0xc));func_001E2E38(reg,D_0047BC10,a+0x58);
func_001E2C78(reg,D_0047BC18,*(s32*)(a+0x50));func_001E2C78(reg,D_0047BC28,*(s32*)(a+0x54));
func_001E2E38(reg,D_0047BC38,a+0x5c);
key[2]=key[1]=key[0]=0;func_001E2F18(reg,D_0047BC48,key);
func_001E2C78(reg,D_0047BC50,0);func_001E2C78(reg,D_0047BC70,0);
func_001E2C78(reg,D_0047BC88,*(s32*)(a+0x24));func_001E2C78(reg,D_0047BC98,*(s32*)(a+0x24));
((float*)key)[0]=1;((float*)key)[1]=1;((float*)key)[2]=1;((float*)key)[3]=1;
func_001E2EA8(reg,D_0047BCA8,key);func_001E2B98(reg,D_0047BCB0,*(s32*)(a+0x60));return p;}
