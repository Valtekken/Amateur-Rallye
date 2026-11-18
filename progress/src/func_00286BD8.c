extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);void __throw(void) __attribute__((alias("func_002AE2F0")));}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}
extern "C" {
extern char D_0047B068[],D_0047D2B8[],D_0044DD18[],D_0047B028[],D_0047ADC0[],D_0047B050[];
void func_001D4040(void*,const char*);float func_0015ACB0(s32);
void*D_002AD408(u32);volatile u16 func_001E2460(void*,void*);void func_001E2C78(void*,const char*,s32);void func_001E2E38(void*,const char*,void*);
void*func_00286D50(void*a){void*k;func_001D4040(&k,D_0047B068);((s32*)a)[5]=0;((s32*)a)[6]=0;((s32*)a)[7]=0;((void**)a)[2]=D_0047D2B8;((s32*)a)[3]=0;((void**)a)[1]=k;((s32*)a)[0]=-1;((float*)a)[8]=-50;((float*)a)[4]=func_0015ACB0((s32)k)/300.f;((float*)a)[9]=1;return a;}
void func_00286BD8(char*p,void*q){*(s32*)(p+32)=*(s32*)(p+12);char*v=*(char**)(p+8);((void(*)(void*,void*))*(void**)(v+44))(p+*(s16*)(v+40),q);}
typedef struct{u32 name[8];u32 reg[4];}Loc;
static inline void zero3(u32*p){p[0]=0;p[1]=0;p[2]=0;}
static inline void init(u32*p,u32 name){p[4]=(u32)D_0044DD18;p[2]=0;p[3]=0;p[1]=0;p[0]=0;zero3(p+5);p[8]=name;}
void*func_00286AC0(char*a){u32*p=(u32*)D_002AD408(36);Loc t;func_001D4040(t.name,D_0047B028);init(p,t.name[0]);func_001E2460(t.reg,p);func_001E2E38(t.reg,D_0047B050,a+16);func_001E2C78(t.reg,D_0047ADC0,*(s32*)(a+12));return p;}
}
