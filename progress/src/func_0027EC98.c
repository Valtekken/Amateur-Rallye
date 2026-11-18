extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);void __throw(void) __attribute__((alias("func_002AE2F0")));}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}
extern "C" {
void func_0027EC98(char*p){char*a=p+100,*b=p+164,*c=p+132;*(float*)(a+24)=*(float*)(a+12);*(s32*)(b+24)=0;*(s32*)(c+24)=0;*(s32*)(a+28)=0;*(s32*)(b+28)=0;*(s32*)(c+28)=0;*(s32*)(p+72)=0;*(s32*)(p+76)=0;*(s32*)(p+68)=0;*(s32*)(p+80)=0;}
void func_0027E708(float*p,float dt){s32 state=((s32*)p)[7];float v,l;if(state){if(state==1){v=p[6]+p[0]*dt;l=p[5];p[6]=v;if(!(l<=v))return;p[6]=v<l?v:l;}else{v=p[6]-p[1]*dt;l=p[5];p[6]=v;if(!(v<=l))return;p[6]=l<v?v:l;}((s32*)p)[7]=0;}}
void func_0027E628(char*p,s32 a){char**base=(char**)(p+12);char**it=*(char***)base;if(it!=*(char***)(base+1)){do{char*obj=*it++;char*vt=*(char**)(obj+8);((void(*)(void*,s32,void*))*(void**)(vt+44))(obj+*(s16*)(vt+40),a,obj);}while(it!=*(char***)(base+1));}}
}
