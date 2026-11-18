typedef struct{s32 value;}CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
typedef struct{s32 type,sign,exp,pad;u64 mant;}Wide;
extern void func_002ABBE8(u64*,Wide*);extern u64 func_002ABAB8(Wide*);
u64 func_002AC728(s32 a,s32 b,s32 c,u64 d){Wide p;p.type=a;p.sign=b;p.exp=c;p.mant=d;return func_002ABAB8(&p);}
s32 func_002AC5B8(u64 a){Wide p;s32 v;func_002ABBE8(&a,&p);if(((u32)p.type^2)==0)return 0;else if((u32)p.type<2)return 0;if((p.type^4)==0)goto sat;if(p.exp<0)return 0;if(p.exp<31)goto convert;sat:return p.sign?0x80000000:0x7fffffff;convert:v=(s32)(p.mant>>(60-p.exp));return p.sign?-v:v;}
u64 func_002AC500(s32 a){Wide p;u64 m,t;s32 e;p.type=3;p.sign=(u32)a>>31;if(!a)p.type=2;else{p.exp=60;if(p.sign){if((u32)a==0x80000000)return 0xC1E0000000000000ULL;p.mant=-a;}else p.mant=a;m=p.mant;if(m<=0x0fffffffffffffffULL){e=p.exp;do{t=m*2;e--;m=t;}while(t<=0x0fffffffffffffffULL);p.exp=e;p.mant=t;}}return func_002ABAB8(&p);}
