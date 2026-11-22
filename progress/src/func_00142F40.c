extern u8 D_0044DD18[];
extern const char D_0044BC38[], D_0044BD40[], D_0044BD60[], D_0044BD70[];
extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2C78(void*,const char*,s32);
extern void func_001E2E38(void*,const char*,void*);
typedef struct{u32 name[8];u32 reg[4];}Loc;
static inline void zero3(u32*q){q[0]=0;q[1]=0;q[2]=0;}
static inline void init(u32*p,u32 name){p[4]=(u32)D_0044DD18;p[2]=0;p[3]=0;p[1]=0;p[0]=0;zero3(p+5);p[8]=name;}
void *func_00142F40(s32*a){u32*p=D_002AD408(36);Loc t;func_001D4040(t.name,D_0044BD40);init(p,t.name[0]);func_001E2460(t.reg,p);func_001E2C78(t.reg,D_0044BC38,a[3]);func_001E2E38(t.reg,D_0044BD60,&a[4]);func_001E2C78(t.reg,D_0044BD70,a[5]/30);return p;}
