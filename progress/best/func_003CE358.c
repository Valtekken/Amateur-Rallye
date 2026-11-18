extern void func_003D13B0(const char*);extern void *func_003F931C(void*,const void*,u32);extern char D_00488D20[];
u32 func_003CE358(char **a,void*b,u32 n,u32 pos){if(*(u32*)(*a-16)<pos)func_003D13B0(D_00488D20);{u32 len=*(u32*)(*a-16)-pos;if(len<n)n=len;}func_003F931C(b,*a+pos,n);return n;}
extern s32 func_003CDDB0(char**,s32,s32,s32,s8);
s32 func_003CFFF0(char**a,char*b,char*c,s32 n,s32 ch){return func_003CDDB0(a,b-*a,c-b,n,(s8)ch);}
extern s32 func_003CD948(char**,s32,s32,const char*,u32);extern u32 func_003FA9B8(const char*);
s32 func_003D0020(char**a,char*b,char*c,const char*d){s32 pos=b-*a;return func_003CD948(a,pos,c-b,d,func_003FA9B8(d));}
s32 func_003D0090(char**a,char*b,char*c,const char*d,u32 n){return func_003CD948(a,b-*a,c-b,d,n);}
