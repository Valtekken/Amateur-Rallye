extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){Obj*p=new(a)Obj(b);return p;}
extern "C" {
extern s32 func_003F1B98(int),SignalSema_2(int);
extern s32 func_00405E90(void*,int,int,int,int,void*,int,int,int);
extern s32 D_0043E728,D_0043E710,D_0043E730;
extern char D_0043E780[],D_0043F8D0[],D_00440148[],D_0048B550[],D_0048B560[];
extern void func_003F12D0(int);
extern int func_00404EA8(const char*),func_00406080(void*);
s32 func_003F1D08(void){s32 r;void*p;if(!func_003F1B98(2))return 0;p=D_0043E780;if(func_00405E90(D_0043F8D0,14,0,0,0,p,4,0,0)<0){SignalSema_2(D_0043E728);return 0;}r=*(s32*)((u32)p|0x20000000);SignalSema_2(D_0043E728);return r;}
s32 func_003F1DA0(s32 a){if(!a){if(D_0043E710>0)func_00404EA8(D_0048B550);while(D_0043E730||func_00406080(D_0043F8D0))func_003F12D0(60);return 0;}s32 r=1;if(D_0043E730==0){r=1;if(func_00406080(D_0043F8D0)==0)r=0;}return r;}
s32 func_003F1E40(s32 a){if(!a){if(D_0043E710>0)func_00404EA8(D_0048B560);while(func_00406080(D_00440148))func_003F12D0(60);return 0;}return func_00406080(D_00440148);}
}
