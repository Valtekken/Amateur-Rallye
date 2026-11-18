extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);}
struct Cleanup{void**p;Cleanup(void**a):p(a){}~Cleanup(){if(p)*p=D_0047D9A8;}};
extern "C" void*func_003D1F08(void**a,char**b){Cleanup g(a);*a=D_00488D80;char*q=*b;char*p=q-16;void**dst=a+1;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;g.p=0;return a;}
extern "C" {
void func_003D7F00(void*);
s64 func_003D9FC8(char*a,s64 b,s32 c,s32 d){if(*(s32*)(a+36)){if(c==1&&(*(s32*)a&256))b-=*(s32*)(a+8)-*(s32*)(a+4);func_003D7F00(a);}return (*(s64(**)(void*,s64,s32,s32))(*(char**)(a+80)+68))(a,b,c,d);}
s32 func_003D88B8(s32,u32);
s32 func_003DA688(s32 a,s32 b){if(a!=-1)return func_003D88B8(b,a&255);}
s32 func_003D81E8();
s32 func_003DA6B8(char*a){u8*p=*(u8**)(a+4);s32 r;if(p>=*(u8**)(a+8))r=func_003D81E8();else{r=*p;*(u8**)(a+4)=p+1;}return r;}
}
