typedef struct{ s32 w[7]; } Entry;extern Entry D_0049B9D0[][4];extern char *func_003CA3B0(s32,s32);
s32 func_003CA5F8(s32 a,s32 b){if(!D_0049B9D0[a][b].w[4])return 0;return *(u8*)(func_003CA3B0(a,b)+0x71);}
extern void func_003D4D70(s32);extern s32 func_003D4EA0(void**);
extern s32 func_003D6A38(s32,s32,void*,void*);
void**func_003D68D0(void**a,s32 fmt,...){u8*p=*a;u8 f=p[26];s32 ok;if(f){ok=0;p[26]=f|2;}else{if(*(s32*)(p+4))func_003D4D70(*(s32*)(p+4));ok=1;if((s32)(*(s64*)((u8*)*a+16)&1))ok=func_003D4EA0(a);}if(ok){void*p=*a;func_003D6A38(*(s32*)p,fmt,(char*)__builtin_next_arg(fmt)-48,p);}return a;}
extern s32 func_003D8E78(s32,s32,void*,s32*);
s32 func_003D6A38(s32 a,s32 b,void*c,void*d){volatile s32 flags=0;s32 r=func_003D8E78(a,b,c,(s32*)&flags);if(d)((u8*)d)[26]|=flags;return r;}
typedef struct I9{s32 a;volatile s32 b,c;s32 d;s64 e;u16 f;volatile u8 g,h;volatile s32 i,j; s32 k;void*l;}I9;typedef struct O9{I9*p;s32 b,c;}O9;extern u8 D_00489120[],D_00488F58[];O9*func_003D6248(O9*a,s32 b){I9*p;if(b){I9*q=(I9*)((u8*)a+8);a->p=q;q->g=4;q->h=0;q->l=D_00489120;q->f=32;q->e=17;q->i=6;q->j=0;a->c=0;q->b=0;q->c=0;}p=a->p;p->l=D_00488F58;if(!b){u8*t=D_00488F58;u64 x=*(u64*)t;u64 y=*(u64*)(t+8);u16 v=*(u16*)(t+8);u32 base=(u32)p-8;s32 diff=(u32)a-base;u64 sp[2];sp[0]=x;sp[1]=y;*(u16*)((u8*)sp+8)=v+(u16)diff;p->l=sp;}return a;}
