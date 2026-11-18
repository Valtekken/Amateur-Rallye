extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}
extern "C" {extern char D_00489000[];s32 func_003D6EB0(void*,s32);void func_003D6EE8(void*,s32);void func_003DE2F0(void*);void func_003DE5D0(void*,s32);void func_003DAB38(void*,s32,s32);s32 func_003DE6B8(void*,s32,s32);}
struct StreamBase{char pad[84];StreamBase(){func_003D6EB0(this,0);}~StreamBase(){func_003D6EE8(this,0);}};
struct Stream:StreamBase{Stream(s32 b){*(void**)(pad+80)=D_00489000;func_003DE2F0(this);func_003DE5D0(this,b);}Stream(s32 b,s32 c,s32 d){*(void**)(pad+80)=D_00489000;func_003DE2F0(this);func_003DE5D0(this,b);func_003DAB38(this,c,d);}};
extern "C" void*func_003DA7E0(void*a,s32 b){return new(a)Stream(b);}
extern "C" void*func_003DA868(void*a,s32 b,s32 c,s32 d){return new(a)Stream(b,c,d);}
extern "C" s32 func_003DA918(char*a,s32 b){*(void**)(a+80)=D_00489000;if(*(s32*)(a+56)>=0){s32 p=*(s32*)(a+16);func_003DE6B8(a,p,*(s32*)(a+20)-p);if(!(*(s32*)a&64))(*(void(**)(void*))(*(char**)(a+80)+132))(a);}func_003D6EE8(a,b);}
