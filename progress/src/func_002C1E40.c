extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}

extern "C" {void func_0040AF58();void func_0040AFA0();extern void**D_00428F24;s32 func_002C1FD0(s32);s32 func_002C2100(s32,s32);void func_003F9698(const char*,...);extern s32 D_00428F0C,D_00428F14,D_0049AAC0;extern char D_004814B0[],D_004814C0[],D_00481368[],D_00481398[];s32 func_002C1EB8(u32);}
#define VC(o,off) ((*(void(**)(void*))((char*)*(void**)(o)+(off)+4))((char*)(o)+*(s16*)((char*)*(void**)(o)+(off))))
extern "C" void func_002C39D8(void**a){func_0040AF58();void**b=D_00428F24;D_00428F24=0;func_0040AFA0();if(b){if(b!=a){VC(b,24);if(a)VC(a,16);}else VC(a,64);}func_0040AF58();D_00428F24=a;func_0040AFA0();}
extern "C" s32 func_002C2588(s32 a,s32 b){s32 r=0;if(func_002C1FD0(b)){D_00428F0C=0;D_0049AAC0=0;func_003F9698(D_004814B0);do{}while(func_002C2100(a,1));r=1;func_003F9698(D_004814C0);D_00428F14=0;}return r;}
extern "C" s32 func_002C1E40(u32 a,s32 b){s32 r=func_002C1EB8(a);if(!r)func_003F9698(D_00481368,a,b);else func_003F9698(D_00481398,a>>10,b);return r;}
