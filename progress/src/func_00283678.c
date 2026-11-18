extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);void __throw(void) __attribute__((alias("func_002AE2F0")));}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b):Base(){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}
extern "C" {
void func_00283720(void*);void func_00289958(void*,s32);extern char D_0044DCD8[];void D_002AD390(void*);s32 func_00201350(void);
void func_00283678(char*p,s32 q){if(func_001E3650(func_001E4280(),(s32)(p+116))<=0){if(*(s32*)(p+16))func_00283720(p);float*a=(float*)(p+92),*b=(float*)(p+44),*c=(float*)(p+104),*d=(float*)(p+56);b[0]=a[0];b[1]=a[1];b[2]=a[2];d[0]=c[0];d[1]=c[1];d[2]=c[2];func_00289958(p+20,q);}}
void func_002831C0(void*p,s32 f){((void**)p)[2]=D_0044DCD8;((void**)p)[7]=D_0044DCD8;if(f&1)D_002AD390(p);}
void func_00282788(char*p){float*t=*(float**)(func_00201350()+(*(s32*)(p+12)<<2));float v;if(!*(s32*)(p+32))v=*(float*)(p+20);else v=*(float*)(p+24);*t=v;}
}
