/* identical to func_00397428 (matched), with its names changed by decompdecomp */
s32*func_0039C298(s32);s32*func_0039C2D0(s32);void func_00374288(s32,s32);void func_0039C330(s32,s32);
void func_0039C390(register s32 a,s32 p){while(p){s32 next;func_00374288(a,*func_0039C298(p));next=*func_0039C2D0(p);func_0039C330(a,p);p=next;}}
void func_003973A0(s32);void func_003A5C10(s32,s32);void func_0039C330(register s32 a,register s32 b){func_003973A0(b+16);func_003A5C10(a,b);}
typedef struct {u64 a,b,c;} __attribute__((packed)) S24;S24*func_003974C8(register S24*a,register S24*b,register S24*c,register S24*d,register S24*e){register S24*dst;s32 n=b-a;while(n>0){dst=--c;*dst=*--b;n--;}return c;}
s32*func_0039C2D0(register s32 a){return (s32*)(a+8);}
