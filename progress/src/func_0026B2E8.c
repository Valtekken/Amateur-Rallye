extern void *D_002AD408(u32); extern void func_001D4040(void *,const char *);
extern volatile unsigned short func_001E2460(void *,void *);
extern void func_001E2B98(void *,const char *,int),func_001E2C78(void *,const char *,int),func_001E2C08(void *,const char *,float);
extern char D_0044DD18[],D_00479E98[],D_00479EB0[],D_00479EC0[],D_00479ED0[],D_00479EE0[],D_00479EF8[],D_00479F10[],D_00479F20[],D_00479F30[],D_00479F40[],D_00479F50[],D_00479F60[],D_00479F70[],D_00479F80[],D_00479F90[],D_00479FA0[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt;u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
void *func_0026B2E8(void *arg0){u32 key[4],pad[4],reg[4];Obj *p=D_002AD408(0x24);func_001D4040(key,D_00479E98);{u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
func_001E2B98(reg,D_00479EB0,*(s32 *)((u8 *)arg0+8));
func_001E2B98(reg,D_00479EC0,*(s32 *)((u8 *)arg0+12));
func_001E2B98(reg,D_00479ED0,*(s32 *)((u8 *)arg0+16));
func_001E2B98(reg,D_00479EE0,*(s32 *)((u8 *)arg0+20));
func_001E2B98(reg,D_00479EF8,*(s32 *)((u8 *)arg0+24));
func_001E2C78(reg,D_00479F10,*(s32 *)((u8 *)arg0+28));
func_001E2C78(reg,D_00479F20,*(s32 *)((u8 *)arg0+32));
func_001E2C78(reg,D_00479F30,*(s32 *)((u8 *)arg0+36));
func_001E2C78(reg,D_00479F40,*(s32 *)((u8 *)arg0+40));
func_001E2C78(reg,D_00479F50,*(s32 *)((u8 *)arg0+44));
func_001E2C78(reg,D_00479F60,*(s32 *)((u8 *)arg0+48));
func_001E2C78(reg,D_00479F70,*(s32 *)((u8 *)arg0+52));
func_001E2C78(reg,D_00479F80,*(s32 *)((u8 *)arg0+56));
func_001E2C08(reg,D_00479F90,*(f32 *)((u8 *)arg0+60));
func_001E2C08(reg,D_00479FA0,*(f32 *)((u8 *)arg0+64));
return p;}
