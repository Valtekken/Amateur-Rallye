extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){new(a)Obj(b);return a;}
extern "C"{
extern s32 D_00496948[],D_00428CE0[],D_00428CDC;extern char D_00480830[];extern void func_002BF070(void*);extern void func_002BF098(void*,s32);
void func_002BDCA0(s32 a,s32 b){if(b==65535){if(a){D_00496948[0]=0;D_00496948[2]=600;D_00496948[1]=100000;D_00496948[3]=0;D_00496948[4]=0;D_00496948[5]=0;D_00496948[6]=0;func_002BF070(D_00428CE0);D_00428CE0[3]=(s32)D_00480830;}else func_002BF098(D_00428CE0,2);}}
void func_002BDB88(volatile s32*p){p[5]=0;if(!p[4])do{p[5]=(p[5]+3)%131;}while(!p[4]);}
s32 func_002BDB40(void){s32 mod=131;s32 n=49;do{n--;D_00428CDC=(D_00428CDC+3)%mod;}while(n>=0);return D_00428CDC;}
}
