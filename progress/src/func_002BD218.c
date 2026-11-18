extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}

extern "C"{
typedef unsigned int Qword __attribute__((mode(TI)));
extern void func_002BCF08(void*,void*);
void func_002BD218(u8*p,u8*q){u8*dest=*(u8**)(q+32);((Qword*)(dest+128))[0]=((Qword*)q)[0];((Qword*)(dest+128))[1]=((Qword*)q)[1];((Qword*)(dest+128))[2]=((Qword*)q)[2];func_002BCF08(*(void**)(p+20),dest);}
void func_002BD1E8(s32*p,u8*q){p[2]++;func_002BD218((u8*)p[3],q);}
extern void func_0040AF58(void),func_0040AFA0(void),func_002BC8F0(void*,void*),func_002BD110(void*,s32,s32);
void func_002BD010(s32*p){while(p[11]&&!p[7]){s32*q;func_0040AF58();q=(s32*)p[11];if(q)func_002BC8F0(q,p+11);func_0040AFA0();if(q&&q[2])func_002BD110(p,q[2],0);}}
}
