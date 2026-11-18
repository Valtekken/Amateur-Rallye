extern "C" {extern char D_00488D80[],D_0047D9A8[];extern char*func_003CD828(void*,char*);}
struct Cleanup{void**p;Cleanup(void**a):p(a){}~Cleanup(){if(p)*p=D_0047D9A8;}};
extern "C" void*func_003D1F08(void**a,char**b){Cleanup g(a);*a=D_00488D80;void**dst=a+1;char*q=*b;char*p=q-16;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;g.p=0;return a;}
extern "C" {extern s32 func_003D8CE0(u32);extern s32 func_003D8B40(u32);
s32 func_003D7150(u32 a){return func_003D8CE0(a);}
s32 func_003D71A0(s32**a){s32*p=*a;s32 r=0;if(p)r=(*p&12)!=12;return r;}
s32 func_003D71C8(u32 a){return func_003D8B40(a);}}
