extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}
extern "C" {
extern void (*D_00426AC0)(void) __attribute__((noreturn));
void func_002AE718(void) __attribute__((noreturn));
void func_002AE718(void){D_00426AC0();}
extern void**func_002AD838(void);extern void*func_002AE7F8(s32);extern int func_002AE840();
void func_002AEA08(void){void*p=*func_002AD838();if(!p)func_002AE718();*(s32*)((char*)p+20)=0;}
#define F(p,t,o) (*(t*)((char*)(p)+(o)))
void func_002AE8B0(s32 a,s32 b,s32 c){void*p=func_002AE7F8(48);void**q;F(p,s32,12)=b;F(p,s32,16)=c;F(p,s32,8)=a;F(p,s32,40)=a;F(p,s64,32)=0;F(p,s32,20)=0;F(p,void*,0)=(void*)func_002AE840;F(p,s16,4)=4;F(p,s16,6)=1;q=func_002AD838();F(p,void*,24)=*q;*q=p;}
}
