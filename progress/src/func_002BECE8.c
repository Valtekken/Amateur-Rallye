typedef struct __attribute__((packed)){u32 v;}U;
#define GET(p,o) (((U*)((u8*)(p)+(o)))->v)
extern s32 func_003FA580(s32,u32);extern void SignalSema_2(s32);extern s32 ReferSemaStatus_2(s32,void*);extern void func_003F9698(void*,void*,...);extern char D_00480CC0[],D_00480D08[],D_00480D10[],D_00480D68[];extern void func_002BEEF0();
s32 func_002BFCE0(s32*p,s32 a){u8*h=(u8*)p[5];u32 base=GET(h,4);u32 result=65535;if(base){u32 pos=base;u32 count=(u32)(((s64)h[3]<<8)|h[2])&65535;u32 end=pos+(count<<4);while(pos<end){if(func_003FA580(a,GET(pos,0))==0){result=(u16)(((s32)(pos-GET(p[5],4)))>>4);break;}pos+=16;}}return result;}
void func_002BEDD8(s32*a,register s32 b){if(*a!=-1){while(b--!=0){SignalSema_2(*a);}}}
typedef struct {s32 id;char*name;}Sema;
void func_002BECE8(Sema*a){s32 st[5];char*n;char*fmt; s32 id;if(a->id!=-1){s32 r=ReferSemaStatus_2(a->id,st);id=a->id;if(r==id){fmt=D_00480CC0;n=a->name;if(!n)n=D_00480D08;func_003F9698(fmt,n,id,st[0],st[1],st[3]);}else{fmt=D_00480D10;n=a->name;if(!n)n=D_00480D08;func_003F9698(fmt,n,id);}}else{fmt=D_00480D68;n=a->name;if(!n)n=D_00480D08;func_003F9698(fmt,n,-1);}}
void*func_002BEC58(s32*p){p[1]=0;p[0]=-1;func_002BEEF0();return p;}
