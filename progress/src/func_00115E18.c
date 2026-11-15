extern u8 D_0044DD18[];
extern const char D_00446938[],D_00446960[],D_00446978[],D_00446980[];
extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2F18(void*,const char*,void*);
extern void func_001E2B98(void*,const char*,u32);
typedef struct{u32 name[8];u32 reg[4];}Loc;
static inline void zero3(u32*q){q[0]=0;q[1]=0;q[2]=0;}
static inline void init(u32*p,u32 name){p[4]=(u32)D_0044DD18;p[2]=0;p[3]=0;p[1]=0;p[0]=0;zero3(p+5);p[8]=name;}
void *func_00115E18(char*a){u32*p=D_002AD408(36);Loc t;func_001D4040(t.name,D_00446960);init(p,t.name[0]);func_001E2460(t.reg,p);func_001E2F18(t.reg,D_00446938,a+12);func_001E2F18(t.reg,D_00446978,a+24);func_001E2B98(t.reg,D_00446980,*(u32*)(a+36));return p;}
