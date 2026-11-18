extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}
extern "C" {s32 func_002AFF50(u32);s32 func_002B11C0(u32 a){return func_002AFF50(a);}s32 func_002B1150(u32 a){return func_002AFF50(a);}
extern s32 D_00427878,D_0047DC10,D_0047DCD8;
s32*func_002B0CD8(void){if(*(s32**)&D_00427878==0 && &D_00427878!=0){*(s32**)((char*)&D_00427878+4)=&D_0047DCD8;*(s32**)&D_00427878=&D_0047DC10;}return &D_00427878;}}
