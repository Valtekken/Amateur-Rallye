extern void func_001E2C78(void*,const char*,s32),func_001E2B98(void*,const char*,s32),func_001E2E38(void*,const char*,void*);
extern void *D_002AD408(u32);extern void func_001D4040(void*,const char*);extern volatile unsigned short func_001E2460(void*,void*);
extern char D_0044DD18[],D_0047C1F0[],D_0047BF38[],D_0047BA40[],D_0047BC10[],D_0047BC18[],D_0047BC28[],D_0047BC38[],D_0047C180[],D_0047C208[],D_0047C218[],D_0047C228[],D_0047C238[],D_0047C248[],D_0047BCB0[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
void *func_0029EE78(char *a){
u32 key[4];u32 pad[4];u32 reg[4];Obj *p=D_002AD408(36);const char *sx,*sy;
func_001D4040(key,D_0047C1F0);{u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
func_001E2C78(reg,D_0047BF38,0);
sx=D_0047BC10;func_001D4040(key,D_0047BA40);func_001E2E38(reg,sx,key);
func_001E2C78(reg,D_0047BC18,0);func_001E2C78(reg,D_0047BC28,0);
sy=D_0047BC38;func_001D4040(key,D_0047C180);func_001E2E38(reg,sy,key);
func_001E2C78(reg,D_0047C208,0);func_001E2C78(reg,D_0047C218,0);
func_001E2C78(reg,D_0047C228,1);func_001E2C78(reg,D_0047C238,1);
func_001E2C78(reg,D_0047C248,*(s32*)(a+0x54));func_001E2B98(reg,D_0047BCB0,*(s32*)(a+0x58));return p;}
