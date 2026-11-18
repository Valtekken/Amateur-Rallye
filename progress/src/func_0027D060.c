extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);void __throw(void) __attribute__((alias("func_002AE2F0")));}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base() throw(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}
extern "C" {
void*D_002AD408(s32);void func_001D4040(void*,const char*);extern char D_0047C528[],D_0047A088[];
void*func_002AA148(char*a){s32 k;s32*p=(s32*)D_002AD408(12);s32 v,k0;func_001D4040(&k,D_0047C528);v=*(s32*)(a+8);k0=k;p[1]=(s32)D_0047A088;p[0]=k0;p[2]=v;return p;}
void func_001C6710(s32,s32,s32,void*);
void func_0027D678(s32*p,s32 b,s32 c,u8 d){u8 v[1];v[0]=d;func_001C6710(*p,b,c,v);}
static inline float* vec(float*p,float x,float y,float z){p[0]=x;p[1]=y;p[2]=z;return p;}
static inline void cp(float*d,float*s){d[0]=s[0];d[1]=s[1];d[2]=s[2];}
void func_0027D060(char*p){float v[3];cp((float*)(p+396),vec(v,0,-*(float*)(p+28)**(float*)(p+32),0));}
}
