typedef struct{u32 x[2];} Item;extern Item*func_003AD3E0(s32);extern Item*func_003AD3A8(s32);
s32 func_003A6178(register s32 a){register Item*p=func_003AD3E0(a);return p-func_003AD3A8(a);}
typedef struct __attribute__((packed)){u32 v;} U;
#define GET(p,o) (((U*)((u8*)(p)+(o)))->v)
extern void func_002BFEB0(s32*,s32,s32);extern void func_002BFEF8(s32*,s32,s32);extern void func_002BFF88(s32*,s32,s32);
s32 func_002BFE18(s32*p){p[5]=p[3];func_002BFEB0(p,p[5]-GET(p[5],28),1);p[6]=GET(p[5],12);p[7]=GET(p[5],20);func_002BFEF8(p,p[3]-GET(p[5],28),1);func_002BFF88(p,p[3]-GET(p[5],28),1);return 1;}
extern u32 func_003FA9B8(void);
u32 func_002BFD98(u8*p){u32 state=func_003FA9B8();u32 step=(state>>5)|1;u32 n=state;if(state>=step){do{u8 b=*p;u32 c=b!=47?b:92;n-=step;p++;state^=(state<<5)+(state>>2)+(c&223);}while(n>=step);}return state;}
extern s32 func_003FA580(s32,u32);
s32 func_002BFCE0(s32*p,s32 a){u8*h=(u8*)p[5];u32 base=GET(h,4);u32 result=65535;if(base){u32 pos=base;u32 end=pos+((u16)(((s64)h[3]<<8)|h[2])<<4);while(pos<end){if(func_003FA580(a,GET(pos,0))==0){result=(u16)(((s32)(pos-GET(p[5],4)))>>4);break;}pos+=16;}}return result;}
