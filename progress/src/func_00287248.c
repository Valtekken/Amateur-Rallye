extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);void __throw(void) __attribute__((alias("func_002AE2F0")));}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}
extern "C" {
extern char D_0047B170[],D_0047D138[],D_0044DD18[],D_0047B190[],D_0047B1A0[];
void func_001D4040(void*,const char*);void func_002A4928(void*);void *D_002AD408(u32);void func_001E2460(void*,void*);void func_001E2B98(void*,const char*,u32);
void *func_00288D50(s32*p){u32 n[4];func_001D4040(n,D_0047B170);p[1]=n[0];p[0]=-1;p[2]=(s32)D_0047D138;func_002A4928(p+3);return p;}
static inline void zero3(u32*p){p[0]=0;p[1]=0;p[2]=0;}
static inline void init(u32*p){p[2]=0;p[3]=0;p[1]=0;p[0]=0;p[4]=(u32)D_0044DD18;zero3(p+5);p[8]=0;}
void*func_00288E40(u32*a){u32*p=(u32*)D_002AD408(36);u32 unused[4],reg[4];init(p);func_001E2460(reg,p);func_001E2B98(reg,D_0047B190,a[3]);func_001E2B98(reg,D_0047B1A0,a[4]);return p;}
extern char D_0047AF40[],D_0047B088[],D_0047B098[],D_0047B0A8[];
void func_001E2510(void*,const char*,void*);void func_001E2A48(void*,const char*,void*);
void func_00287248(char*a,s32 unused,void*c){float vec[4];u32 reg[4];func_001E2460(reg,c);func_001E2510(reg,D_0047AF40,a+16);func_001E2A48(reg,D_0047B088,vec);((float*)a)[5]=vec[0];((float*)a)[6]=vec[1];((float*)a)[7]=vec[2];func_001E2510(reg,D_0047B098,a+32);func_001E2510(reg,D_0047B0A8,a+36);}
}
