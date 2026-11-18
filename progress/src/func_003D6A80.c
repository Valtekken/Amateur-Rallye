extern char D_00488D80[],D_0047D9A8[];extern char*func_003CD828(void*,char*);
void*func_003D1F08(void**a,char**b){char*q=*b;char*p=q-16;void**dst=a+1;*a=D_00488D80;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;return a;}
extern s32 func_003D8E78(s64,s64,s64*,s32);
s32 func_003D6A80(s64 a,s64 b,...){return func_003D8E78(a,b,(s64*)((char*)__builtin_next_arg(b)-48),0);}
extern s32 D_00439528;extern void *D_00439538,*D_00439578,*D_004395C0,*D_00439600;
extern char D_0043A6E0[],D_0043A738[],D_0043A790[],D_0043A7E8[],D_0043A848[],D_0043A8A8[];
s32 func_003D6AB8(s32 a){void*p,*q,*r;s32 old;if(a!=D_00439528){if(a){p=D_0043A7E8;r=D_0043A8A8;q=D_0043A848;}else{p=D_0043A6E0;r=D_0043A790;q=D_0043A738;}D_004395C0=p;D_00439538=q;D_00439600=r;D_00439578=r;old=D_00439528;D_00439528=a;return old;}return a;}
extern s32 func_003D7D08(u32);
s32 func_003D6B38(u32 a){return func_003D7D08(a);}
